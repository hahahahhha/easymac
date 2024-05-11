// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHighQualityAdder__Syms.h"


void VHighQualityAdder___024root__trace_chg_0_sub_0(VHighQualityAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VHighQualityAdder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root__trace_chg_0\n"); );
    // Init
    VHighQualityAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHighQualityAdder___024root*>(voidSelf);
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VHighQualityAdder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VHighQualityAdder___024root__trace_chg_0_sub_0(VHighQualityAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->HighQualityAdder__DOT__Buffer_io_currentG));
        bufp->chgBit(oldp+1,(vlSelf->HighQualityAdder__DOT__GrayCell_io_currentP));
        bufp->chgBit(oldp+2,(vlSelf->HighQualityAdder__DOT__GrayCell_io_outG));
        bufp->chgBit(oldp+3,(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentG));
        bufp->chgBit(oldp+4,(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentP));
        bufp->chgBit(oldp+5,(vlSelf->HighQualityAdder__DOT__BlackCell_io_currentP));
        bufp->chgBit(oldp+6,(((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_io_currentP) 
                              & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentP))));
        bufp->chgBit(oldp+7,((((IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentP) 
                               & (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_io_outG)) 
                              | (IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentG))));
    }
    bufp->chgBit(oldp+8,(vlSelf->clock));
    bufp->chgBit(oldp+9,(vlSelf->reset));
    bufp->chgCData(oldp+10,(vlSelf->io_inputs_1),4);
    bufp->chgCData(oldp+11,(vlSelf->io_inputs_0),4);
    bufp->chgCData(oldp+12,(vlSelf->io_outs_0),4);
    bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->io_inputs_0) 
                                 ^ (IData)(vlSelf->io_inputs_1)))));
    bufp->chgBit(oldp+14,((1U & (((IData)(vlSelf->io_inputs_0) 
                                  & (IData)(vlSelf->io_inputs_1)) 
                                 >> 1U))));
    bufp->chgBit(oldp+15,((1U & (((IData)(vlSelf->io_inputs_0) 
                                  & (IData)(vlSelf->io_inputs_1)) 
                                 >> 3U))));
    bufp->chgBit(oldp+16,((1U & (((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_io_currentP) 
                                  & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentG)) 
                                 | (((IData)(vlSelf->io_inputs_0) 
                                     & (IData)(vlSelf->io_inputs_1)) 
                                    >> 3U)))));
    bufp->chgBit(oldp+17,((1U & ((((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_io_currentP) 
                                   & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentP)) 
                                  & (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_io_outG)) 
                                 | (((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_io_currentP) 
                                     & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentG)) 
                                    | (((IData)(vlSelf->io_inputs_0) 
                                        & (IData)(vlSelf->io_inputs_1)) 
                                       >> 3U))))));
}

void VHighQualityAdder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root__trace_cleanup\n"); );
    // Init
    VHighQualityAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHighQualityAdder___024root*>(voidSelf);
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
