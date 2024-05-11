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
    
  module BlackCell_1 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, flip preG : UInt<1>, flip preP : UInt<1>, outG : UInt<1>, outP : UInt<1>}
    
    node _T = and(io.currentP, io.preG) @[sklansky.scala 18:27]
    node _T_1 = or(_T, io.currentG) @[sklansky.scala 18:38]
    io.outG <= _T_1 @[sklansky.scala 18:11]
    node _T_2 = and(io.currentP, io.preP) @[sklansky.scala 19:26]
    io.outP <= _T_2 @[sklansky.scala 19:11]
    
  module Buffer_3 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, outG : UInt<1>, outP : UInt<1>}
    
    io.outG <= io.currentG @[sklansky.scala 42:11]
    io.outP <= io.currentP @[sklansky.scala 43:11]
    
  module BlackCell_2 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, flip preG : UInt<1>, flip preP : UInt<1>, outG : UInt<1>, outP : UInt<1>}
    
    node _T = and(io.currentP, io.preG) @[sklansky.scala 18:27]
    node _T_1 = or(_T, io.currentG) @[sklansky.scala 18:38]
    io.outG <= _T_1 @[sklansky.scala 18:11]
    node _T_2 = and(io.currentP, io.preP) @[sklansky.scala 19:26]
    io.outP <= _T_2 @[sklansky.scala 19:11]
    
  module Buffer_4 : 
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
    
  module Buffer_5 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, outG : UInt<1>, outP : UInt<1>}
    
    io.outG <= io.currentG @[sklansky.scala 42:11]
    io.outP <= io.currentP @[sklansky.scala 43:11]
    
  module BlackCell_3 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, flip preG : UInt<1>, flip preP : UInt<1>, outG : UInt<1>, outP : UInt<1>}
    
    node _T = and(io.currentP, io.preG) @[sklansky.scala 18:27]
    node _T_1 = or(_T, io.currentG) @[sklansky.scala 18:38]
    io.outG <= _T_1 @[sklansky.scala 18:11]
    node _T_2 = and(io.currentP, io.preP) @[sklansky.scala 19:26]
    io.outP <= _T_2 @[sklansky.scala 19:11]
    
  module BlackCell_4 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, flip preG : UInt<1>, flip preP : UInt<1>, outG : UInt<1>, outP : UInt<1>}
    
    node _T = and(io.currentP, io.preG) @[sklansky.scala 18:27]
    node _T_1 = or(_T, io.currentG) @[sklansky.scala 18:38]
    io.outG <= _T_1 @[sklansky.scala 18:11]
    node _T_2 = and(io.currentP, io.preP) @[sklansky.scala 19:26]
    io.outP <= _T_2 @[sklansky.scala 19:11]
    
  module Buffer_6 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, outG : UInt<1>, outP : UInt<1>}
    
    io.outG <= io.currentG @[sklansky.scala 42:11]
    io.outP <= io.currentP @[sklansky.scala 43:11]
    
  module Buffer_7 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, outG : UInt<1>, outP : UInt<1>}
    
    io.outG <= io.currentG @[sklansky.scala 42:11]
    io.outP <= io.currentP @[sklansky.scala 43:11]
    
  module GrayCell_3 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, flip preG : UInt<1>, outG : UInt<1>}
    
    node _T = and(io.currentP, io.preG) @[sklansky.scala 30:27]
    node _T_1 = or(_T, io.currentG) @[sklansky.scala 30:38]
    io.outG <= _T_1 @[sklansky.scala 30:11]
    
  module GrayCell_4 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, flip preG : UInt<1>, outG : UInt<1>}
    
    node _T = and(io.currentP, io.preG) @[sklansky.scala 30:27]
    node _T_1 = or(_T, io.currentG) @[sklansky.scala 30:38]
    io.outG <= _T_1 @[sklansky.scala 30:11]
    
  module GrayCell_5 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, flip preG : UInt<1>, outG : UInt<1>}
    
    node _T = and(io.currentP, io.preG) @[sklansky.scala 30:27]
    node _T_1 = or(_T, io.currentG) @[sklansky.scala 30:38]
    io.outG <= _T_1 @[sklansky.scala 30:11]
    
  module GrayCell_6 : 
    input clock : Clock
    input reset : Reset
    output io : {flip currentG : UInt<1>, flip currentP : UInt<1>, flip preG : UInt<1>, outG : UInt<1>}
    
    node _T = and(io.currentP, io.preG) @[sklansky.scala 30:27]
    node _T_1 = or(_T, io.currentG) @[sklansky.scala 30:38]
    io.outG <= _T_1 @[sklansky.scala 30:11]
    
  module HighQualityAdder : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip inputs : {1 : UInt<8>, 0 : UInt<8>}, outs : {0 : UInt<8>}}
    
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
    node _T_8 = bits(io.inputs.0, 4, 4) @[sklansky.scala 65:49]
    node _T_9 = bits(io.inputs.1, 4, 4) @[sklansky.scala 65:70]
    node gArray_4 = and(_T_8, _T_9) @[sklansky.scala 65:56]
    node _T_10 = bits(io.inputs.0, 5, 5) @[sklansky.scala 65:49]
    node _T_11 = bits(io.inputs.1, 5, 5) @[sklansky.scala 65:70]
    node gArray_5 = and(_T_10, _T_11) @[sklansky.scala 65:56]
    node _T_12 = bits(io.inputs.0, 6, 6) @[sklansky.scala 65:49]
    node _T_13 = bits(io.inputs.1, 6, 6) @[sklansky.scala 65:70]
    node gArray_6 = and(_T_12, _T_13) @[sklansky.scala 65:56]
    node _T_14 = bits(io.inputs.0, 7, 7) @[sklansky.scala 65:49]
    node _T_15 = bits(io.inputs.1, 7, 7) @[sklansky.scala 65:70]
    node gArray_7 = and(_T_14, _T_15) @[sklansky.scala 65:56]
    node _T_16 = bits(io.inputs.0, 0, 0) @[sklansky.scala 66:49]
    node _T_17 = bits(io.inputs.1, 0, 0) @[sklansky.scala 66:70]
    node pArray_0 = xor(_T_16, _T_17) @[sklansky.scala 66:56]
    node _T_18 = bits(io.inputs.0, 1, 1) @[sklansky.scala 66:49]
    node _T_19 = bits(io.inputs.1, 1, 1) @[sklansky.scala 66:70]
    node pArray_1 = xor(_T_18, _T_19) @[sklansky.scala 66:56]
    node _T_20 = bits(io.inputs.0, 2, 2) @[sklansky.scala 66:49]
    node _T_21 = bits(io.inputs.1, 2, 2) @[sklansky.scala 66:70]
    node pArray_2 = xor(_T_20, _T_21) @[sklansky.scala 66:56]
    node _T_22 = bits(io.inputs.0, 3, 3) @[sklansky.scala 66:49]
    node _T_23 = bits(io.inputs.1, 3, 3) @[sklansky.scala 66:70]
    node pArray_3 = xor(_T_22, _T_23) @[sklansky.scala 66:56]
    node _T_24 = bits(io.inputs.0, 4, 4) @[sklansky.scala 66:49]
    node _T_25 = bits(io.inputs.1, 4, 4) @[sklansky.scala 66:70]
    node pArray_4 = xor(_T_24, _T_25) @[sklansky.scala 66:56]
    node _T_26 = bits(io.inputs.0, 5, 5) @[sklansky.scala 66:49]
    node _T_27 = bits(io.inputs.1, 5, 5) @[sklansky.scala 66:70]
    node pArray_5 = xor(_T_26, _T_27) @[sklansky.scala 66:56]
    node _T_28 = bits(io.inputs.0, 6, 6) @[sklansky.scala 66:49]
    node _T_29 = bits(io.inputs.1, 6, 6) @[sklansky.scala 66:70]
    node pArray_6 = xor(_T_28, _T_29) @[sklansky.scala 66:56]
    node _T_30 = bits(io.inputs.0, 7, 7) @[sklansky.scala 66:49]
    node _T_31 = bits(io.inputs.1, 7, 7) @[sklansky.scala 66:70]
    node pArray_7 = xor(_T_30, _T_31) @[sklansky.scala 66:56]
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
    Buffer_2.io.currentG <= gArray_4 @[sklansky.scala 88:30]
    Buffer_2.io.currentP <= pArray_4 @[sklansky.scala 89:30]
    inst BlackCell_1 of BlackCell_1 @[sklansky.scala 103:30]
    BlackCell_1.clock <= clock
    BlackCell_1.reset <= reset
    BlackCell_1.io.currentG <= gArray_5 @[sklansky.scala 104:30]
    BlackCell_1.io.currentP <= pArray_5 @[sklansky.scala 105:30]
    BlackCell_1.io.preG <= gArray_4 @[sklansky.scala 106:26]
    BlackCell_1.io.preP <= pArray_4 @[sklansky.scala 107:26]
    inst Buffer_3 of Buffer_3 @[sklansky.scala 87:30]
    Buffer_3.clock <= clock
    Buffer_3.reset <= reset
    Buffer_3.io.currentG <= gArray_6 @[sklansky.scala 88:30]
    Buffer_3.io.currentP <= pArray_6 @[sklansky.scala 89:30]
    inst BlackCell_2 of BlackCell_2 @[sklansky.scala 103:30]
    BlackCell_2.clock <= clock
    BlackCell_2.reset <= reset
    BlackCell_2.io.currentG <= gArray_7 @[sklansky.scala 104:30]
    BlackCell_2.io.currentP <= pArray_7 @[sklansky.scala 105:30]
    BlackCell_2.io.preG <= gArray_6 @[sklansky.scala 106:26]
    BlackCell_2.io.preP <= pArray_6 @[sklansky.scala 107:26]
    inst Buffer_4 of Buffer_4 @[sklansky.scala 87:30]
    Buffer_4.clock <= clock
    Buffer_4.reset <= reset
    Buffer_4.io.currentG <= GrayCell.io.outG @[sklansky.scala 88:30]
    Buffer_4.io.currentP <= pArray_1 @[sklansky.scala 89:30]
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
    inst Buffer_5 of Buffer_5 @[sklansky.scala 87:30]
    Buffer_5.clock <= clock
    Buffer_5.reset <= reset
    Buffer_5.io.currentG <= BlackCell_1.io.outG @[sklansky.scala 88:30]
    Buffer_5.io.currentP <= BlackCell_1.io.outP @[sklansky.scala 89:30]
    inst BlackCell_3 of BlackCell_3 @[sklansky.scala 103:30]
    BlackCell_3.clock <= clock
    BlackCell_3.reset <= reset
    BlackCell_3.io.currentG <= Buffer_3.io.outG @[sklansky.scala 104:30]
    BlackCell_3.io.currentP <= Buffer_3.io.outP @[sklansky.scala 105:30]
    BlackCell_3.io.preG <= BlackCell_1.io.outG @[sklansky.scala 106:26]
    BlackCell_3.io.preP <= BlackCell_1.io.outP @[sklansky.scala 107:26]
    inst BlackCell_4 of BlackCell_4 @[sklansky.scala 103:30]
    BlackCell_4.clock <= clock
    BlackCell_4.reset <= reset
    BlackCell_4.io.currentG <= BlackCell_2.io.outG @[sklansky.scala 104:30]
    BlackCell_4.io.currentP <= BlackCell_2.io.outP @[sklansky.scala 105:30]
    BlackCell_4.io.preG <= BlackCell_1.io.outG @[sklansky.scala 106:26]
    BlackCell_4.io.preP <= BlackCell_1.io.outP @[sklansky.scala 107:26]
    inst Buffer_6 of Buffer_6 @[sklansky.scala 87:30]
    Buffer_6.clock <= clock
    Buffer_6.reset <= reset
    Buffer_6.io.currentG <= GrayCell_1.io.outG @[sklansky.scala 88:30]
    Buffer_6.io.currentP <= Buffer_1.io.outP @[sklansky.scala 89:30]
    inst Buffer_7 of Buffer_7 @[sklansky.scala 87:30]
    Buffer_7.clock <= clock
    Buffer_7.reset <= reset
    Buffer_7.io.currentG <= GrayCell_2.io.outG @[sklansky.scala 88:30]
    Buffer_7.io.currentP <= BlackCell.io.outP @[sklansky.scala 89:30]
    inst GrayCell_3 of GrayCell_3 @[sklansky.scala 95:30]
    GrayCell_3.clock <= clock
    GrayCell_3.reset <= reset
    GrayCell_3.io.currentG <= Buffer_2.io.outG @[sklansky.scala 96:30]
    GrayCell_3.io.currentP <= Buffer_2.io.outP @[sklansky.scala 97:30]
    GrayCell_3.io.preG <= GrayCell_2.io.outG @[sklansky.scala 98:26]
    inst GrayCell_4 of GrayCell_4 @[sklansky.scala 95:30]
    GrayCell_4.clock <= clock
    GrayCell_4.reset <= reset
    GrayCell_4.io.currentG <= Buffer_5.io.outG @[sklansky.scala 96:30]
    GrayCell_4.io.currentP <= Buffer_5.io.outP @[sklansky.scala 97:30]
    GrayCell_4.io.preG <= GrayCell_2.io.outG @[sklansky.scala 98:26]
    inst GrayCell_5 of GrayCell_5 @[sklansky.scala 95:30]
    GrayCell_5.clock <= clock
    GrayCell_5.reset <= reset
    GrayCell_5.io.currentG <= BlackCell_3.io.outG @[sklansky.scala 96:30]
    GrayCell_5.io.currentP <= BlackCell_3.io.outP @[sklansky.scala 97:30]
    GrayCell_5.io.preG <= GrayCell_2.io.outG @[sklansky.scala 98:26]
    inst GrayCell_6 of GrayCell_6 @[sklansky.scala 95:30]
    GrayCell_6.clock <= clock
    GrayCell_6.reset <= reset
    GrayCell_6.io.currentG <= BlackCell_4.io.outG @[sklansky.scala 96:30]
    GrayCell_6.io.currentP <= BlackCell_4.io.outP @[sklansky.scala 97:30]
    GrayCell_6.io.preG <= GrayCell_2.io.outG @[sklansky.scala 98:26]
    node _T_32 = xor(pArray_7, GrayCell_5.io.outG) @[sklansky.scala 116:48]
    node _T_33 = xor(pArray_6, GrayCell_4.io.outG) @[sklansky.scala 116:48]
    node _T_34 = xor(pArray_5, GrayCell_3.io.outG) @[sklansky.scala 116:48]
    node _T_35 = xor(pArray_4, Buffer_7.io.outG) @[sklansky.scala 116:48]
    node _T_36 = xor(pArray_3, Buffer_6.io.outG) @[sklansky.scala 116:48]
    node _T_37 = xor(pArray_2, Buffer_4.io.outG) @[sklansky.scala 116:48]
    node _T_38 = xor(pArray_1, Buffer.io.outG) @[sklansky.scala 116:48]
    node _T_39 = cat(_T_32, _T_33) @[Cat.scala 29:58]
    node _T_40 = cat(_T_39, _T_34) @[Cat.scala 29:58]
    node _T_41 = cat(_T_40, _T_35) @[Cat.scala 29:58]
    node _T_42 = cat(_T_41, _T_36) @[Cat.scala 29:58]
    node _T_43 = cat(_T_42, _T_37) @[Cat.scala 29:58]
    node _T_44 = cat(_T_43, _T_38) @[Cat.scala 29:58]
    node sum = cat(_T_44, pArray_0) @[Cat.scala 29:58]
    io.outs.0 <= sum @[sklansky.scala 120:14]
    
