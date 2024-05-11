// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighQualityAdder.h for the primary calling header

#include "VHighQualityAdder__pch.h"
#include "VHighQualityAdder___024root.h"

void VHighQualityAdder___024root___ico_sequent__TOP__0(VHighQualityAdder___024root* vlSelf);

void VHighQualityAdder___024root___eval_ico(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VHighQualityAdder___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VHighQualityAdder___024root___ico_sequent__TOP__0(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentG 
        = (1U & (((IData)(vlSelf->io_inputs_0) & (IData)(vlSelf->io_inputs_1)) 
                 >> 6U));
    vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentP 
        = (1U & (((IData)(vlSelf->io_inputs_0) ^ (IData)(vlSelf->io_inputs_1)) 
                 >> 6U));
    vlSelf->HighQualityAdder__DOT__BlackCell_2_io_currentP 
        = (1U & (((IData)(vlSelf->io_inputs_0) ^ (IData)(vlSelf->io_inputs_1)) 
                 >> 7U));
    vlSelf->HighQualityAdder__DOT__Buffer_2_io_currentP 
        = (1U & (((IData)(vlSelf->io_inputs_0) ^ (IData)(vlSelf->io_inputs_1)) 
                 >> 4U));
    vlSelf->HighQualityAdder__DOT__Buffer_2_io_currentG 
        = (1U & (((IData)(vlSelf->io_inputs_0) & (IData)(vlSelf->io_inputs_1)) 
                 >> 4U));
    vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentP 
        = (1U & (((IData)(vlSelf->io_inputs_0) ^ (IData)(vlSelf->io_inputs_1)) 
                 >> 2U));
    vlSelf->HighQualityAdder__DOT__BlackCell_io_currentP 
        = (1U & (((IData)(vlSelf->io_inputs_0) ^ (IData)(vlSelf->io_inputs_1)) 
                 >> 3U));
    vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentG 
        = (1U & (((IData)(vlSelf->io_inputs_0) & (IData)(vlSelf->io_inputs_1)) 
                 >> 2U));
    vlSelf->HighQualityAdder__DOT__BlackCell_1_io_currentP 
        = (1U & (((IData)(vlSelf->io_inputs_0) ^ (IData)(vlSelf->io_inputs_1)) 
                 >> 5U));
    vlSelf->HighQualityAdder__DOT__GrayCell_io_currentP 
        = (1U & (((IData)(vlSelf->io_inputs_0) ^ (IData)(vlSelf->io_inputs_1)) 
                 >> 1U));
    vlSelf->HighQualityAdder__DOT__Buffer_io_currentG 
        = (1U & ((IData)(vlSelf->io_inputs_0) & (IData)(vlSelf->io_inputs_1)));
    vlSelf->HighQualityAdder__DOT__BlackCell_2_io_outP 
        = ((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_2_io_currentP) 
           & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentP));
    vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outP 
        = ((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_currentP) 
           & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_2_io_currentP));
    vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outG 
        = (1U & (((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_currentP) 
                  & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_2_io_currentG)) 
                 | (((IData)(vlSelf->io_inputs_0) & (IData)(vlSelf->io_inputs_1)) 
                    >> 5U)));
    vlSelf->HighQualityAdder__DOT__GrayCell_io_outG 
        = (1U & (((IData)(vlSelf->HighQualityAdder__DOT__GrayCell_io_currentP) 
                  & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_io_currentG)) 
                 | (((IData)(vlSelf->io_inputs_0) & (IData)(vlSelf->io_inputs_1)) 
                    >> 1U)));
    vlSelf->HighQualityAdder__DOT__GrayCell_2_io_outG 
        = (1U & ((((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_io_currentP) 
                   & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentP)) 
                  & (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_io_outG)) 
                 | (((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_io_currentP) 
                     & (IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentG)) 
                    | (((IData)(vlSelf->io_inputs_0) 
                        & (IData)(vlSelf->io_inputs_1)) 
                       >> 3U))));
    vlSelf->io_outs_0 = ((((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_2_io_currentP) 
                           ^ ((((IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentP) 
                                & (IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outP)) 
                               & (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_2_io_outG)) 
                              | (((IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentP) 
                                  & (IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outG)) 
                                 | (IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentG)))) 
                          << 7U) | ((((IData)(vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentP) 
                                      ^ (((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outP) 
                                          & (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_2_io_outG)) 
                                         | (IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outG))) 
                                     << 6U) | ((((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_1_io_currentP) 
                                                 ^ 
                                                 (((IData)(vlSelf->HighQualityAdder__DOT__Buffer_2_io_currentP) 
                                                   & (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_2_io_outG)) 
                                                  | (IData)(vlSelf->HighQualityAdder__DOT__Buffer_2_io_currentG))) 
                                                << 5U) 
                                               | ((((IData)(vlSelf->HighQualityAdder__DOT__Buffer_2_io_currentP) 
                                                    ^ (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_2_io_outG)) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelf->HighQualityAdder__DOT__BlackCell_io_currentP) 
                                                       ^ 
                                                       (((IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentP) 
                                                         & (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_io_outG)) 
                                                        | (IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentG))) 
                                                      << 3U) 
                                                     | ((((IData)(vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentP) 
                                                          ^ (IData)(vlSelf->HighQualityAdder__DOT__GrayCell_io_outG)) 
                                                         << 2U) 
                                                        | ((((IData)(vlSelf->HighQualityAdder__DOT__GrayCell_io_currentP) 
                                                             ^ (IData)(vlSelf->HighQualityAdder__DOT__Buffer_io_currentG)) 
                                                            << 1U) 
                                                           | (1U 
                                                              & ((IData)(vlSelf->io_inputs_0) 
                                                                 ^ (IData)(vlSelf->io_inputs_1))))))))));
}

void VHighQualityAdder___024root___eval_triggers__ico(VHighQualityAdder___024root* vlSelf);

bool VHighQualityAdder___024root___eval_phase__ico(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VHighQualityAdder___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VHighQualityAdder___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VHighQualityAdder___024root___eval_act(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_act\n"); );
}

void VHighQualityAdder___024root___eval_nba(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_nba\n"); );
}

void VHighQualityAdder___024root___eval_triggers__act(VHighQualityAdder___024root* vlSelf);

bool VHighQualityAdder___024root___eval_phase__act(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VHighQualityAdder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VHighQualityAdder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VHighQualityAdder___024root___eval_phase__nba(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VHighQualityAdder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighQualityAdder___024root___dump_triggers__ico(VHighQualityAdder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VHighQualityAdder___024root___dump_triggers__nba(VHighQualityAdder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VHighQualityAdder___024root___dump_triggers__act(VHighQualityAdder___024root* vlSelf);
#endif  // VL_DEBUG

void VHighQualityAdder___024root___eval(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VHighQualityAdder___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("HighQualityAdder.v", 31, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VHighQualityAdder___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VHighQualityAdder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("HighQualityAdder.v", 31, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VHighQualityAdder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("HighQualityAdder.v", 31, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VHighQualityAdder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VHighQualityAdder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VHighQualityAdder___024root___eval_debug_assertions(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
