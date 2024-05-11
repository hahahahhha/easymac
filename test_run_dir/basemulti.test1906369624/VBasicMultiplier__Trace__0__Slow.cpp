// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBasicMultiplier__Syms.h"


VL_ATTR_COLD void VBasicMultiplier___024root__trace_init_sub__TOP__0(VBasicMultiplier___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VBasicMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMultiplier___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"io_multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"io_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("BasicMultiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"io_multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"io_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VBasicMultiplier___024root__trace_init_top(VBasicMultiplier___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VBasicMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMultiplier___024root__trace_init_top\n"); );
    // Body
    VBasicMultiplier___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBasicMultiplier___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VBasicMultiplier___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBasicMultiplier___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBasicMultiplier___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBasicMultiplier___024root__trace_register(VBasicMultiplier___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VBasicMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMultiplier___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VBasicMultiplier___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VBasicMultiplier___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VBasicMultiplier___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VBasicMultiplier___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBasicMultiplier___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMultiplier___024root__trace_const_0\n"); );
    // Init
    VBasicMultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBasicMultiplier___024root*>(voidSelf);
    VBasicMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VBasicMultiplier___024root__trace_full_0_sub_0(VBasicMultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VBasicMultiplier___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMultiplier___024root__trace_full_0\n"); );
    // Init
    VBasicMultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBasicMultiplier___024root*>(voidSelf);
    VBasicMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBasicMultiplier___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VBasicMultiplier___024root__trace_full_0_sub_0(VBasicMultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VBasicMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMultiplier___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clock));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullSData(oldp+3,(vlSelf->io_multiplicand),16);
    bufp->fullSData(oldp+4,(vlSelf->io_multiplier),16);
    bufp->fullIData(oldp+5,(vlSelf->io_res),32);
}
