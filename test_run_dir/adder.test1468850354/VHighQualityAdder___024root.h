// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHighQualityAdder.h for the primary calling header

#ifndef VERILATED_VHIGHQUALITYADDER___024ROOT_H_
#define VERILATED_VHIGHQUALITYADDER___024ROOT_H_  // guard

#include "verilated.h"


class VHighQualityAdder__Syms;

class alignas(VL_CACHE_LINE_BYTES) VHighQualityAdder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_inputs_1,7,0);
    VL_IN8(io_inputs_0,7,0);
    VL_OUT8(io_outs_0,7,0);
    CData/*0:0*/ HighQualityAdder__DOT__Buffer_io_currentG;
    CData/*0:0*/ HighQualityAdder__DOT__GrayCell_io_currentP;
    CData/*0:0*/ HighQualityAdder__DOT__GrayCell_io_outG;
    CData/*0:0*/ HighQualityAdder__DOT__Buffer_1_io_currentG;
    CData/*0:0*/ HighQualityAdder__DOT__Buffer_1_io_currentP;
    CData/*0:0*/ HighQualityAdder__DOT__BlackCell_io_currentP;
    CData/*0:0*/ HighQualityAdder__DOT__Buffer_2_io_currentG;
    CData/*0:0*/ HighQualityAdder__DOT__Buffer_2_io_currentP;
    CData/*0:0*/ HighQualityAdder__DOT__BlackCell_1_io_currentP;
    CData/*0:0*/ HighQualityAdder__DOT__BlackCell_1_io_outG;
    CData/*0:0*/ HighQualityAdder__DOT__BlackCell_1_io_outP;
    CData/*0:0*/ HighQualityAdder__DOT__Buffer_3_io_currentG;
    CData/*0:0*/ HighQualityAdder__DOT__Buffer_3_io_currentP;
    CData/*0:0*/ HighQualityAdder__DOT__BlackCell_2_io_currentP;
    CData/*0:0*/ HighQualityAdder__DOT__BlackCell_2_io_outP;
    CData/*0:0*/ HighQualityAdder__DOT__GrayCell_2_io_outG;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VHighQualityAdder__Syms* const vlSymsp;

    // CONSTRUCTORS
    VHighQualityAdder___024root(VHighQualityAdder__Syms* symsp, const char* v__name);
    ~VHighQualityAdder___024root();
    VL_UNCOPYABLE(VHighQualityAdder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
