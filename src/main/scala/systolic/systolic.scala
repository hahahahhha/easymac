package systolic

import io._
import ppadder._
import partialprod._
import wallace._
import wtmultiplier._

import chisel3.iotesters.PeekPokeTester
import chisel3.util._
import chisel3.{Bundle, Input, Module, Output, UInt, _}

import java.io.PrintWriter
import java.io.File

import scala.io.Source

class MACd(m: Int, n: Int, myarchw: List[Int], inedges: Map[List[Int], List[Int]], outedges: Map[List[Int], List[Int]], res: Map[Int, List[Int]],
          myarcha: List[Int], pedge: Map[List[Int], List[Int]], gedge: Map[List[Int], List[Int]], post: Map[Int, Int],
          myarcha2: List[Int], pedge2: Map[List[Int], List[Int]], gedge2: Map[List[Int], List[Int]], post2: Map[Int, Int]
          ,pedepth:Int
          ) extends Module {
  val accuwidth=n+m+log2Ceil(pedepth)-1//This accuwidth makes sure multiplication doesn't affect accuracy, but addition might do
  val io = IO(new Bundle {
    val multiplicand = Input(Vec(pedepth,UInt(m.W)))
    val multiplier = Input(Vec(pedepth,UInt(n.W)))
    val addend = Input(UInt((accuwidth).W))
    val outs = Output(UInt((accuwidth).W))
  })

  val pp = for(i<-0 until pedepth) yield Module(new PartialProd(m, n))
  for(i<-0 until pedepth){
    pp(i).io.multiplicand := io.multiplicand(i)
    pp(i).io.multiplier := io.multiplier(i)
  }

  val wt = Module(new Wallaced(m, n, myarchw, inedges, outedges, res, pedepth))
  val flattenedPP = VecInit(pp.flatMap(p => p.io.outs))
  wt.io.pp := flattenedPP
  val ppa1 = Module(new PPAdder(accuwidth, myarcha, pedge, gedge, post))
  ppa1.io.augend := wt.io.augend
  ppa1.io.addend := wt.io.addend

  val ppa2 = Module(new PPAdder(accuwidth, myarcha2, pedge2, gedge2, post2))//can be modified to be different from ppa1
  ppa2.io.augend := ppa1.io.outs
  ppa2.io.addend := io.addend

  io.outs := ppa2.io.outs
}

class PE(
  m:Int,n:Int, myarchw: List[Int], inedges: Map[List[Int], List[Int]], outedges: Map[List[Int], List[Int]], res: Map[Int, List[Int]],
          myarcha: List[Int], pedge: Map[List[Int], List[Int]], gedge: Map[List[Int], List[Int]], post: Map[Int, Int],
          myarcha2: List[Int], pedge2: Map[List[Int], List[Int]], gedge2: Map[List[Int], List[Int]], post2: Map[Int, Int],
  pedepth:Int,
) extends Module{
  val accuwidth=n+m+log2Ceil(pedepth)-1
  val io=IO(new Bundle{
    val a_in = Input(Vec(pedepth,UInt(m.W)))
    val a_out =Output(Vec(pedepth,UInt(m.W)))
    val b_in = Input(Vec(pedepth,UInt(n.W)))
    val b_out = Output(Vec(pedepth,UInt(n.W)))
    val c_in = Input(UInt((accuwidth).W))
    val c_out = Output(UInt((accuwidth).W))
    val stationaryCtrl = Input(Bool())// to be modified
  })
  def systolicInput(din:Vec[UInt], dout:Vec[UInt]):Vec[UInt] ={
    val r = RegNext(din)
    dout := r
    r
  }
//

  val a_data= systolicInput(io.a_in, io.a_out)
  val b_data= systolicInput(io.b_in, io.b_out)

  val mac=Module(new MACd(m, n, myarchw, inedges, outedges, res, myarcha, pedge, gedge, post, myarcha2, pedge2, gedge2, post2,pedepth))
    
  val compute_result = mac.io.outs
  mac.io.addend:=io.c_out
  mac.io.multiplicand:=a_data
  mac.io.multiplier:=b_data
  def stationaryOutput(din:UInt, dout:UInt): Unit = {
    val r = Reg(UInt(compute_result.getWidth.W))
    when (io.stationaryCtrl) { r := din }
    .otherwise { r := compute_result }
    dout := r
  }

  stationaryOutput(io.c_in, io.c_out)
}

