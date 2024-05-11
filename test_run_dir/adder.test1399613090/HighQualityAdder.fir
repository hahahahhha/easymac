;buildInfoPackage: chisel3, version: 3.3.1, scalaVersion: 2.12.11, sbtVersion: 1.3.10
circuit HighQualityAdder : 
  module Buffer : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, outG : UInt<1>, outP : UInt<1>}
    
    io.outG <= io.currentG @[sklansky.scala 42:11]
    io.outP <= io.currentP @[sklansky.scala 43:11]
    
  module GrayCell : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, flip preG : UInt<1>, outG : UInt<1>}
    
    node _T = and(io.currentP, io.preG) @[sklansky.scala 30:27]
    node _T_1 = or(_T, io.currentG) @[sklansky.scala 30:38]
    io.outG <= _T_1 @[sklansky.scala 30:11]
    
  module Buffer_1 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, outG : UInt<1>, outP : UInt<1>}
    
    io.outG <= io.currentG @[sklansky.scala 42:11]
    io.outP <= io.currentP @[sklansky.scala 43:11]
    
  module BlackCell : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, flip preG : UInt<1>, flip preP : UInt<1>, outG : UInt<1>, outP : UInt<1>}
    
    node _T = and(io.currentP, io.preG) @[sklansky.scala 18:27]
    node _T_1 = or(_T, io.currentG) @[sklansky.scala 18:38]
    io.outG <= _T_1 @[sklansky.scala 18:11]
    node _T_2 = and(io.currentP, io.preP) @[sklansky.scala 19:26]
    io.outP <= _T_2 @[sklansky.scala 19:11]
    
  module Buffer_2 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, outG : UInt<1>, outP : UInt<1>}
    
    io.outG <= io.currentG @[sklansky.scala 42:11]
    io.outP <= io.currentP @[sklansky.scala 43:11]
    
  module GrayCell_1 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, flip preG : UInt<1>, outG : UInt<1>}
    
    node _T = and(io.currentP, io.preG) @[sklansky.scala 30:27]
    node _T_1 = or(_T, io.currentG) @[sklansky.scala 30:38]
    io.outG <= _T_1 @[sklansky.scala 30:11]
    
  module GrayCell_2 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, flip preG : UInt<1>, outG : UInt<1>}
    
    node _T = and(io.currentP, io.preG) @[sklansky.scala 30:27]
    node _T_1 = or(_T, io.currentG) @[sklansky.scala 30:38]
    io.outG <= _T_1 @[sklansky.scala 30:11]
    
  module HighQualityAdder : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip inputs : {1 : UInt<4>, 0 : UInt<4>}, outs : {0 : UInt<4>}}
    
    node _T = bits(io.inputs.0, 0, 0) @[sklansky.scala 65:49]
    node _T_1 = bits(io.inputs.1, 0, 0) @[sklansky.scala 65:70]
    node gArray_0 = and(_T, _T_1) @[sklansky.scala 65:56]
    node _T_2 = bits(io.inputs.0, 1, 1) @[sklansky.scala 65:49]
    node _T_3 = bits(io.inputs.1, 1, 1) @[sklansky.scala 65:70]
    node gArray_1 = and(_T_2, _T_3) @[sklansky.scala 65:56]
    node _T_4 = bits(io.inputs.0, 2, 2) @[sklansky.scala 65:49]
    node _T_5 = bits(io.inputs.1, 2, 2) @[sklansky.scala 65:70]
    node gArray_2 = and(_T_4, _T_5) @[sklansky.scala 65:56]
    node _T_6 = bits(io.inputs.0, 3, 3) @[sklansky.scala 65:49]
    node _T_7 = bits(io.inputs.1, 3, 3) @[sklansky.scala 65:70]
    node gArray_3 = and(_T_6, _T_7) @[sklansky.scala 65:56]
    node _T_8 = bits(io.inputs.0, 0, 0) @[sklansky.scala 66:49]
    node _T_9 = bits(io.inputs.1, 0, 0) @[sklansky.scala 66:70]
    node pArray_0 = xor(_T_8, _T_9) @[sklansky.scala 66:56]
    node _T_10 = bits(io.inputs.0, 1, 1) @[sklansky.scala 66:49]
    node _T_11 = bits(io.inputs.1, 1, 1) @[sklansky.scala 66:70]
    node pArray_1 = xor(_T_10, _T_11) @[sklansky.scala 66:56]
    node _T_12 = bits(io.inputs.0, 2, 2) @[sklansky.scala 66:49]
    node _T_13 = bits(io.inputs.1, 2, 2) @[sklansky.scala 66:70]
    node pArray_2 = xor(_T_12, _T_13) @[sklansky.scala 66:56]
    node _T_14 = bits(io.inputs.0, 3, 3) @[sklansky.scala 66:49]
    node _T_15 = bits(io.inputs.1, 3, 3) @[sklansky.scala 66:70]
    node pArray_3 = xor(_T_14, _T_15) @[sklansky.scala 66:56]
    inst Buffer of Buffer @[sklansky.scala 87:30]
    Buffer.clock <= clock
    Buffer.reset <= reset
    Buffer.io.currentG <= gArray_0 @[sklansky.scala 88:30]
    Buffer.io.currentP <= pArray_0 @[sklansky.scala 89:30]
    inst GrayCell of GrayCell @[sklansky.scala 95:30]
    GrayCell.clock <= clock
    GrayCell.reset <= reset
    GrayCell.io.currentG <= gArray_1 @[sklansky.scala 96:30]
    GrayCell.io.currentP <= pArray_1 @[sklansky.scala 97:30]
    GrayCell.io.preG <= gArray_0 @[sklansky.scala 98:26]
    inst Buffer_1 of Buffer_1 @[sklansky.scala 87:30]
    Buffer_1.clock <= clock
    Buffer_1.reset <= reset
    Buffer_1.io.currentG <= gArray_2 @[sklansky.scala 88:30]
    Buffer_1.io.currentP <= pArray_2 @[sklansky.scala 89:30]
    inst BlackCell of BlackCell @[sklansky.scala 103:30]
    BlackCell.clock <= clock
    BlackCell.reset <= reset
    BlackCell.io.currentG <= gArray_3 @[sklansky.scala 104:30]
    BlackCell.io.currentP <= pArray_3 @[sklansky.scala 105:30]
    BlackCell.io.preG <= gArray_2 @[sklansky.scala 106:26]
    BlackCell.io.preP <= pArray_2 @[sklansky.scala 107:26]
    inst Buffer_2 of Buffer_2 @[sklansky.scala 87:30]
    Buffer_2.clock <= clock
    Buffer_2.reset <= reset
    Buffer_2.io.currentG <= GrayCell.io.outG @[sklansky.scala 88:30]
    Buffer_2.io.currentP <= pArray_1 @[sklansky.scala 89:30]
    inst GrayCell_1 of GrayCell_1 @[sklansky.scala 95:30]
    GrayCell_1.clock <= clock
    GrayCell_1.reset <= reset
    GrayCell_1.io.currentG <= Buffer_1.io.outG @[sklansky.scala 96:30]
    GrayCell_1.io.currentP <= Buffer_1.io.outP @[sklansky.scala 97:30]
    GrayCell_1.io.preG <= GrayCell.io.outG @[sklansky.scala 98:26]
    inst GrayCell_2 of GrayCell_2 @[sklansky.scala 95:30]
    GrayCell_2.clock <= clock
    GrayCell_2.reset <= reset
    GrayCell_2.io.currentG <= BlackCell.io.outG @[sklansky.scala 96:30]
    GrayCell_2.io.currentP <= BlackCell.io.outP @[sklansky.scala 97:30]
    GrayCell_2.io.preG <= GrayCell.io.outG @[sklansky.scala 98:26]
    node _T_16 = xor(pArray_3, GrayCell_1.io.outG) @[sklansky.scala 116:48]
    node _T_17 = xor(pArray_2, Buffer_2.io.outG) @[sklansky.scala 116:48]
    node _T_18 = xor(pArray_1, Buffer.io.outG) @[sklansky.scala 116:48]
    node _T_19 = cat(_T_16, _T_17) @[Cat.scala 29:58]
    node _T_20 = cat(_T_19, _T_18) @[Cat.scala 29:58]
    node sum = cat(_T_20, pArray_0) @[Cat.scala 29:58]
    io.outs.0 <= sum @[sklansky.scala 120:14]
    
