// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC.h for the primary calling header

#ifndef VERILATED_VMAC_PPADDER_H_
#define VERILATED_VMAC_PPADDER_H_  // guard

#include "verilated.h"


class VMAC__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMAC_PPAdder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ __PVT__PG_io_s;
        CData/*0:0*/ __PVT__PG_io_co;
        CData/*0:0*/ __PVT__PG_1_io_s;
        CData/*0:0*/ __PVT__PG_2_io_s;
        CData/*0:0*/ __PVT__PG_2_io_co;
        CData/*0:0*/ __PVT__PG_3_io_s;
        CData/*0:0*/ __PVT__PG_4_io_s;
        CData/*0:0*/ __PVT__PG_4_io_co;
        CData/*0:0*/ __PVT__PG_5_io_s;
        CData/*0:0*/ __PVT__PG_5_io_co;
        CData/*0:0*/ __PVT__PG_6_io_s;
        CData/*0:0*/ __PVT__PG_7_io_s;
        CData/*0:0*/ __PVT__PG_7_io_co;
        CData/*0:0*/ __PVT__PG_8_io_s;
        CData/*0:0*/ __PVT__PG_9_io_s;
        CData/*0:0*/ __PVT__PG_10_io_s;
        CData/*0:0*/ __PVT__PG_10_io_co;
        CData/*0:0*/ __PVT__PG_11_io_s;
        CData/*0:0*/ __PVT__PG_12_io_s;
        CData/*0:0*/ __PVT__PG_12_io_co;
        CData/*0:0*/ __PVT__PG_13_io_s;
        CData/*0:0*/ __PVT__PG_14_io_s;
        CData/*0:0*/ __PVT__PG_15_io_s;
        CData/*0:0*/ __PVT__PG_16_io_s;
        CData/*0:0*/ __PVT__PG_17_io_s;
        CData/*0:0*/ __PVT__PG_17_io_co;
        CData/*0:0*/ __PVT__PG_18_io_s;
        CData/*0:0*/ __PVT__PG_19_io_s;
        CData/*0:0*/ __PVT__PG_20_io_s;
        CData/*0:0*/ __PVT__PG_20_io_co;
        CData/*0:0*/ __PVT__PG_21_io_s;
        CData/*0:0*/ __PVT__PG_22_io_s;
        CData/*0:0*/ __PVT__PG_22_io_co;
        CData/*0:0*/ __PVT__PG_23_io_s;
        CData/*0:0*/ __PVT__PG_24_io_s;
        CData/*0:0*/ __PVT__PG_25_io_s;
        CData/*0:0*/ __PVT__PG_26_io_s;
        CData/*0:0*/ __PVT__PG_26_io_co;
        CData/*0:0*/ __PVT__PG_27_io_s;
        CData/*0:0*/ __PVT__PG_28_io_s;
        CData/*0:0*/ __PVT__PG_29_io_s;
        CData/*0:0*/ __PVT__PG_30_io_s;
        CData/*0:0*/ __PVT__Black_io_o_g;
        CData/*0:0*/ __PVT__Black_io_o_p;
        CData/*0:0*/ __PVT__Black_1_io_o_g;
        CData/*0:0*/ __PVT__Black_1_io_o_p;
        CData/*0:0*/ __PVT__Black_2_io_o_g;
        CData/*0:0*/ __PVT__Black_2_io_o_p;
        CData/*0:0*/ __PVT__Black_3_io_o_p;
        CData/*0:0*/ __PVT__Black_4_io_o_g;
        CData/*0:0*/ __PVT__Black_4_io_o_p;
        CData/*0:0*/ __PVT__Black_5_io_o_g;
        CData/*0:0*/ __PVT__Black_5_io_o_p;
        CData/*0:0*/ __PVT__Black_6_io_o_p;
        CData/*0:0*/ __PVT__Black_7_io_o_p;
        CData/*0:0*/ __PVT__Black_8_io_o_g;
        CData/*0:0*/ __PVT__Black_8_io_o_p;
        CData/*0:0*/ __PVT__Black_9_io_o_g;
        CData/*0:0*/ __PVT__Black_9_io_o_p;
        CData/*0:0*/ __PVT__Black_10_io_o_g;
        CData/*0:0*/ __PVT__Black_10_io_o_p;
        CData/*0:0*/ __PVT__Black_11_io_o_g;
    };
    struct {
        CData/*0:0*/ __PVT__Black_11_io_o_p;
        CData/*0:0*/ __PVT__Black_12_io_o_p;
        CData/*0:0*/ __PVT__Black_13_io_o_p;
        CData/*0:0*/ __PVT__Black_14_io_o_p;
        CData/*0:0*/ __PVT__Black_15_io_o_p;
        CData/*0:0*/ __PVT__Black_16_io_o_p;
        CData/*0:0*/ __PVT__Black_17_io_o_p;
        CData/*0:0*/ __PVT__Black_18_io_o_p;
        CData/*0:0*/ __PVT__Black_19_io_o_p;
        CData/*0:0*/ __PVT__Black_20_io_o_p;
        CData/*0:0*/ __PVT__Black_21_io_o_g;
        CData/*0:0*/ __PVT__Black_21_io_o_p;
        CData/*0:0*/ __PVT__Black_22_io_o_g;
        CData/*0:0*/ __PVT__Black_22_io_o_p;
        CData/*0:0*/ __PVT__Black_23_io_o_g;
        CData/*0:0*/ __PVT__Black_23_io_o_p;
        CData/*0:0*/ __PVT__Black_24_io_o_p;
        CData/*0:0*/ __PVT__Black_25_io_o_p;
        CData/*0:0*/ __PVT__Black_26_io_o_g;
        CData/*0:0*/ __PVT__Black_26_io_o_p;
        CData/*0:0*/ __PVT__Black_27_io_o_g;
        CData/*0:0*/ __PVT__Black_27_io_o_p;
        CData/*0:0*/ __PVT__Black_28_io_o_p;
        CData/*0:0*/ __PVT__Black_29_io_o_p;
        CData/*0:0*/ __PVT__Black_30_io_o_p;
        CData/*0:0*/ __PVT__Black_31_io_o_p;
        CData/*0:0*/ __PVT__Black_32_io_o_g;
        CData/*0:0*/ __PVT__Black_32_io_o_p;
        CData/*0:0*/ __PVT__Black_33_io_o_g;
        CData/*0:0*/ __PVT__Black_33_io_o_p;
        CData/*0:0*/ __PVT__Black_34_io_o_g;
        CData/*0:0*/ __PVT__Black_34_io_o_p;
        CData/*0:0*/ __PVT__Black_35_io_o_g;
        CData/*0:0*/ __PVT__Black_35_io_o_p;
        CData/*0:0*/ __PVT__Black_36_io_o_g;
        CData/*0:0*/ __PVT__Black_36_io_o_p;
        CData/*0:0*/ __PVT__Black_55_io_o_g;
        CData/*0:0*/ __PVT__Black_59_io_o_g;
        VL_IN(io_augend,30,0);
        VL_IN(io_addend,30,0);
        VL_OUT(io_outs,30,0);
        IData/*18:0*/ __PVT___T_112;
    };

    // INTERNAL VARIABLES
    VMAC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMAC_PPAdder(VMAC__Syms* symsp, const char* v__name);
    ~VMAC_PPAdder();
    VL_UNCOPYABLE(VMAC_PPAdder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
