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
        bufp->chgBit(oldp+7,(vlSelf->HighQualityAdder__DOT__Buffer_2_io_currentG));
        bufp->chgBit(oldp+8,(vlSelf->HighQualityAdder__DOT__Buffer_2_io_currentP));
        bufp->chgBit(oldp+9,(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_currentP));
        bufp->chgBit(oldp+10,(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outG));
        bufp->chgBit(oldp+11,(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outP));
        bufp->chgBit(oldp+12,(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentG));
        bufp->chgBit(oldp+13,(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentP));
        bufp->chgBit(oldp+14,(vlSelf->HighQualityAdder__DOT__BlackCell_2_io_currentP));
        bufp->chgBit(oldp+15,(vlSelf->HighQualityAdder__DOT__BlackCell_2_io_outP));
        bufp->chgBit(oldp+16,((((IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentP) 
                                & (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_io_outG)) 
                               | (IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentG))));
        bufp->chgBit(oldp+17,(vlSelf->HighQualityAdder__DOT__GrayCell_2_io_outG));
        bufp->chgBit(oldp+18,((((IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentP) 
                                & (IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outG)) 
                               | (IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentG))));
        bufp->chgBit(oldp+19,(((IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentP) 
                               & (IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outP))));
        bufp->chgBit(oldp+20,(((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_2_io_outP) 
                               & (IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outP))));
        bufp->chgBit(oldp+21,((((IData)(vlSelf->HighQualityAdder__DOT__Buffer_2_io_currentP) 
                                & (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_2_io_outG)) 
                               | (IData)(vlSelf->HighQualityAdder__DOT__Buffer_2_io_currentG))));
        bufp->chgBit(oldp+22,((((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outP) 
                                & (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_2_io_outG)) 
                               | (IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outG))));
        bufp->chgBit(oldp+23,(((((IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentP) 
                                 & (IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outP)) 
                                & (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_2_io_outG)) 
                               | (((IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentP) 
                                   & (IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outG)) 
                                  | (IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentG)))));
    }
    bufp->chgBit(oldp+24,(vlSelf->clock));
    bufp->chgBit(oldp+25,(vlSelf->reset));
    bufp->chgCData(oldp+26,(vlSelf->io_inputs_1),8);
    bufp->chgCData(oldp+27,(vlSelf->io_inputs_0),8);
    bufp->chgCData(oldp+28,(vlSelf->io_outs_0),8);
    bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->io_inputs_0) 
                                 ^ (IData)(vlSelf->io_inputs_1)))));
    bufp->chgBit(oldp+30,((1U & (((IData)(vlSelf->io_inputs_0) 
                                  & (IData)(vlSelf->io_inputs_1)) 
                                 >> 1U))));
    bufp->chgBit(oldp+31,((1U & (((IData)(vlSelf->io_inputs_0) 
                                  & (IData)(vlSelf->io_inputs_1)) 
                                 >> 3U))));
    bufp->chgBit(oldp+32,((1U & (((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_io_currentP) 
                                  & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentG)) 
                                 | (((IData)(vlSelf->io_inputs_0) 
                                     & (IData)(vlSelf->io_inputs_1)) 
                                    >> 3U)))));
    bufp->chgBit(oldp+33,((1U & (((IData)(vlSelf->io_inputs_0) 
                                  & (IData)(vlSelf->io_inputs_1)) 
                                 >> 5U))));
    bufp->chgBit(oldp+34,((1U & (((IData)(vlSelf->io_inputs_0) 
                                  & (IData)(vlSelf->io_inputs_1)) 
                                 >> 7U))));
    bufp->chgBit(oldp+35,((1U & (((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_2_io_currentP) 
                                  & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentG)) 
                                 | (((IData)(vlSelf->io_inputs_0) 
                                     & (IData)(vlSelf->io_inputs_1)) 
                                    >> 7U)))));
    bufp->chgBit(oldp+36,((1U & (((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_2_io_outP) 
                                  & (IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outG)) 
                                 | (((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_2_io_currentP) 
                                     & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentG)) 
                                    | (((IData)(vlSelf->io_inputs_0) 
                                        & (IData)(vlSelf->io_inputs_1)) 
                                       >> 7U))))));
    bufp->chgBit(oldp+37,((1U & ((((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_2_io_outP) 
                                   & (IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outP)) 
                                  & (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_2_io_outG)) 
                                 | (((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_2_io_outP) 
                                     & (IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outG)) 
                                    | (((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_2_io_currentP) 
                                        & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentG)) 
                                       | (((IData)(vlSelf->io_inputs_0) 
                                           & (IData)(vlSelf->io_inputs_1)) 
                                          >> 7U)))))));
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
