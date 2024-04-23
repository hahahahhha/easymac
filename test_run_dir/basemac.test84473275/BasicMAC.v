module BasicMAC(
  input         clock,
  input         reset,
  input  [24:0] io_multiplicand,
  input  [17:0] io_multiplier,
  input  [42:0] io_addend,
  output [42:0] io_res
);
  wire [24:0] _GEN_0 = {{7'd0}, io_multiplier}; // @[basemac.scala 16:29]
  wire [42:0] _T = io_multiplicand * _GEN_0; // @[basemac.scala 16:29]
  assign io_res = _T + io_addend; // @[basemac.scala 16:10]
endmodule
