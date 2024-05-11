// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC.h for the primary calling header

#include "VMAC__pch.h"
#include "VMAC__Syms.h"
#include "VMAC___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC___024root___dump_triggers__stl(VMAC___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VMAC___024root___eval_triggers__stl(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMAC___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void VMAC___024root___ico_sequent__TOP__0(VMAC___024root* vlSelf);
void VMAC_PPAdder___ico_sequent__TOP__MAC__DOT__ppa1__0(VMAC_PPAdder* vlSelf);
void VMAC_PPAdder___ico_sequent__TOP__MAC__DOT__ppa2__0(VMAC_PPAdder* vlSelf);
void VMAC___024root___ico_sequent__TOP__1(VMAC___024root* vlSelf);

VL_ATTR_COLD void VMAC___024root___eval_stl(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VMAC___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VMAC_PPAdder___ico_sequent__TOP__MAC__DOT__ppa1__0((&vlSymsp->TOP__MAC__DOT__ppa1));
        VMAC_PPAdder___ico_sequent__TOP__MAC__DOT__ppa2__0((&vlSymsp->TOP__MAC__DOT__ppa2));
        VMAC___024root___ico_sequent__TOP__1(vlSelf);
    }
}
