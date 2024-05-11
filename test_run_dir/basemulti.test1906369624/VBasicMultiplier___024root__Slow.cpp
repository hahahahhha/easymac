// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBasicMultiplier.h for the primary calling header

#include "VBasicMultiplier__pch.h"
#include "VBasicMultiplier__Syms.h"
#include "VBasicMultiplier___024root.h"

void VBasicMultiplier___024root___ctor_var_reset(VBasicMultiplier___024root* vlSelf);

VBasicMultiplier___024root::VBasicMultiplier___024root(VBasicMultiplier__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VBasicMultiplier___024root___ctor_var_reset(this);
}

void VBasicMultiplier___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VBasicMultiplier___024root::~VBasicMultiplier___024root() {
}
