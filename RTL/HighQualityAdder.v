module Buffer(
  input   io_currentG,
  input   io_currentP,
  output  io_outG,
  output  io_outP
);
  assign io_outG = io_currentG; // @[sklansky.scala 42:11]
  assign io_outP = io_currentP; // @[sklansky.scala 43:11]
endmodule
module GrayCell(
  input   io_currentG,
  input   io_currentP,
  input   io_preG,
  output  io_outG
);
  wire  _T = io_currentP & io_preG; // @[sklansky.scala 30:27]
  assign io_outG = _T | io_currentG; // @[sklansky.scala 30:11]
endmodule
module BlackCell(
  input   io_currentG,
  input   io_currentP,
  input   io_preG,
  input   io_preP,
  output  io_outG,
  output  io_outP
);
  wire  _T = io_currentP & io_preG; // @[sklansky.scala 18:27]
  assign io_outG = _T | io_currentG; // @[sklansky.scala 18:11]
  assign io_outP = io_currentP & io_preP; // @[sklansky.scala 19:11]
endmodule
module HighQualityAdder(
  input        clock,
  input        reset,
  input  [3:0] io_inputs_1,
  input  [3:0] io_inputs_0,
  output [3:0] io_outs_0
);
  wire  Buffer_io_currentG; // @[sklansky.scala 87:30]
  wire  Buffer_io_currentP; // @[sklansky.scala 87:30]
  wire  Buffer_io_outG; // @[sklansky.scala 87:30]
  wire  Buffer_io_outP; // @[sklansky.scala 87:30]
  wire  GrayCell_io_currentG; // @[sklansky.scala 95:30]
  wire  GrayCell_io_currentP; // @[sklansky.scala 95:30]
  wire  GrayCell_io_preG; // @[sklansky.scala 95:30]
  wire  GrayCell_io_outG; // @[sklansky.scala 95:30]
  wire  Buffer_1_io_currentG; // @[sklansky.scala 87:30]
  wire  Buffer_1_io_currentP; // @[sklansky.scala 87:30]
  wire  Buffer_1_io_outG; // @[sklansky.scala 87:30]
  wire  Buffer_1_io_outP; // @[sklansky.scala 87:30]
  wire  BlackCell_io_currentG; // @[sklansky.scala 103:30]
  wire  BlackCell_io_currentP; // @[sklansky.scala 103:30]
  wire  BlackCell_io_preG; // @[sklansky.scala 103:30]
  wire  BlackCell_io_preP; // @[sklansky.scala 103:30]
  wire  BlackCell_io_outG; // @[sklansky.scala 103:30]
  wire  BlackCell_io_outP; // @[sklansky.scala 103:30]
  wire  Buffer_2_io_currentG; // @[sklansky.scala 87:30]
  wire  Buffer_2_io_currentP; // @[sklansky.scala 87:30]
  wire  Buffer_2_io_outG; // @[sklansky.scala 87:30]
  wire  Buffer_2_io_outP; // @[sklansky.scala 87:30]
  wire  GrayCell_1_io_currentG; // @[sklansky.scala 95:30]
  wire  GrayCell_1_io_currentP; // @[sklansky.scala 95:30]
  wire  GrayCell_1_io_preG; // @[sklansky.scala 95:30]
  wire  GrayCell_1_io_outG; // @[sklansky.scala 95:30]
  wire  GrayCell_2_io_currentG; // @[sklansky.scala 95:30]
  wire  GrayCell_2_io_currentP; // @[sklansky.scala 95:30]
  wire  GrayCell_2_io_preG; // @[sklansky.scala 95:30]
  wire  GrayCell_2_io_outG; // @[sklansky.scala 95:30]
  wire  pArray_0 = io_inputs_0[0] ^ io_inputs_1[0]; // @[sklansky.scala 66:56]
  wire  pArray_1 = io_inputs_0[1] ^ io_inputs_1[1]; // @[sklansky.scala 66:56]
  wire  pArray_2 = io_inputs_0[2] ^ io_inputs_1[2]; // @[sklansky.scala 66:56]
  wire  pArray_3 = io_inputs_0[3] ^ io_inputs_1[3]; // @[sklansky.scala 66:56]
  wire  _T_16 = pArray_3 ^ GrayCell_1_io_outG; // @[sklansky.scala 116:48]
  wire  _T_17 = pArray_2 ^ Buffer_2_io_outG; // @[sklansky.scala 116:48]
  wire  _T_18 = pArray_1 ^ Buffer_io_outG; // @[sklansky.scala 116:48]
  wire [2:0] _T_20 = {_T_16,_T_17,_T_18}; // @[Cat.scala 29:58]
  Buffer Buffer ( // @[sklansky.scala 87:30]
    .io_currentG(Buffer_io_currentG),
    .io_currentP(Buffer_io_currentP),
    .io_outG(Buffer_io_outG),
    .io_outP(Buffer_io_outP)
  );
  GrayCell GrayCell ( // @[sklansky.scala 95:30]
    .io_currentG(GrayCell_io_currentG),
    .io_currentP(GrayCell_io_currentP),
    .io_preG(GrayCell_io_preG),
    .io_outG(GrayCell_io_outG)
  );
  Buffer Buffer_1 ( // @[sklansky.scala 87:30]
    .io_currentG(Buffer_1_io_currentG),
    .io_currentP(Buffer_1_io_currentP),
    .io_outG(Buffer_1_io_outG),
    .io_outP(Buffer_1_io_outP)
  );
  BlackCell BlackCell ( // @[sklansky.scala 103:30]
    .io_currentG(BlackCell_io_currentG),
    .io_currentP(BlackCell_io_currentP),
    .io_preG(BlackCell_io_preG),
    .io_preP(BlackCell_io_preP),
    .io_outG(BlackCell_io_outG),
    .io_outP(BlackCell_io_outP)
  );
  Buffer Buffer_2 ( // @[sklansky.scala 87:30]
    .io_currentG(Buffer_2_io_currentG),
    .io_currentP(Buffer_2_io_currentP),
    .io_outG(Buffer_2_io_outG),
    .io_outP(Buffer_2_io_outP)
  );
  GrayCell GrayCell_1 ( // @[sklansky.scala 95:30]
    .io_currentG(GrayCell_1_io_currentG),
    .io_currentP(GrayCell_1_io_currentP),
    .io_preG(GrayCell_1_io_preG),
    .io_outG(GrayCell_1_io_outG)
  );
  GrayCell GrayCell_2 ( // @[sklansky.scala 95:30]
    .io_currentG(GrayCell_2_io_currentG),
    .io_currentP(GrayCell_2_io_currentP),
    .io_preG(GrayCell_2_io_preG),
    .io_outG(GrayCell_2_io_outG)
  );
  assign io_outs_0 = {_T_20,pArray_0}; // @[sklansky.scala 120:14]
  assign Buffer_io_currentG = io_inputs_0[0] & io_inputs_1[0]; // @[sklansky.scala 88:30]
  assign Buffer_io_currentP = io_inputs_0[0] ^ io_inputs_1[0]; // @[sklansky.scala 89:30]
  assign GrayCell_io_currentG = io_inputs_0[1] & io_inputs_1[1]; // @[sklansky.scala 96:30]
  assign GrayCell_io_currentP = io_inputs_0[1] ^ io_inputs_1[1]; // @[sklansky.scala 97:30]
  assign GrayCell_io_preG = io_inputs_0[0] & io_inputs_1[0]; // @[sklansky.scala 98:26]
  assign Buffer_1_io_currentG = io_inputs_0[2] & io_inputs_1[2]; // @[sklansky.scala 88:30]
  assign Buffer_1_io_currentP = io_inputs_0[2] ^ io_inputs_1[2]; // @[sklansky.scala 89:30]
  assign BlackCell_io_currentG = io_inputs_0[3] & io_inputs_1[3]; // @[sklansky.scala 104:30]
  assign BlackCell_io_currentP = io_inputs_0[3] ^ io_inputs_1[3]; // @[sklansky.scala 105:30]
  assign BlackCell_io_preG = io_inputs_0[2] & io_inputs_1[2]; // @[sklansky.scala 106:26]
  assign BlackCell_io_preP = io_inputs_0[2] ^ io_inputs_1[2]; // @[sklansky.scala 107:26]
  assign Buffer_2_io_currentG = GrayCell_io_outG; // @[sklansky.scala 88:30]
  assign Buffer_2_io_currentP = io_inputs_0[1] ^ io_inputs_1[1]; // @[sklansky.scala 89:30]
  assign GrayCell_1_io_currentG = Buffer_1_io_outG; // @[sklansky.scala 96:30]
  assign GrayCell_1_io_currentP = Buffer_1_io_outP; // @[sklansky.scala 97:30]
  assign GrayCell_1_io_preG = GrayCell_io_outG; // @[sklansky.scala 98:26]
  assign GrayCell_2_io_currentG = BlackCell_io_outG; // @[sklansky.scala 96:30]
  assign GrayCell_2_io_currentP = BlackCell_io_outP; // @[sklansky.scala 97:30]
  assign GrayCell_2_io_preG = GrayCell_io_outG; // @[sklansky.scala 98:26]
endmodule
