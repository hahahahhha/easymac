module BasicMultiplier(
  input         clock,
  input         reset,
  input  [15:0] io_multiplicand,
  input  [15:0] io_multiplier,
  output [31:0] io_res
);
  assign io_res = io_multiplicand * io_multiplier; // @[basemulti.scala 14:10]
endmodule
