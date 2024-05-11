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
  input  [7:0] io_inputs_1,
  input  [7:0] io_inputs_0,
  output [7:0] io_outs_0
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
  wire  BlackCell_1_io_currentG; // @[sklansky.scala 103:30]
  wire  BlackCell_1_io_currentP; // @[sklansky.scala 103:30]
  wire  BlackCell_1_io_preG; // @[sklansky.scala 103:30]
  wire  BlackCell_1_io_preP; // @[sklansky.scala 103:30]
  wire  BlackCell_1_io_outG; // @[sklansky.scala 103:30]
  wire  BlackCell_1_io_outP; // @[sklansky.scala 103:30]
  wire  Buffer_3_io_currentG; // @[sklansky.scala 87:30]
  wire  Buffer_3_io_currentP; // @[sklansky.scala 87:30]
  wire  Buffer_3_io_outG; // @[sklansky.scala 87:30]
  wire  Buffer_3_io_outP; // @[sklansky.scala 87:30]
  wire  BlackCell_2_io_currentG; // @[sklansky.scala 103:30]
  wire  BlackCell_2_io_currentP; // @[sklansky.scala 103:30]
  wire  BlackCell_2_io_preG; // @[sklansky.scala 103:30]
  wire  BlackCell_2_io_preP; // @[sklansky.scala 103:30]
  wire  BlackCell_2_io_outG; // @[sklansky.scala 103:30]
  wire  BlackCell_2_io_outP; // @[sklansky.scala 103:30]
  wire  Buffer_4_io_currentG; // @[sklansky.scala 87:30]
  wire  Buffer_4_io_currentP; // @[sklansky.scala 87:30]
  wire  Buffer_4_io_outG; // @[sklansky.scala 87:30]
  wire  Buffer_4_io_outP; // @[sklansky.scala 87:30]
  wire  GrayCell_1_io_currentG; // @[sklansky.scala 95:30]
  wire  GrayCell_1_io_currentP; // @[sklansky.scala 95:30]
  wire  GrayCell_1_io_preG; // @[sklansky.scala 95:30]
  wire  GrayCell_1_io_outG; // @[sklansky.scala 95:30]
  wire  GrayCell_2_io_currentG; // @[sklansky.scala 95:30]
  wire  GrayCell_2_io_currentP; // @[sklansky.scala 95:30]
  wire  GrayCell_2_io_preG; // @[sklansky.scala 95:30]
  wire  GrayCell_2_io_outG; // @[sklansky.scala 95:30]
  wire  Buffer_5_io_currentG; // @[sklansky.scala 87:30]
  wire  Buffer_5_io_currentP; // @[sklansky.scala 87:30]
  wire  Buffer_5_io_outG; // @[sklansky.scala 87:30]
  wire  Buffer_5_io_outP; // @[sklansky.scala 87:30]
  wire  BlackCell_3_io_currentG; // @[sklansky.scala 103:30]
  wire  BlackCell_3_io_currentP; // @[sklansky.scala 103:30]
  wire  BlackCell_3_io_preG; // @[sklansky.scala 103:30]
  wire  BlackCell_3_io_preP; // @[sklansky.scala 103:30]
  wire  BlackCell_3_io_outG; // @[sklansky.scala 103:30]
  wire  BlackCell_3_io_outP; // @[sklansky.scala 103:30]
  wire  BlackCell_4_io_currentG; // @[sklansky.scala 103:30]
  wire  BlackCell_4_io_currentP; // @[sklansky.scala 103:30]
  wire  BlackCell_4_io_preG; // @[sklansky.scala 103:30]
  wire  BlackCell_4_io_preP; // @[sklansky.scala 103:30]
  wire  BlackCell_4_io_outG; // @[sklansky.scala 103:30]
  wire  BlackCell_4_io_outP; // @[sklansky.scala 103:30]
  wire  Buffer_6_io_currentG; // @[sklansky.scala 87:30]
  wire  Buffer_6_io_currentP; // @[sklansky.scala 87:30]
  wire  Buffer_6_io_outG; // @[sklansky.scala 87:30]
  wire  Buffer_6_io_outP; // @[sklansky.scala 87:30]
  wire  Buffer_7_io_currentG; // @[sklansky.scala 87:30]
  wire  Buffer_7_io_currentP; // @[sklansky.scala 87:30]
  wire  Buffer_7_io_outG; // @[sklansky.scala 87:30]
  wire  Buffer_7_io_outP; // @[sklansky.scala 87:30]
  wire  GrayCell_3_io_currentG; // @[sklansky.scala 95:30]
  wire  GrayCell_3_io_currentP; // @[sklansky.scala 95:30]
  wire  GrayCell_3_io_preG; // @[sklansky.scala 95:30]
  wire  GrayCell_3_io_outG; // @[sklansky.scala 95:30]
  wire  GrayCell_4_io_currentG; // @[sklansky.scala 95:30]
  wire  GrayCell_4_io_currentP; // @[sklansky.scala 95:30]
  wire  GrayCell_4_io_preG; // @[sklansky.scala 95:30]
  wire  GrayCell_4_io_outG; // @[sklansky.scala 95:30]
  wire  GrayCell_5_io_currentG; // @[sklansky.scala 95:30]
  wire  GrayCell_5_io_currentP; // @[sklansky.scala 95:30]
  wire  GrayCell_5_io_preG; // @[sklansky.scala 95:30]
  wire  GrayCell_5_io_outG; // @[sklansky.scala 95:30]
  wire  GrayCell_6_io_currentG; // @[sklansky.scala 95:30]
  wire  GrayCell_6_io_currentP; // @[sklansky.scala 95:30]
  wire  GrayCell_6_io_preG; // @[sklansky.scala 95:30]
  wire  GrayCell_6_io_outG; // @[sklansky.scala 95:30]
  wire  pArray_0 = io_inputs_0[0] ^ io_inputs_1[0]; // @[sklansky.scala 66:56]
  wire  pArray_1 = io_inputs_0[1] ^ io_inputs_1[1]; // @[sklansky.scala 66:56]
  wire  pArray_2 = io_inputs_0[2] ^ io_inputs_1[2]; // @[sklansky.scala 66:56]
  wire  pArray_3 = io_inputs_0[3] ^ io_inputs_1[3]; // @[sklansky.scala 66:56]
  wire  pArray_4 = io_inputs_0[4] ^ io_inputs_1[4]; // @[sklansky.scala 66:56]
  wire  pArray_5 = io_inputs_0[5] ^ io_inputs_1[5]; // @[sklansky.scala 66:56]
  wire  pArray_6 = io_inputs_0[6] ^ io_inputs_1[6]; // @[sklansky.scala 66:56]
  wire  pArray_7 = io_inputs_0[7] ^ io_inputs_1[7]; // @[sklansky.scala 66:56]
  wire  _T_32 = pArray_7 ^ GrayCell_5_io_outG; // @[sklansky.scala 116:48]
  wire  _T_33 = pArray_6 ^ GrayCell_4_io_outG; // @[sklansky.scala 116:48]
  wire  _T_34 = pArray_5 ^ GrayCell_3_io_outG; // @[sklansky.scala 116:48]
  wire  _T_35 = pArray_4 ^ Buffer_7_io_outG; // @[sklansky.scala 116:48]
  wire  _T_36 = pArray_3 ^ Buffer_6_io_outG; // @[sklansky.scala 116:48]
  wire  _T_37 = pArray_2 ^ Buffer_4_io_outG; // @[sklansky.scala 116:48]
  wire  _T_38 = pArray_1 ^ Buffer_io_outG; // @[sklansky.scala 116:48]
  wire [6:0] _T_44 = {_T_32,_T_33,_T_34,_T_35,_T_36,_T_37,_T_38}; // @[Cat.scala 29:58]
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
  BlackCell BlackCell_1 ( // @[sklansky.scala 103:30]
    .io_currentG(BlackCell_1_io_currentG),
    .io_currentP(BlackCell_1_io_currentP),
    .io_preG(BlackCell_1_io_preG),
    .io_preP(BlackCell_1_io_preP),
    .io_outG(BlackCell_1_io_outG),
    .io_outP(BlackCell_1_io_outP)
  );
  Buffer Buffer_3 ( // @[sklansky.scala 87:30]
    .io_currentG(Buffer_3_io_currentG),
    .io_currentP(Buffer_3_io_currentP),
    .io_outG(Buffer_3_io_outG),
    .io_outP(Buffer_3_io_outP)
  );
  BlackCell BlackCell_2 ( // @[sklansky.scala 103:30]
    .io_currentG(BlackCell_2_io_currentG),
    .io_currentP(BlackCell_2_io_currentP),
    .io_preG(BlackCell_2_io_preG),
    .io_preP(BlackCell_2_io_preP),
    .io_outG(BlackCell_2_io_outG),
    .io_outP(BlackCell_2_io_outP)
  );
  Buffer Buffer_4 ( // @[sklansky.scala 87:30]
    .io_currentG(Buffer_4_io_currentG),
    .io_currentP(Buffer_4_io_currentP),
    .io_outG(Buffer_4_io_outG),
    .io_outP(Buffer_4_io_outP)
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
  Buffer Buffer_5 ( // @[sklansky.scala 87:30]
    .io_currentG(Buffer_5_io_currentG),
    .io_currentP(Buffer_5_io_currentP),
    .io_outG(Buffer_5_io_outG),
    .io_outP(Buffer_5_io_outP)
  );
  BlackCell BlackCell_3 ( // @[sklansky.scala 103:30]
    .io_currentG(BlackCell_3_io_currentG),
    .io_currentP(BlackCell_3_io_currentP),
    .io_preG(BlackCell_3_io_preG),
    .io_preP(BlackCell_3_io_preP),
    .io_outG(BlackCell_3_io_outG),
    .io_outP(BlackCell_3_io_outP)
  );
  BlackCell BlackCell_4 ( // @[sklansky.scala 103:30]
    .io_currentG(BlackCell_4_io_currentG),
    .io_currentP(BlackCell_4_io_currentP),
    .io_preG(BlackCell_4_io_preG),
    .io_preP(BlackCell_4_io_preP),
    .io_outG(BlackCell_4_io_outG),
    .io_outP(BlackCell_4_io_outP)
  );
  Buffer Buffer_6 ( // @[sklansky.scala 87:30]
    .io_currentG(Buffer_6_io_currentG),
    .io_currentP(Buffer_6_io_currentP),
    .io_outG(Buffer_6_io_outG),
    .io_outP(Buffer_6_io_outP)
  );
  Buffer Buffer_7 ( // @[sklansky.scala 87:30]
    .io_currentG(Buffer_7_io_currentG),
    .io_currentP(Buffer_7_io_currentP),
    .io_outG(Buffer_7_io_outG),
    .io_outP(Buffer_7_io_outP)
  );
  GrayCell GrayCell_3 ( // @[sklansky.scala 95:30]
    .io_currentG(GrayCell_3_io_currentG),
    .io_currentP(GrayCell_3_io_currentP),
    .io_preG(GrayCell_3_io_preG),
    .io_outG(GrayCell_3_io_outG)
  );
  GrayCell GrayCell_4 ( // @[sklansky.scala 95:30]
    .io_currentG(GrayCell_4_io_currentG),
    .io_currentP(GrayCell_4_io_currentP),
    .io_preG(GrayCell_4_io_preG),
    .io_outG(GrayCell_4_io_outG)
  );
  GrayCell GrayCell_5 ( // @[sklansky.scala 95:30]
    .io_currentG(GrayCell_5_io_currentG),
    .io_currentP(GrayCell_5_io_currentP),
    .io_preG(GrayCell_5_io_preG),
    .io_outG(GrayCell_5_io_outG)
  );
  GrayCell GrayCell_6 ( // @[sklansky.scala 95:30]
    .io_currentG(GrayCell_6_io_currentG),
    .io_currentP(GrayCell_6_io_currentP),
    .io_preG(GrayCell_6_io_preG),
    .io_outG(GrayCell_6_io_outG)
  );
  assign io_outs_0 = {_T_44,pArray_0}; // @[sklansky.scala 120:14]
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
  assign Buffer_2_io_currentG = io_inputs_0[4] & io_inputs_1[4]; // @[sklansky.scala 88:30]
  assign Buffer_2_io_currentP = io_inputs_0[4] ^ io_inputs_1[4]; // @[sklansky.scala 89:30]
  assign BlackCell_1_io_currentG = io_inputs_0[5] & io_inputs_1[5]; // @[sklansky.scala 104:30]
  assign BlackCell_1_io_currentP = io_inputs_0[5] ^ io_inputs_1[5]; // @[sklansky.scala 105:30]
  assign BlackCell_1_io_preG = io_inputs_0[4] & io_inputs_1[4]; // @[sklansky.scala 106:26]
  assign BlackCell_1_io_preP = io_inputs_0[4] ^ io_inputs_1[4]; // @[sklansky.scala 107:26]
  assign Buffer_3_io_currentG = io_inputs_0[6] & io_inputs_1[6]; // @[sklansky.scala 88:30]
  assign Buffer_3_io_currentP = io_inputs_0[6] ^ io_inputs_1[6]; // @[sklansky.scala 89:30]
  assign BlackCell_2_io_currentG = io_inputs_0[7] & io_inputs_1[7]; // @[sklansky.scala 104:30]
  assign BlackCell_2_io_currentP = io_inputs_0[7] ^ io_inputs_1[7]; // @[sklansky.scala 105:30]
  assign BlackCell_2_io_preG = io_inputs_0[6] & io_inputs_1[6]; // @[sklansky.scala 106:26]
  assign BlackCell_2_io_preP = io_inputs_0[6] ^ io_inputs_1[6]; // @[sklansky.scala 107:26]
  assign Buffer_4_io_currentG = GrayCell_io_outG; // @[sklansky.scala 88:30]
  assign Buffer_4_io_currentP = io_inputs_0[1] ^ io_inputs_1[1]; // @[sklansky.scala 89:30]
  assign GrayCell_1_io_currentG = Buffer_1_io_outG; // @[sklansky.scala 96:30]
  assign GrayCell_1_io_currentP = Buffer_1_io_outP; // @[sklansky.scala 97:30]
  assign GrayCell_1_io_preG = GrayCell_io_outG; // @[sklansky.scala 98:26]
  assign GrayCell_2_io_currentG = BlackCell_io_outG; // @[sklansky.scala 96:30]
  assign GrayCell_2_io_currentP = BlackCell_io_outP; // @[sklansky.scala 97:30]
  assign GrayCell_2_io_preG = GrayCell_io_outG; // @[sklansky.scala 98:26]
  assign Buffer_5_io_currentG = BlackCell_1_io_outG; // @[sklansky.scala 88:30]
  assign Buffer_5_io_currentP = BlackCell_1_io_outP; // @[sklansky.scala 89:30]
  assign BlackCell_3_io_currentG = Buffer_3_io_outG; // @[sklansky.scala 104:30]
  assign BlackCell_3_io_currentP = Buffer_3_io_outP; // @[sklansky.scala 105:30]
  assign BlackCell_3_io_preG = BlackCell_1_io_outG; // @[sklansky.scala 106:26]
  assign BlackCell_3_io_preP = BlackCell_1_io_outP; // @[sklansky.scala 107:26]
  assign BlackCell_4_io_currentG = BlackCell_2_io_outG; // @[sklansky.scala 104:30]
  assign BlackCell_4_io_currentP = BlackCell_2_io_outP; // @[sklansky.scala 105:30]
  assign BlackCell_4_io_preG = BlackCell_1_io_outG; // @[sklansky.scala 106:26]
  assign BlackCell_4_io_preP = BlackCell_1_io_outP; // @[sklansky.scala 107:26]
  assign Buffer_6_io_currentG = GrayCell_1_io_outG; // @[sklansky.scala 88:30]
  assign Buffer_6_io_currentP = Buffer_1_io_outP; // @[sklansky.scala 89:30]
  assign Buffer_7_io_currentG = GrayCell_2_io_outG; // @[sklansky.scala 88:30]
  assign Buffer_7_io_currentP = BlackCell_io_outP; // @[sklansky.scala 89:30]
  assign GrayCell_3_io_currentG = Buffer_2_io_outG; // @[sklansky.scala 96:30]
  assign GrayCell_3_io_currentP = Buffer_2_io_outP; // @[sklansky.scala 97:30]
  assign GrayCell_3_io_preG = GrayCell_2_io_outG; // @[sklansky.scala 98:26]
  assign GrayCell_4_io_currentG = Buffer_5_io_outG; // @[sklansky.scala 96:30]
  assign GrayCell_4_io_currentP = Buffer_5_io_outP; // @[sklansky.scala 97:30]
  assign GrayCell_4_io_preG = GrayCell_2_io_outG; // @[sklansky.scala 98:26]
  assign GrayCell_5_io_currentG = BlackCell_3_io_outG; // @[sklansky.scala 96:30]
  assign GrayCell_5_io_currentP = BlackCell_3_io_outP; // @[sklansky.scala 97:30]
  assign GrayCell_5_io_preG = GrayCell_2_io_outG; // @[sklansky.scala 98:26]
  assign GrayCell_6_io_currentG = BlackCell_4_io_outG; // @[sklansky.scala 96:30]
  assign GrayCell_6_io_currentP = BlackCell_4_io_outP; // @[sklansky.scala 97:30]
  assign GrayCell_6_io_preG = GrayCell_2_io_outG; // @[sklansky.scala 98:26]
endmodule