class PEArray(
  m:Int,n:Int, myarchw: List[Int], inedges: Map[List[Int], List[Int]], outedges: Map[List[Int], List[Int]], res: Map[Int, List[Int]],
          myarcha: List[Int], pedge: Map[List[Int], List[Int]], gedge: Map[List[Int], List[Int]], post: Map[Int, Int],
          myarcha2: List[Int], pedge2: Map[List[Int], List[Int]], gedge2: Map[List[Int], List[Int]], post2: Map[Int, Int],
  pedepth:Int, arraysize:Int
) extends Module{
  val io=IO(new Bundle{
  val a_in = Input(Vec(arraysize,Vec(pedepth, UInt(m.W))))
  val b_in = Input(Vec(arraysize,Vec(pedepth,UInt(n.W))))
  val c_in = Input(Vec(arraysize,Vec(pedepth, UInt((n+m-1).W))))
  val c_out = Output(Vec(arraysize,UInt((n+m-1).W)))
  val stationaryCtrl = Input(Bool())
  })
  val accuwidth=m+n+arraysize*pedepth-1

  val PEs = for (i<-0 until arraysize) yield
  for (j<-0 until arraysize) yield
  Module(new PE(m, n, myarchw, inedges, outedges, res, myarcha, pedge, gedge, post, myarcha2, pedge2, gedge2, post2,pedepth))

  for(i<-0 until arraysize){
    PEs(0)(i).io.a_in:=io.a_in(i)
    PEs(i)(0).io.b_in:=io.b_in(i)
    PEs(0)(i).io.c_in:=io.c_in(i)
    io.c_out(i):=PEs(arraysize-1)(i).io.c_out
  }

  for(i<-0 until arraysize;j<-0 until arraysize){
    PEs(i)(j).io.stationaryCtrl:=io.stationaryCtrl
  }

  def systolicInputConnect(
    PEs: Seq[Seq[PE]],
    dx: Int,
    dy: Int,
    tensor:Int
  ): Unit = {
    tensor match{
      case 0 =>
      for (i<-0 until arraysize; j<-0 until arraysize)
      if (0 <= i+dx && i+dx < arraysize && 0 <= j+dy && j+dy < arraysize){
      PEs(i+dx)(j+dy).io.a_in := PEs(i)(j).io.a_out
      }
      case 1 =>
      for (i<-0 until arraysize; j<-0 until arraysize)
      if (0 <= i+dx && i+dx < arraysize && 0 <= j+dy && j+dy < arraysize){
      PEs(i+dx)(j+dy).io.b_in := PEs(i)(j).io.b_out
      }
      case 2 =>
      for (i<-0 until arraysize; j<-0 until arraysize)
      if (0 <= i+dx && i+dx < arraysize && 0 <= j+dy && j+dy < arraysize){
      PEs(i+dx)(j+dy).io.c_in := PEs(i)(j).io.c_out
      }
    }
  }

  def stationaryOutputConnect =systolicInputConnect _

  systolicInputConnect(PEs, 1, 0, 0)
  systolicInputConnect(PEs, 0, 1, 1)
  stationaryOutputConnect(PEs,1, 0, 2)
}
object test {
  val usage =
    """
      Usage: generate [--compressor-file filename1] [--prefix-adder-file filename2] [--accumulator-file filename3] 
  """

  def main(args: Array[String]): Unit = {

    if (args.length == 0) println(usage)

    val arglist = args.toList

    //type OptionMap = Map[Symbol, Any]

    val argmap = (0 until arglist.size / 2).map(i => arglist(i * 2) -> arglist(i * 2 + 1)).toMap

    val filename1 = argmap("--compressor-file")
    val filename2 = argmap("--prefix-adder-file")
    val filename3 = argmap("--accumulator-file")

    val filecontent1 = ReadWTd.readFromWTTxt(filename1)

    val m = ReadWTd.getBits(filecontent1)(0)
    val n = ReadWTd.getBits(filecontent1)(1)
    val macdepth= ReadWTd.getMacDepth(filecontent1)(0)
    // wallace tree 
    val numcompressors = ReadWTd.getNumCells(filecontent1)(0)

    val myarchw = ReadWTd.getArch(filecontent1)

    val depthw = ReadWTd.getDepth(myarchw)

    val inedges = ReadWTd.getIn(m, n, myarchw,macdepth)

    val outedges = ReadWTd.getOut(m, n, myarchw,macdepth)

    val res = ReadWTd.getRes(m, n, myarchw,macdepth)

    //final adder
    val filecontent2 = ReadPPA.readFromPPATxt(filename2)

    val l = ReadPPA.getBits(filecontent2)(0)

    val numpgcells = ReadPPA.getNumCells(filecontent2)(0)

    val myarcha = ReadPPA.getArch(filecontent2)

    val deptha = ReadPPA.getDepth(myarcha)

    val pedge = ReadPPA.genPEdge(l, deptha, myarcha)

    val gedge = ReadPPA.genGEdge(l, deptha, myarcha)

    val pos = ReadPPA.genFinal(l, myarcha)

    //accumulate adder
    val filecontent3 = ReadPPA.readFromPPATxt(filename3)

    val l2 = ReadPPA.getBits(filecontent3)(0)

    val numpgcells2 = ReadPPA.getNumCells(filecontent3)(0)

    val myarcha2 = ReadPPA.getArch(filecontent3)

    val deptha2 = ReadPPA.getDepth(myarcha)

    val pedge2 = ReadPPA.genPEdge(l, deptha, myarcha)

    val gedge2 = ReadPPA.genGEdge(l, deptha, myarcha)

    val pos2 = ReadPPA.genFinal(l, myarcha)

    val topDesign = () => new MACd(m, n, myarchw, inedges, outedges, res, myarcha, pedge, gedge, pos, myarcha2, pedge2, gedge2, pos2,macdepth)
    (new chisel3.stage.ChiselStage).emitVerilog(topDesign(), Array("-td", "./RTL/macd"))
    iotesters.Driver.execute(Array("-tgvo", "on", "-tbn", "verilator"), topDesign) {
      c => new MacdTester(c)
    }
  }
}

