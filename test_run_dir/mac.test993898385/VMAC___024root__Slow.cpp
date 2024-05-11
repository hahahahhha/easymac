// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC.h for the primary calling header

#include "VMAC__pch.h"
#include "VMAC__Syms.h"
#include "VMAC___024root.h"

void VMAC___024root___ctor_var_reset(VMAC___024root* vlSelf);

VMAC___024root::VMAC___024root(VMAC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMAC___024root___ctor_var_reset(this);
}

void VMAC___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMAC___024root::~VMAC___024root() {
}
