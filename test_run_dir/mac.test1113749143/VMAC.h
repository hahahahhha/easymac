// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMAC_H_
#define _VMAC_H_  // guard

#include "verilated_heavy.h"

//==========

class VMAC__Syms;
class VMAC_VerilatedVcd;
class VMAC_PPAdder;


//----------

VL_MODULE(VMAC) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VMAC_PPAdder* __PVT__MAC__DOT__ppa1;
    VMAC_PPAdder* __PVT__MAC__DOT__ppa2;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN16(io_multiplicand,15,0);
    VL_IN16(io_multiplier,15,0);
    VL_IN(io_addend,30,0);
    VL_OUT(io_outs,30,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_1_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_1_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_2_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_2_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_3_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_3_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_4_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_4_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_5_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_5_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_6_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_6_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_7_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_7_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_8_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_8_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_9_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_9_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_10_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_10_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_11_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_11_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_12_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_12_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_13_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_13_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_14_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_14_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_15_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_15_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_16_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_16_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_17_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_17_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_18_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_18_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_19_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_19_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_20_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_20_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_21_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_21_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_22_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_22_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_23_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_23_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_24_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_24_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_25_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_25_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_26_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_26_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_27_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_27_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_28_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_28_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_29_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_29_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_30_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_30_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_31_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_31_io_co;
    };
    struct {
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_32_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_32_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_33_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_33_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_34_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_34_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_35_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_35_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_36_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_36_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_37_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_37_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_38_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_38_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_39_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_39_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_40_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_40_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_41_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_41_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_42_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_42_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_43_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_43_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_44_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_44_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_45_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_45_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_46_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_46_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_47_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_47_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_48_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_48_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_49_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_49_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_50_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_50_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_51_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_51_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_52_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_52_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_53_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_53_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_54_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_54_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_55_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_55_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_56_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_56_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_57_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_57_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_58_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_58_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_59_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_59_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_60_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_60_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_61_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_61_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_62_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_62_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_63_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_63_io_co;
    };
    struct {
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_64_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_64_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_65_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_65_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_66_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_66_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_67_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_67_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_68_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_68_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_69_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_69_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_70_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_70_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_71_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_71_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_72_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_72_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_73_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_73_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_74_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_76_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_76_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_77_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_77_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_78_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_78_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_79_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_79_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_80_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_80_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_81_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_81_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_82_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_82_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_83_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_83_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_84_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_84_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_85_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_85_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_86_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_86_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_87_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_87_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_88_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_88_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_89_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_89_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_90_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_90_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_91_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_91_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_92_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_92_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_93_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_93_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_94_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_94_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_95_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_95_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_96_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_96_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_97_io_s;
    };
    struct {
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_97_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_98_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_98_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_99_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_99_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_100_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_100_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_101_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_101_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_102_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_102_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_103_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_103_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_104_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_104_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_105_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_105_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_106_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_106_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_107_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_107_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_108_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_108_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_109_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_109_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_110_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_110_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_111_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_111_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_112_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_112_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_113_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_113_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_114_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_114_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_115_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_115_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_116_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_116_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_117_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_117_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_118_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_118_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_119_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_119_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_120_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_120_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_121_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_121_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_122_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_122_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_123_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_123_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_124_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_126_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_126_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_127_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_127_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_128_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_128_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_129_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_129_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_130_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_130_io_co;
    };
    struct {
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_131_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_131_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_132_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_132_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_133_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_133_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_134_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_134_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_135_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_135_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_136_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_136_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_137_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_137_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_138_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_138_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_139_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_139_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_140_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_140_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_141_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_141_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_142_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_142_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_143_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_143_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_144_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_144_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_145_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_145_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_146_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_146_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_147_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_147_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_148_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_148_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_149_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_149_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_150_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_150_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_151_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_151_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_152_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_152_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_153_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_153_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__HalfAdder_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__HalfAdder_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_154_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_154_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_155_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_155_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_156_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_159_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_159_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_160_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_160_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_161_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_161_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_162_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_162_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_163_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_163_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_164_io_s;
    };
    struct {
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_164_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_165_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_165_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_166_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_166_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_167_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_167_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_168_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_168_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_169_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_169_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_170_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_170_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_171_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_171_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_172_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_172_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_173_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_173_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_174_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_174_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__HalfAdder_1_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__HalfAdder_1_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_175_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_175_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_176_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_176_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_177_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_178_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_183_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_183_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_184_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_184_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_185_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_185_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_186_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_186_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_187_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_187_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__HalfAdder_2_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__HalfAdder_2_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_188_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_188_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_189_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_189_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_190_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_190_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_191_io_s;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_191_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_192_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_193_io_co;
        CData/*0:0*/ MAC__DOT__wt__DOT__FullAdder_194_io_co;
        SData/*15:0*/ MAC__DOT__pp_io_outs_0;
        SData/*15:0*/ MAC__DOT__pp_io_outs_1;
        SData/*15:0*/ MAC__DOT__pp_io_outs_2;
        SData/*15:0*/ MAC__DOT__pp_io_outs_3;
        SData/*15:0*/ MAC__DOT__pp_io_outs_4;
        SData/*15:0*/ MAC__DOT__pp_io_outs_5;
        SData/*15:0*/ MAC__DOT__pp_io_outs_6;
        SData/*15:0*/ MAC__DOT__pp_io_outs_7;
        SData/*15:0*/ MAC__DOT__pp_io_outs_8;
        SData/*15:0*/ MAC__DOT__pp_io_outs_9;
        SData/*15:0*/ MAC__DOT__pp_io_outs_10;
        SData/*15:0*/ MAC__DOT__pp_io_outs_11;
    };
    struct {
        SData/*15:0*/ MAC__DOT__pp_io_outs_12;
        SData/*15:0*/ MAC__DOT__pp_io_outs_13;
        SData/*15:0*/ MAC__DOT__pp_io_outs_14;
        SData/*15:0*/ MAC__DOT__pp_io_outs_15;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_77;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_156;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_235;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_314;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_393;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_472;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_551;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_630;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_709;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_788;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_867;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_946;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_1025;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_1104;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_1183;
        SData/*14:0*/ MAC__DOT__pp__DOT___T_1262;
        IData/*27:0*/ MAC__DOT__wt__DOT___T_282;
        IData/*30:0*/ MAC__DOT__wt__DOT___T_285;
        IData/*30:0*/ MAC__DOT__wt__DOT___T_315;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VMAC__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMAC);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VMAC(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VMAC();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VMAC__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VMAC__Syms* symsp, bool first);
  private:
    static QData _change_request(VMAC__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VMAC__Syms* __restrict vlSymsp);
    static void _combo__TOP__2(VMAC__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VMAC__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VMAC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VMAC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
