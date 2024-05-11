;buildInfoPackage: chisel3, version: 3.3.1, scalaVersion: 2.12.11, sbtVersion: 1.3.10
circuit BasicMultiplier : 
  module BasicMultiplier : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip multiplicand : UInt<16>, flip multiplier : UInt<16>, res : UInt<32>}
    
    node _T = mul(io.multiplicand, io.multiplier) @[basemulti.scala 14:29]
    io.res <= _T @[basemulti.scala 14:10]
    
