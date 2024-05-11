package systolicarray

import io._
import ppadder._
import partialprod._
import wallace._
import wtmultiplier._
import mac.MAC

import chisel3.iotesters.PeekPokeTester
import chisel3.util._
import chisel3.{Bundle, Input, Module, Output, UInt, _}

import java.io.PrintWriter
import java.io.File

import scala.io.Source
class systolicPE extends Module {
  val io=IO(new Bundle{
    val a=1
  })
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

    val filecontent = ReadWT.readFromWTTxt(filename1)

    val m = ReadWT.getBits(filecontent)(0)
    val n = ReadWT.getBits(filecontent)(1)

    // wallace tree
    val numcompressors = ReadWT.getNumCells(filecontent)(0)

    val myarchw = ReadWT.getArch(filecontent)

    val depthw = ReadWT.getDepth(myarchw)

    val inedges = ReadWT.getIn(m, n, myarchw)

    val outedges = ReadWT.getOut(m, n, myarchw)

    val res = ReadWT.getRes(m, n, myarchw)

    //final adder
    val filecontent1 = ReadPPA.readFromPPATxt(filename2)

    val l = ReadPPA.getBits(filecontent1)(0)

    val numpgcells = ReadPPA.getNumCells(filecontent1)(0)

    val myarcha = ReadPPA.getArch(filecontent1)

    val deptha = ReadPPA.getDepth(myarcha)

    val pedge = ReadPPA.genPEdge(l, deptha, myarcha)

    val gedge = ReadPPA.genGEdge(l, deptha, myarcha)

    val pos = ReadPPA.genFinal(l, myarcha)

    //accumulate adder
    val filecontent2 = ReadPPA.readFromPPATxt(filename2)

    val l2 = ReadPPA.getBits(filecontent2)(0)

    val numpgcells2 = ReadPPA.getNumCells(filecontent1)(0)

    val myarcha2 = ReadPPA.getArch(filecontent1)

    val deptha2 = ReadPPA.getDepth(myarcha)

    val pedge2 = ReadPPA.genPEdge(l, deptha, myarcha)

    val gedge2 = ReadPPA.genGEdge(l, deptha, myarcha)

    val pos2 = ReadPPA.genFinal(l, myarcha)

    val topDesign = () => new MAC(m, n, myarchw, inedges, outedges, res, myarcha, pedge, gedge, pos, myarcha2, pedge2, gedge2, pos2)
    (new chisel3.stage.ChiselStage).emitVerilog(topDesign(), Array("-td", "./RTL/mac"))
    iotesters.Driver.execute(Array("-tgvo", "on", "-tbn", "verilator"), topDesign) {
      c => new SystolicarrayTester(c)
    }
  }
}
//aa
class SystolicarrayTester(c: MAC) extends PeekPokeTester(c) {
  poke(c.io.multiplicand, 7)
  poke(c.io.multiplier, 2)
  poke(c.io.addend, 1)

  step(1)

  println("The result of 7 * 2 + 1 is: " + peek(c.io.outs).toString())

  expect(c.io.outs, 15)
}