class MacdTester(c: MACd) extends PeekPokeTester(c) {
  poke(c.io.multiplicand(0), 7)
  poke(c.io.multiplicand(1), 77)
  poke(c.io.multiplier(0), 27)
  poke(c.io.multiplier(1), 2)
  poke(c.io.addend, 0)

  step(1)

  println("The result of 7 * 27+77*2 + 1 is: " + peek(c.io.outs).toString())

  expect(c.io.outs, 7*27+77*2+0)
}

/*
object test {
  val usage =
    """
      Usage: generate [--compressor-file filename1] [--prefix-adder-file filename2] [--accumulator-file filename3] [--systolic-file filename4]
  """

  def main(args: Array[String]): Unit = {

    if (args.length == 0) println(usage)

    val arglist = args.toList

    //type OptionMap = Map[Symbol, Any]

    val argmap = (0 until arglist.size / 2).map(i => arglist(i * 2) -> arglist(i * 2 + 1)).toMap

    val filename1 = argmap("--compressor-file")
    val filename2 = argmap("--prefix-adder-file")
    val filename3 = argmap("--accumulator-file")
    val filename4 = argmap("--systolic-file")

    val filecontent1 = ReadWTd.readFromWTTxt(filename1)

    val m = ReadWTd.getBits(filecontent1)(0)
    val n = ReadWTd.getBits(filecontent1)(1)
    val macdepth= ReadWTd.getMacDepth(filecontent1)(0)
    // wallace tree 
    val numcompressors = ReadWTd.getNumCells(filecontent1)(0)

    val myarchw = ReadWTd.getArch(filecontent1)

    val depthw = ReadWTd.getDepth(myarchw)

    val inedges = ReadWTd.getIn(m, n, myarchw,macdepth)

    val outedges = ReadWTd.getOut(m, n, myarch,macdepth)

    val res = ReadWTd.getRes(m, n, myarchw,macdepth)

    //final adder
    val filecontent2 = ReadPPA.readFromPPATxt(filename2)

    val l = ReadPPA.getBits(filecontent2)(0)

    val numpgcells = ReadPPA.getNumCells(filecontent2)(0)

    val myarcha = ReadPPA.getArch(filecontent2)

    val deptha = ReadPPA.getDepth(myarcha)

    val pedge = ReadPPA.genPEdge(l, deptha, myarcha)

    val gedge = ReadPPA.genGEdge(l, deptha, myarcha)

    val pos = ReadPPA.genFinal(l, myarcha)

    //accumulate adder
    val filecontent3 = ReadPPA.readFromPPATxt(filename3)

    val l2 = ReadPPA.getBits(filecontent3)(0)

    val numpgcells2 = ReadPPA.getNumCells(filecontent3)(0)

    val myarcha2 = ReadPPA.getArch(filecontent3)

    val deptha2 = ReadPPA.getDepth(myarcha)

    val pedge2 = ReadPPA.genPEdge(l, deptha, myarcha)

    val gedge2 = ReadPPA.genGEdge(l, deptha, myarcha)

    val pos2 = ReadPPA.genFinal(l, myarcha)

    //systolic array 
    val filecontent4 = ReadSA.readFromSATxt(filename4)

    val pedepth = ReadSA.getDepth(filecontent4)(0)
    val arraysize = ReadSA.getSize(filecontent4)(0)
    
    val topDesign = () => new PEArray(m, n, myarchw, inedges, outedges, res, myarcha, pedge, gedge, pos, myarcha2, pedge2, gedge2, pos2,pedepth,arraysize)
    (new chisel3.stage.ChiselStage).emitVerilog(topDesign(), Array("-td", "./RTL/systolic"))
    iotesters.Driver.execute(Array("-tgvo", "on", "-tbn", "verilator"), topDesign) {
      c => new SystolicTester(c)
    }
  }
}
//a
class SystolicTester(c: PEArray) extends PeekPokeTester(c) {
  poke(c.io.multiplicand, 7)
  poke(c.io.multiplier, 2)
  poke(c.io.addend, 1)

  step(1)

  println("The result of 7 * 2 + 1 is: " + peek(c.io.outs).toString())

  expect(c.io.outs, 15)
}

*/