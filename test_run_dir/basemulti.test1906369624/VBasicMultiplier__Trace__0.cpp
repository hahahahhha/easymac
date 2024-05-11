// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBasicMultiplier__Syms.h"


void VBasicMultiplier___024root__trace_chg_0_sub_0(VBasicMultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VBasicMultiplier___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMultiplier___024root__trace_chg_0\n"); );
    // Init
    VBasicMultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBasicMultiplier___024root*>(voidSelf);
    VBasicMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VBasicMultiplier___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VBasicMultiplier___024root__trace_chg_0_sub_0(VBasicMultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VBasicMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMultiplier___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clock));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgSData(oldp+2,(vlSelf->io_multiplicand),16);
    bufp->chgSData(oldp+3,(vlSelf->io_multiplier),16);
    bufp->chgIData(oldp+4,(vlSelf->io_res),32);
}

void VBasicMultiplier___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMultiplier___024root__trace_cleanup\n"); );
    // Init
    VBasicMultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBasicMultiplier___024root*>(voidSelf);
    VBasicMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
