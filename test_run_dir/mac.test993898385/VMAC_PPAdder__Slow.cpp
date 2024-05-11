// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC.h for the primary calling header

#include "VMAC__pch.h"
#include "VMAC_PPAdder.h"
#include "VMAC__Syms.h"

void VMAC_PPAdder___ctor_var_reset(VMAC_PPAdder* vlSelf);

VMAC_PPAdder::VMAC_PPAdder(VMAC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMAC_PPAdder___ctor_var_reset(this);
}

void VMAC_PPAdder::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMAC_PPAdder::~VMAC_PPAdder() {
}
