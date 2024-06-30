package wallace

import io._
import chisel3.iotesters.PeekPokeTester
import chisel3.util._
import chisel3.{Bundle, Input, Module, Output, UInt, _}

import java.io.PrintWriter
import java.io.File

import scala.io.Source

class Wallaced(m: Int, n: Int, myarch: List[Int], inedges: Map[List[Int], List[Int]], outedges: Map[List[Int], List[Int]], res: Map[Int, List[Int]]
,macdepth:Int) extends Module {
  val columnmax=n+m+log2Ceil(macdepth) 
  val io = IO(new Bundle {
    val pp = Input(Vec(macdepth*n, UInt(m.W)))
    val augend = Output(UInt((columnmax-1).W))
    val addend = Output(UInt((columnmax-1).W))
  })

  var ValueMap = Map[List[Int], Data]()

  var abs = 0
  var min = 0
  if (m > n) {
    abs = m - n
    min = n
  } else {
    abs = n - m
    min = m
  }

  for(d<-0 until macdepth){
    for (i <- 0 until n) {
      for (j <- 0 until m) {
        var tmpx = i
        var tmpy = i + j
        var fy = tmpy
        var fx = 0
        if (tmpy >= m) {
          var move = tmpy - m + 1
          fx = tmpx - move
        } else {
          fx = tmpx
        }

        if(tmpy<min){
          fx+=(tmpy + 1)*d
        } else if (tmpy >= min && tmpy < (min + abs)) {
          fx += min*d
        } else if(tmpy>=(min + abs) && tmpy< n+ m  ){
          fx += (m + n - tmpy - 1)*d
        }

        ValueMap += List(fx, fy) -> io.pp(i+d*n)(j)//fx, fy are position in the dot heap
      }
    }
  }

  val len = myarch.length
  var depth = 0
  var ind = 5000
  var i = 0
  var cnt = new Array[Int](256)
  while (i < len) {
    if (myarch(i) > ind) {
      depth += 1
      for (j <- 0 until columnmax) {
        cnt(j) = 0
      }
    }
    ind = myarch(i)
    cnt(myarch(i)) += 1

    if (myarch(i + 1) == 0) {
      val cmp22 = Module(new HalfAdder)
      val tmpin = inedges(List(myarch(i), depth, cnt(myarch(i))))
      cmp22.io.a := ValueMap(List(tmpin(0), tmpin(1)))
      cmp22.io.b := ValueMap(List(tmpin(0) + 1, tmpin(1)))
      val tmpout = outedges(List(myarch(i), depth, cnt(myarch(i))))
      ValueMap += List(tmpout(0), tmpout(1)) -> cmp22.io.s
      ValueMap += List(tmpout(2), tmpout(3)) -> cmp22.io.co
    }
    else if (myarch(i + 1) == 1) {
      val cmp32 = Module(new FullAdder)
      val tmpin = inedges(List(myarch(i), depth, cnt(myarch(i))))
      cmp32.io.a := ValueMap(List(tmpin(0), tmpin(1)))
      cmp32.io.b := ValueMap(List(tmpin(0) + 1, tmpin(1)))
      cmp32.io.ci := ValueMap(List(tmpin(0) + 2, tmpin(1)))
      val tmpout = outedges(List(myarch(i), depth, cnt(myarch(i))))
      ValueMap += List(tmpout(0), tmpout(1)) -> cmp32.io.s
      ValueMap += List(tmpout(2), tmpout(3)) -> cmp32.io.co
    }
    i += 2
  }
  val res0 = (0 until columnmax-1).map(i => Wire(UInt(1.W)))
  val res1 = (0 until columnmax-1).map(i => Wire(UInt(1.W)))


  for (j <- 0 until columnmax-1) {
    res0(j) := ValueMap(List(res(j)(0), j))
    if (res(j)(1) == -1) {
      res1(j) := 0.asUInt()
    } else {
      res1(j) := ValueMap(List(res(j)(1), j))
    }
  }
  io.augend := res0.reverse.reduce(Cat(_, _))
  io.addend := res1.reverse.reduce(Cat(_, _))
}
/*

object test{
  val usage = """
      Usage: readwt [--wallace-file filename1]
  """
  def main(args: Array[String]): Unit = {
    
    if (args.length == 0) println(usage)
    
    val arglist = args.toList
    val optionNames = arglist.filter(s => s.contains('-'))

    val argmap = (0 until arglist.size / 2).map(i => arglist(i * 2) -> arglist(i * 2 + 1)).toMap

    val filename1 = argmap("--wallace-file")

    val filecontent = ReadWTd.readFromWTTxt(filename1)

    val m = ReadWTd.getBits(filecontent)(0)
    val n = ReadWTd.getBits(filecontent)(1)
    val macdepth= ReadWTd.getMacDepth(filecontent)(0)

    val numcells = ReadWTd.getNumCells(filecontent)(0)

    val myarch = ReadWTd.getArch(filecontent)

    val depth = ReadWTd.getDepth(myarch)

    val inedges = ReadWTd.getIn(m, n, myarch,macdepth)

    val outedges = ReadWTd.getOut(m, n, myarch,macdepth)

    val res = ReadWTd.getRes(m, n, myarch,macdepth)

    val topDesign = () => new Wallaced(m, n, myarch, inedges, outedges, res,macdepth)
    chisel3.Driver.execute(Array("-td", "./RTL/wtd"), topDesign)
    iotesters.Driver.execute(Array("-tgvo", "on", "-tbn", "verilator"), topDesign) {
      c => new WallacedTester(c)
    }

    iotesters.Driver.execute(Array("-tgvo", "on", "-tbn", "verilator"), () => new Wallaced(m, n, myarch, inedges, outedges, res,macdepth)) {
      c => new WallacedTester(c)
    }
  }
}

class WallacedTester(c: Wallaced) extends PeekPokeTester(c) {
  poke(c.io.pp(0), 0)
  poke(c.io.pp(1), 5)
  poke(c.io.pp(2), 0)
  poke(c.io.pp(3), 0)
  
  step(1)
  //println("The addend of parallel prefix adder is: " + peek(c.io.addend).toString())
  //println("The result of parallel prefix adder is: " + peek(c.io.outs).toString())

  println("The result of 5*2 with is: " + peek(c.io.augend).toString())

  expect(c.io.augend, 8)
}
*/