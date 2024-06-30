package io

import chisel3.iotesters.PeekPokeTester
import chisel3.util._
import chisel3.{Bundle, Input, Module, Output, UInt, _}

import scala.io.Source
import scala.util.control._

object ReadSA {
  def readFromSATxt(filePath: String) = {
    val source = Source.fromFile(filePath, "UTF-8")
    val lines = source.getLines().toArray
    source.close
    lines
  }

  // get Depth of an PE
  def getDepth(array: Array[String]): List[Int] = {
    val Depth = array(0).trim.split(" ")//first line
    val res = Depth(0).toInt :: Nil
    res
  }

  // get the Size of systolic array
  def getSize(array: Array[String]): List[Int] = {
    val Size = array(1).trim.split(" ")//second line 
    val res = Size(0).toInt :: Nil
    res
  }


}