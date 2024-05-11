// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBasicMultiplier.h for the primary calling header

#ifndef VERILATED_VBASICMULTIPLIER___024ROOT_H_
#define VERILATED_VBASICMULTIPLIER___024ROOT_H_  // guard

#include "verilated.h"


class VBasicMultiplier__Syms;

class alignas(VL_CACHE_LINE_BYTES) VBasicMultiplier___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN16(io_multiplicand,15,0);
    VL_IN16(io_multiplier,15,0);
    VL_OUT(io_res,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VBasicMultiplier__Syms* const vlSymsp;

    // CONSTRUCTORS
    VBasicMultiplier___024root(VBasicMultiplier__Syms* symsp, const char* v__name);
    ~VBasicMultiplier___024root();
    VL_UNCOPYABLE(VBasicMultiplier___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
