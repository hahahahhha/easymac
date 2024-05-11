// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHighQualityAdder.h for the primary calling header

#include "VHighQualityAdder__pch.h"
#include "VHighQualityAdder___024root.h"

VL_ATTR_COLD void VHighQualityAdder___024root___eval_static(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_static\n"); );
}

VL_ATTR_COLD void VHighQualityAdder___024root___eval_initial(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VHighQualityAdder___024root___eval_final(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighQualityAdder___024root___dump_triggers__stl(VHighQualityAdder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VHighQualityAdder___024root___eval_phase__stl(VHighQualityAdder___024root* vlSelf);

VL_ATTR_COLD void VHighQualityAdder___024root___eval_settle(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VHighQualityAdder___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("HighQualityAdder.v", 31, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VHighQualityAdder___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighQualityAdder___024root___dump_triggers__stl(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VHighQualityAdder___024root___ico_sequent__TOP__0(VHighQualityAdder___024root* vlSelf);

VL_ATTR_COLD void VHighQualityAdder___024root___eval_stl(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VHighQualityAdder___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VHighQualityAdder___024root___eval_triggers__stl(VHighQualityAdder___024root* vlSelf);

VL_ATTR_COLD bool VHighQualityAdder___024root___eval_phase__stl(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VHighQualityAdder___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VHighQualityAdder___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighQualityAdder___024root___dump_triggers__ico(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighQualityAdder___024root___dump_triggers__act(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VHighQualityAdder___024root___dump_triggers__nba(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VHighQualityAdder___024root___ctor_var_reset(VHighQualityAdder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHighQualityAdder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_inputs_1 = VL_RAND_RESET_I(8);
    vlSelf->io_inputs_0 = VL_RAND_RESET_I(8);
    vlSelf->io_outs_0 = VL_RAND_RESET_I(8);
    vlSelf->HighQualityAdder__DOT__Buffer_io_currentG = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__GrayCell_io_currentP = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__GrayCell_io_outG = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentG = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__Buffer_1_io_currentP = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__BlackCell_io_currentP = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__Buffer_2_io_currentG = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__Buffer_2_io_currentP = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__BlackCell_1_io_currentP = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outG = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__BlackCell_1_io_outP = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentG = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__Buffer_3_io_currentP = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__BlackCell_2_io_currentP = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__BlackCell_2_io_outP = VL_RAND_RESET_I(1);
    vlSelf->HighQualityAdder__DOT__GrayCell_2_io_outG = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
