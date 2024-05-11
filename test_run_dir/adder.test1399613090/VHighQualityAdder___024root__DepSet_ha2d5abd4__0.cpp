// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighQualityAdder.h for the primary calling header

#include "VHighQualityAdder__pch.h"
#include "VHighQualityAdder__Syms.h"
#include "VHighQualityAdder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighQualityAdder___024root___dump_triggers__ico(VHighQualityAdder___024root* vlSelf);
#endif  // VL_DEBUG

void VHighQualityAdder___024root___eval_triggers__ico(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VHighQualityAdder___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighQualityAdder___024root___dump_triggers__act(VHighQualityAdder___024root* vlSelf);
#endif  // VL_DEBUG

void VHighQualityAdder___024root___eval_triggers__act(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VHighQualityAdder___024root___dump_triggers__act(vlSelf);
    }
#endif
}
