;buildInfoPackage: chisel3, version: 3.3.1, scalaVersion: 2.12.11, sbtVersion: 1.3.10
circuit BasicMAC : 
  module BasicMAC : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip multiplicand : UInt<25>, flip multiplier : UInt<18>, flip addend : UInt<43>, res : UInt<43>}
    
    node _T = mul(io.multiplicand, io.multiplier) @[basemac.scala 16:29]
    node _T_1 = add(_T, io.addend) @[basemac.scala 16:45]
    node _T_2 = tail(_T_1, 1) @[basemac.scala 16:45]
    io.res <= _T_2 @[basemac.scala 16:10]
    
