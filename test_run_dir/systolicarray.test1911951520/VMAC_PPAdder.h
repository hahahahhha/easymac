// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC.h for the primary calling header

#ifndef _VMAC_PPADDER_H_
#define _VMAC_PPADDER_H_  // guard

#include "verilated_heavy.h"

//==========

class VMAC__Syms;
class VMAC_VerilatedVcd;


//----------

VL_MODULE(VMAC_PPAdder) {
  public:
    
    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN(io_augend,30,0);
    VL_IN(io_addend,30,0);
    VL_OUT(io_outs,30,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
        CData/*0:0*/ __PVT__Black_11_io_o_p;
        CData/*0:0*/ __PVT__Black_12_io_o_p;
    };
    struct {
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
        IData/*18:0*/ __PVT___T_112;
    };
    
    // INTERNAL VARIABLES
  private:
    VMAC__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMAC_PPAdder);  ///< Copying not allowed
  public:
    VMAC_PPAdder(const char* name = "TOP");
    ~VMAC_PPAdder();
    
    // INTERNAL METHODS
    void __Vconfigure(VMAC__Syms* symsp, bool first);
    void _combo__TOP__MAC__DOT__ppa1__3(VMAC__Syms* __restrict vlSymsp);
    void _combo__TOP__MAC__DOT__ppa2__4(VMAC__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__MAC__DOT__ppa1__2(VMAC__Syms* __restrict vlSymsp);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
