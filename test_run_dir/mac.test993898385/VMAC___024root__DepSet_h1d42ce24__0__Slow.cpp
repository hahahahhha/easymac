// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC.h for the primary calling header

#include "VMAC__pch.h"
#include "VMAC___024root.h"

VL_ATTR_COLD void VMAC___024root___eval_static(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_static\n"); );
}

VL_ATTR_COLD void VMAC___024root___eval_initial(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VMAC___024root___eval_final(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC___024root___dump_triggers__stl(VMAC___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMAC___024root___eval_phase__stl(VMAC___024root* vlSelf);

VL_ATTR_COLD void VMAC___024root___eval_settle(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_settle\n"); );
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
            VMAC___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("MAC.v", 5123, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VMAC___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC___024root___dump_triggers__stl(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMAC___024root___eval_triggers__stl(VMAC___024root* vlSelf);
VL_ATTR_COLD void VMAC___024root___eval_stl(VMAC___024root* vlSelf);

VL_ATTR_COLD bool VMAC___024root___eval_phase__stl(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMAC___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VMAC___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC___024root___dump_triggers__ico(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VMAC___024root___dump_triggers__act(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC___024root___dump_triggers__nba(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMAC___024root___ctor_var_reset(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_multiplicand = VL_RAND_RESET_I(16);
    vlSelf->io_multiplier = VL_RAND_RESET_I(16);
    vlSelf->io_addend = VL_RAND_RESET_I(31);
    vlSelf->io_outs = VL_RAND_RESET_I(31);
    vlSelf->MAC__DOT__ppa1_io_augend = VL_RAND_RESET_I(31);
    vlSelf->MAC__DOT__ppa1_io_addend = VL_RAND_RESET_I(31);
    vlSelf->MAC__DOT__pp__DOT___T_21 = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_ci = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_78_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_78_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_81_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_81_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_82_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_82_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_83_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_83_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_85_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_85_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_87_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_87_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_88_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_88_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_89_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_89_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_90_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_90_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_92_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_92_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_93_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_93_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_95_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_95_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_96_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_96_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_97_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_97_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_98_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_98_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_99_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_99_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_101_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_101_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_102_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_102_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_103_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_103_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_104_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_104_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_105_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_105_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_107_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_107_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_108_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_108_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_110_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_110_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_111_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_111_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_112_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_112_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_113_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_113_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_115_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_115_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_117_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_117_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_118_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_118_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_120_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_120_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_122_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_122_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_b = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_124_io_a = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_124_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_128_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_128_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_129_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_129_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_130_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_130_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_131_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_131_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_132_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_132_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_133_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_133_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_134_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_134_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_135_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_135_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_136_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_136_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_137_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_137_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_138_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_138_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_139_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_139_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_140_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_140_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_141_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_141_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_142_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_142_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_143_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_143_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_144_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_144_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_145_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_145_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_146_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_146_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_147_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_147_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_148_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_148_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_149_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_149_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_150_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_150_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_151_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_151_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_152_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_152_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_153_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_153_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__HalfAdder_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__HalfAdder_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_154_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_154_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_156_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_163_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_163_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_164_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_164_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_165_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_165_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_166_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_166_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_167_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_167_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_168_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_168_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_169_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_169_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_170_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_170_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_171_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_171_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_172_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_172_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_173_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_173_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_174_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_174_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_175_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_175_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_177_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_178_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_188_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_188_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_189_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_189_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_190_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_190_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_191_io_s = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_191_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_192_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_193_io_co = VL_RAND_RESET_I(1);
    vlSelf->MAC__DOT__wt__DOT__FullAdder_194_io_co = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
