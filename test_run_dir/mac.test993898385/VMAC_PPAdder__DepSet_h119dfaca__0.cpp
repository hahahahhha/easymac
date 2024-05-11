// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC.h for the primary calling header

#include "VMAC__pch.h"
#include "VMAC_PPAdder.h"
#include "VMAC__Syms.h"

VL_INLINE_OPT void VMAC_PPAdder___ico_sequent__TOP__MAC__DOT__ppa1__0(VMAC_PPAdder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_PPAdder___ico_sequent__TOP__MAC__DOT__ppa1__0\n"); );
    // Init
    IData/*18:0*/ __PVT___T_112;
    __PVT___T_112 = 0;
    // Body
    vlSelf->__PVT__PG_io_s = (1U & (vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                    ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend));
    vlSelf->__PVT__PG_30_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x1eU));
    vlSelf->__PVT__PG_10_io_co = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                         & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                        >> 0xaU));
    vlSelf->__PVT__PG_20_io_co = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                         & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                        >> 0x14U));
    vlSelf->__PVT__PG_16_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x10U));
    vlSelf->__PVT__PG_26_io_co = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                         & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                        >> 0x1aU));
    vlSelf->__PVT__PG_22_io_co = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                         & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                        >> 0x16U));
    vlSelf->__PVT__PG_29_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x1dU));
    vlSelf->__PVT__PG_5_io_co = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 5U));
    vlSelf->__PVT__PG_7_io_co = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 7U));
    vlSelf->__PVT__PG_4_io_co = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 4U));
    vlSelf->__PVT__PG_7_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                       ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                      >> 7U));
    vlSelf->__PVT__PG_10_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0xaU));
    vlSelf->__PVT__PG_12_io_co = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                         & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                        >> 0xcU));
    vlSelf->__PVT__PG_12_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0xcU));
    vlSelf->__PVT__PG_17_io_co = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                         & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                        >> 0x11U));
    vlSelf->__PVT__PG_15_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0xfU));
    vlSelf->__PVT__PG_4_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                       ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                      >> 4U));
    vlSelf->__PVT__PG_2_io_co = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 2U));
    vlSelf->__PVT__PG_2_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                       ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                      >> 2U));
    vlSelf->__PVT__PG_9_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                       ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                      >> 9U));
    vlSelf->__PVT__PG_11_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0xbU));
    vlSelf->__PVT__PG_28_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x1cU));
    vlSelf->__PVT__PG_14_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0xeU));
    vlSelf->__PVT__PG_io_co = (1U & (vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                     & vlSymsp->TOP.MAC__DOT__ppa1_io_addend));
    vlSelf->__PVT__PG_1_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                       ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                      >> 1U));
    vlSelf->__PVT__PG_26_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x1aU));
    vlSelf->__PVT__PG_25_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x19U));
    vlSelf->__PVT__PG_8_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                       ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                      >> 8U));
    vlSelf->__PVT__PG_5_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                       ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                      >> 5U));
    vlSelf->__PVT__PG_13_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0xdU));
    vlSelf->__PVT__PG_27_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x1bU));
    vlSelf->__PVT__PG_24_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x18U));
    vlSelf->__PVT__PG_22_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x16U));
    vlSelf->__PVT__PG_3_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                       ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                      >> 3U));
    vlSelf->__PVT__PG_6_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                       ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                      >> 6U));
    vlSelf->__PVT__PG_17_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x11U));
    vlSelf->__PVT__PG_20_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x14U));
    vlSelf->__PVT__PG_23_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x17U));
    vlSelf->__PVT__PG_21_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x15U));
    vlSelf->__PVT__PG_19_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x13U));
    vlSelf->__PVT__PG_18_io_s = (1U & ((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                        ^ vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                       >> 0x12U));
    vlSelf->__PVT__Black_25_io_o_p = ((IData)(vlSelf->__PVT__PG_10_io_s) 
                                      & (IData)(vlSelf->__PVT__PG_11_io_s));
    vlSelf->__PVT__Black_32_io_o_p = ((IData)(vlSelf->__PVT__PG_io_s) 
                                      & (IData)(vlSelf->__PVT__PG_1_io_s));
    vlSelf->__PVT__Black_32_io_o_g = (1U & (((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                              & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->__PVT__PG_io_co) 
                                               & (IData)(vlSelf->__PVT__PG_1_io_s))));
    vlSelf->__PVT__Black_26_io_o_g = (1U & (((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                              & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                             >> 8U) 
                                            | ((IData)(vlSelf->__PVT__PG_7_io_co) 
                                               & (IData)(vlSelf->__PVT__PG_8_io_s))));
    vlSelf->__PVT__Black_26_io_o_p = ((IData)(vlSelf->__PVT__PG_7_io_s) 
                                      & (IData)(vlSelf->__PVT__PG_8_io_s));
    vlSelf->__PVT__Black_21_io_o_g = (1U & (((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                              & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                             >> 0xdU) 
                                            | ((IData)(vlSelf->__PVT__PG_12_io_co) 
                                               & (IData)(vlSelf->__PVT__PG_13_io_s))));
    vlSelf->__PVT__Black_21_io_o_p = ((IData)(vlSelf->__PVT__PG_12_io_s) 
                                      & (IData)(vlSelf->__PVT__PG_13_io_s));
    vlSelf->__PVT__Black_io_o_g = (1U & (((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                           & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                          >> 0x1bU) 
                                         | ((IData)(vlSelf->__PVT__PG_26_io_co) 
                                            & (IData)(vlSelf->__PVT__PG_27_io_s))));
    vlSelf->__PVT__Black_io_o_p = ((IData)(vlSelf->__PVT__PG_26_io_s) 
                                   & (IData)(vlSelf->__PVT__PG_27_io_s));
    vlSelf->__PVT__Black_31_io_o_p = ((IData)(vlSelf->__PVT__PG_2_io_s) 
                                      & (IData)(vlSelf->__PVT__PG_3_io_s));
    vlSelf->__PVT__Black_29_io_o_p = ((IData)(vlSelf->__PVT__PG_5_io_s) 
                                      & (IData)(vlSelf->__PVT__PG_6_io_s));
    vlSelf->__PVT__Black_4_io_o_g = (1U & (((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                             & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                            >> 0x17U) 
                                           | ((IData)(vlSelf->__PVT__PG_22_io_co) 
                                              & (IData)(vlSelf->__PVT__PG_23_io_s))));
    vlSelf->__PVT__Black_4_io_o_p = ((IData)(vlSelf->__PVT__PG_22_io_s) 
                                     & (IData)(vlSelf->__PVT__PG_23_io_s));
    vlSelf->__PVT__Black_7_io_o_p = ((IData)(vlSelf->__PVT__PG_20_io_s) 
                                     & (IData)(vlSelf->__PVT__PG_21_io_s));
    vlSelf->__PVT__Black_8_io_o_g = (1U & (((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                             & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                            >> 0x12U) 
                                           | ((IData)(vlSelf->__PVT__PG_17_io_co) 
                                              & (IData)(vlSelf->__PVT__PG_18_io_s))));
    vlSelf->__PVT__Black_8_io_o_p = ((IData)(vlSelf->__PVT__PG_17_io_s) 
                                     & (IData)(vlSelf->__PVT__PG_18_io_s));
    vlSelf->__PVT__Black_27_io_o_g = (1U & (((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                              & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                             >> 9U) 
                                            | ((IData)(vlSelf->__PVT__Black_26_io_o_g) 
                                               & (IData)(vlSelf->__PVT__PG_9_io_s))));
    vlSelf->__PVT__Black_27_io_o_p = ((IData)(vlSelf->__PVT__Black_26_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_9_io_s));
    vlSelf->__PVT__Black_22_io_o_g = (1U & (((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                              & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                             >> 0xeU) 
                                            | ((IData)(vlSelf->__PVT__Black_21_io_o_g) 
                                               & (IData)(vlSelf->__PVT__PG_14_io_s))));
    vlSelf->__PVT__Black_22_io_o_p = ((IData)(vlSelf->__PVT__Black_21_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_14_io_s));
    vlSelf->__PVT__Black_1_io_o_g = (1U & (((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                             & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                            >> 0x1cU) 
                                           | ((IData)(vlSelf->__PVT__Black_io_o_g) 
                                              & (IData)(vlSelf->__PVT__PG_28_io_s))));
    vlSelf->__PVT__Black_1_io_o_p = ((IData)(vlSelf->__PVT__Black_io_o_p) 
                                     & (IData)(vlSelf->__PVT__PG_28_io_s));
    vlSelf->__PVT__Black_33_io_o_p = ((IData)(vlSelf->__PVT__Black_32_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_31_io_o_p));
    vlSelf->__PVT__Black_33_io_o_g = (1U & ((((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                               & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                              >> 3U) 
                                             | ((IData)(vlSelf->__PVT__PG_2_io_co) 
                                                & (IData)(vlSelf->__PVT__PG_3_io_s))) 
                                            | ((IData)(vlSelf->__PVT__Black_32_io_o_g) 
                                               & (IData)(vlSelf->__PVT__Black_31_io_o_p))));
    vlSelf->__PVT__Black_30_io_o_p = ((IData)(vlSelf->__PVT__PG_4_io_s) 
                                      & (IData)(vlSelf->__PVT__Black_29_io_o_p));
    vlSelf->__PVT__Black_5_io_o_g = (1U & (((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                             & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                            >> 0x18U) 
                                           | ((IData)(vlSelf->__PVT__Black_4_io_o_g) 
                                              & (IData)(vlSelf->__PVT__PG_24_io_s))));
    vlSelf->__PVT__Black_5_io_o_p = ((IData)(vlSelf->__PVT__Black_4_io_o_p) 
                                     & (IData)(vlSelf->__PVT__PG_24_io_s));
    vlSelf->__PVT__Black_9_io_o_g = (1U & (((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                             & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                            >> 0x13U) 
                                           | ((IData)(vlSelf->__PVT__Black_8_io_o_g) 
                                              & (IData)(vlSelf->__PVT__PG_19_io_s))));
    vlSelf->__PVT__Black_9_io_o_p = ((IData)(vlSelf->__PVT__Black_8_io_o_p) 
                                     & (IData)(vlSelf->__PVT__PG_19_io_s));
    vlSelf->__PVT__Black_28_io_o_p = ((IData)(vlSelf->__PVT__Black_27_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_25_io_o_p));
    vlSelf->__PVT__Black_23_io_o_g = (1U & (((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                              & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                             >> 0xfU) 
                                            | ((IData)(vlSelf->__PVT__Black_22_io_o_g) 
                                               & (IData)(vlSelf->__PVT__PG_15_io_s))));
    vlSelf->__PVT__Black_23_io_o_p = ((IData)(vlSelf->__PVT__Black_22_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_15_io_s));
    vlSelf->__PVT__Black_2_io_o_g = (1U & (((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                             & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                            >> 0x1dU) 
                                           | ((IData)(vlSelf->__PVT__Black_1_io_o_g) 
                                              & (IData)(vlSelf->__PVT__PG_29_io_s))));
    vlSelf->__PVT__Black_2_io_o_p = ((IData)(vlSelf->__PVT__Black_1_io_o_p) 
                                     & (IData)(vlSelf->__PVT__PG_29_io_s));
    vlSelf->__PVT__Black_59_io_o_g = ((IData)(vlSelf->__PVT__PG_4_io_co) 
                                      | ((IData)(vlSelf->__PVT__Black_33_io_o_g) 
                                         & (IData)(vlSelf->__PVT__PG_4_io_s)));
    vlSelf->__PVT__Black_34_io_o_p = ((IData)(vlSelf->__PVT__Black_33_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_30_io_o_p));
    vlSelf->__PVT__Black_34_io_o_g = (1U & (((((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                                & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                               >> 6U) 
                                              | ((IData)(vlSelf->__PVT__PG_5_io_co) 
                                                 & (IData)(vlSelf->__PVT__PG_6_io_s))) 
                                             | ((IData)(vlSelf->__PVT__PG_4_io_co) 
                                                & (IData)(vlSelf->__PVT__Black_29_io_o_p))) 
                                            | ((IData)(vlSelf->__PVT__Black_33_io_o_g) 
                                               & (IData)(vlSelf->__PVT__Black_30_io_o_p))));
    vlSelf->__PVT__Black_6_io_o_p = ((IData)(vlSelf->__PVT__Black_5_io_o_p) 
                                     & (IData)(vlSelf->__PVT__PG_25_io_s));
    vlSelf->__PVT__Black_10_io_o_g = (1U & ((((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                               & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                              >> 0x15U) 
                                             | ((IData)(vlSelf->__PVT__PG_20_io_co) 
                                                & (IData)(vlSelf->__PVT__PG_21_io_s))) 
                                            | ((IData)(vlSelf->__PVT__Black_9_io_o_g) 
                                               & (IData)(vlSelf->__PVT__Black_7_io_o_p))));
    vlSelf->__PVT__Black_20_io_o_p = ((IData)(vlSelf->__PVT__Black_9_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_20_io_s));
    vlSelf->__PVT__Black_10_io_o_p = ((IData)(vlSelf->__PVT__Black_9_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_7_io_o_p));
    vlSelf->__PVT__Black_24_io_o_p = ((IData)(vlSelf->__PVT__Black_23_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_16_io_s));
    vlSelf->__PVT__Black_3_io_o_p = ((IData)(vlSelf->__PVT__Black_2_io_o_p) 
                                     & (IData)(vlSelf->__PVT__PG_30_io_s));
    vlSelf->__PVT__Black_35_io_o_p = ((IData)(vlSelf->__PVT__Black_34_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_28_io_o_p));
    vlSelf->__PVT__Black_55_io_o_g = ((IData)(vlSelf->__PVT__Black_27_io_o_g) 
                                      | ((IData)(vlSelf->__PVT__Black_34_io_o_g) 
                                         & (IData)(vlSelf->__PVT__Black_27_io_o_p)));
    vlSelf->__PVT__Black_35_io_o_g = (1U & (((((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                                & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                               >> 0xbU) 
                                              | ((IData)(vlSelf->__PVT__PG_10_io_co) 
                                                 & (IData)(vlSelf->__PVT__PG_11_io_s))) 
                                             | ((IData)(vlSelf->__PVT__Black_27_io_o_g) 
                                                & (IData)(vlSelf->__PVT__Black_25_io_o_p))) 
                                            | ((IData)(vlSelf->__PVT__Black_34_io_o_g) 
                                               & (IData)(vlSelf->__PVT__Black_28_io_o_p))));
    vlSelf->__PVT__Black_11_io_o_g = (1U & ((((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                               & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                              >> 0x19U) 
                                             | ((IData)(vlSelf->__PVT__Black_5_io_o_g) 
                                                & (IData)(vlSelf->__PVT__PG_25_io_s))) 
                                            | ((IData)(vlSelf->__PVT__Black_10_io_o_g) 
                                               & (IData)(vlSelf->__PVT__Black_6_io_o_p))));
    vlSelf->__PVT__Black_17_io_o_p = ((IData)(vlSelf->__PVT__Black_10_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_5_io_o_p));
    vlSelf->__PVT__Black_18_io_o_p = ((IData)(vlSelf->__PVT__Black_10_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_4_io_o_p));
    vlSelf->__PVT__Black_19_io_o_p = ((IData)(vlSelf->__PVT__Black_10_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_22_io_s));
    vlSelf->__PVT__Black_11_io_o_p = ((IData)(vlSelf->__PVT__Black_10_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_6_io_o_p));
    vlSelf->__PVT__Black_36_io_o_p = ((IData)(vlSelf->__PVT__Black_35_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_24_io_o_p));
    vlSelf->__PVT__Black_36_io_o_g = (1U & ((((vlSymsp->TOP.MAC__DOT__ppa1_io_augend 
                                               & vlSymsp->TOP.MAC__DOT__ppa1_io_addend) 
                                              >> 0x10U) 
                                             | ((IData)(vlSelf->__PVT__Black_23_io_o_g) 
                                                & (IData)(vlSelf->__PVT__PG_16_io_s))) 
                                            | ((IData)(vlSelf->__PVT__Black_35_io_o_g) 
                                               & (IData)(vlSelf->__PVT__Black_24_io_o_p))));
    vlSelf->__PVT__Black_12_io_o_p = ((IData)(vlSelf->__PVT__Black_11_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_3_io_o_p));
    vlSelf->__PVT__Black_13_io_o_p = ((IData)(vlSelf->__PVT__Black_11_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_2_io_o_p));
    vlSelf->__PVT__Black_14_io_o_p = ((IData)(vlSelf->__PVT__Black_11_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_1_io_o_p));
    vlSelf->__PVT__Black_15_io_o_p = ((IData)(vlSelf->__PVT__Black_11_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_io_o_p));
    vlSelf->__PVT__Black_16_io_o_p = ((IData)(vlSelf->__PVT__Black_11_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_26_io_s));
    __PVT___T_112 = (((((((IData)(vlSelf->__PVT__Black_2_io_o_g) 
                          | ((IData)(vlSelf->__PVT__Black_11_io_o_g) 
                             & (IData)(vlSelf->__PVT__Black_2_io_o_p))) 
                         | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                            & (IData)(vlSelf->__PVT__Black_13_io_o_p))) 
                        ^ (IData)(vlSelf->__PVT__PG_30_io_s)) 
                       << 0x12U) | ((((((IData)(vlSelf->__PVT__Black_1_io_o_g) 
                                        | ((IData)(vlSelf->__PVT__Black_11_io_o_g) 
                                           & (IData)(vlSelf->__PVT__Black_1_io_o_p))) 
                                       | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                          & (IData)(vlSelf->__PVT__Black_14_io_o_p))) 
                                      ^ (IData)(vlSelf->__PVT__PG_29_io_s)) 
                                     << 0x11U) | ((
                                                   ((((IData)(vlSelf->__PVT__Black_io_o_g) 
                                                      | ((IData)(vlSelf->__PVT__Black_11_io_o_g) 
                                                         & (IData)(vlSelf->__PVT__Black_io_o_p))) 
                                                     | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                        & (IData)(vlSelf->__PVT__Black_15_io_o_p))) 
                                                    ^ (IData)(vlSelf->__PVT__PG_28_io_s)) 
                                                   << 0x10U) 
                                                  | ((((((IData)(vlSelf->__PVT__PG_26_io_co) 
                                                         | ((IData)(vlSelf->__PVT__Black_11_io_o_g) 
                                                            & (IData)(vlSelf->__PVT__PG_26_io_s))) 
                                                        | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                           & (IData)(vlSelf->__PVT__Black_16_io_o_p))) 
                                                       ^ (IData)(vlSelf->__PVT__PG_27_io_s)) 
                                                      << 0xfU) 
                                                     | (((((IData)(vlSelf->__PVT__Black_11_io_o_g) 
                                                           | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                              & (IData)(vlSelf->__PVT__Black_11_io_o_p))) 
                                                          ^ (IData)(vlSelf->__PVT__PG_26_io_s)) 
                                                         << 0xeU) 
                                                        | ((((((IData)(vlSelf->__PVT__Black_5_io_o_g) 
                                                               | ((IData)(vlSelf->__PVT__Black_10_io_o_g) 
                                                                  & (IData)(vlSelf->__PVT__Black_5_io_o_p))) 
                                                              | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                                 & (IData)(vlSelf->__PVT__Black_17_io_o_p))) 
                                                             ^ (IData)(vlSelf->__PVT__PG_25_io_s)) 
                                                            << 0xdU) 
                                                           | ((((((IData)(vlSelf->__PVT__Black_4_io_o_g) 
                                                                  | ((IData)(vlSelf->__PVT__Black_10_io_o_g) 
                                                                     & (IData)(vlSelf->__PVT__Black_4_io_o_p))) 
                                                                 | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                                    & (IData)(vlSelf->__PVT__Black_18_io_o_p))) 
                                                                ^ (IData)(vlSelf->__PVT__PG_24_io_s)) 
                                                               << 0xcU) 
                                                              | ((((((IData)(vlSelf->__PVT__PG_22_io_co) 
                                                                     | ((IData)(vlSelf->__PVT__Black_10_io_o_g) 
                                                                        & (IData)(vlSelf->__PVT__PG_22_io_s))) 
                                                                    | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                                       & (IData)(vlSelf->__PVT__Black_19_io_o_p))) 
                                                                   ^ (IData)(vlSelf->__PVT__PG_23_io_s)) 
                                                                  << 0xbU) 
                                                                 | (((((IData)(vlSelf->__PVT__Black_10_io_o_g) 
                                                                       | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                                          & (IData)(vlSelf->__PVT__Black_10_io_o_p))) 
                                                                      ^ (IData)(vlSelf->__PVT__PG_22_io_s)) 
                                                                     << 0xaU) 
                                                                    | (((((IData)(vlSelf->__PVT__PG_20_io_co) 
                                                                          | ((IData)(vlSelf->__PVT__Black_9_io_o_g) 
                                                                             & (IData)(vlSelf->__PVT__PG_20_io_s))) 
                                                                         | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                                            & (IData)(vlSelf->__PVT__Black_20_io_o_p))) 
                                                                        ^ (IData)(vlSelf->__PVT__PG_21_io_s)) 
                                                                       << 9U)))))))))) 
                     | (((((IData)(vlSelf->__PVT__Black_9_io_o_g) 
                           | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                              & (IData)(vlSelf->__PVT__Black_9_io_o_p))) 
                          ^ (IData)(vlSelf->__PVT__PG_20_io_s)) 
                         << 8U) | (((((IData)(vlSelf->__PVT__Black_8_io_o_g) 
                                      | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                         & (IData)(vlSelf->__PVT__Black_8_io_o_p))) 
                                     ^ (IData)(vlSelf->__PVT__PG_19_io_s)) 
                                    << 7U) | (((((IData)(vlSelf->__PVT__PG_17_io_co) 
                                                 | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                    & (IData)(vlSelf->__PVT__PG_17_io_s))) 
                                                ^ (IData)(vlSelf->__PVT__PG_18_io_s)) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                   ^ (IData)(vlSelf->__PVT__PG_17_io_s)) 
                                                  << 5U) 
                                                 | (((((IData)(vlSelf->__PVT__Black_23_io_o_g) 
                                                       | ((IData)(vlSelf->__PVT__Black_35_io_o_g) 
                                                          & (IData)(vlSelf->__PVT__Black_23_io_o_p))) 
                                                      ^ (IData)(vlSelf->__PVT__PG_16_io_s)) 
                                                     << 4U) 
                                                    | (((((IData)(vlSelf->__PVT__Black_22_io_o_g) 
                                                          | ((IData)(vlSelf->__PVT__Black_35_io_o_g) 
                                                             & (IData)(vlSelf->__PVT__Black_22_io_o_p))) 
                                                         ^ (IData)(vlSelf->__PVT__PG_15_io_s)) 
                                                        << 3U) 
                                                       | (((((IData)(vlSelf->__PVT__Black_21_io_o_g) 
                                                             | ((IData)(vlSelf->__PVT__Black_35_io_o_g) 
                                                                & (IData)(vlSelf->__PVT__Black_21_io_o_p))) 
                                                            ^ (IData)(vlSelf->__PVT__PG_14_io_s)) 
                                                           << 2U) 
                                                          | (((((IData)(vlSelf->__PVT__PG_12_io_co) 
                                                                | ((IData)(vlSelf->__PVT__Black_35_io_o_g) 
                                                                   & (IData)(vlSelf->__PVT__PG_12_io_s))) 
                                                               ^ (IData)(vlSelf->__PVT__PG_13_io_s)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelf->__PVT__Black_35_io_o_g) 
                                                                ^ (IData)(vlSelf->__PVT__PG_12_io_s)))))))))));
    vlSelf->io_outs = (((__PVT___T_112 << 0xcU) | (
                                                   ((((IData)(vlSelf->__PVT__PG_10_io_co) 
                                                      | ((IData)(vlSelf->__PVT__Black_55_io_o_g) 
                                                         & (IData)(vlSelf->__PVT__PG_10_io_s))) 
                                                     ^ (IData)(vlSelf->__PVT__PG_11_io_s)) 
                                                    << 0xbU) 
                                                   | ((((IData)(vlSelf->__PVT__Black_55_io_o_g) 
                                                        ^ (IData)(vlSelf->__PVT__PG_10_io_s)) 
                                                       << 0xaU) 
                                                      | (((((IData)(vlSelf->__PVT__Black_26_io_o_g) 
                                                            | ((IData)(vlSelf->__PVT__Black_34_io_o_g) 
                                                               & (IData)(vlSelf->__PVT__Black_26_io_o_p))) 
                                                           ^ (IData)(vlSelf->__PVT__PG_9_io_s)) 
                                                          << 9U) 
                                                         | (((((IData)(vlSelf->__PVT__PG_7_io_co) 
                                                               | ((IData)(vlSelf->__PVT__Black_34_io_o_g) 
                                                                  & (IData)(vlSelf->__PVT__PG_7_io_s))) 
                                                              ^ (IData)(vlSelf->__PVT__PG_8_io_s)) 
                                                             << 8U) 
                                                            | ((((IData)(vlSelf->__PVT__Black_34_io_o_g) 
                                                                 ^ (IData)(vlSelf->__PVT__PG_7_io_s)) 
                                                                << 7U) 
                                                               | (((((IData)(vlSelf->__PVT__PG_5_io_co) 
                                                                     | ((IData)(vlSelf->__PVT__Black_59_io_o_g) 
                                                                        & (IData)(vlSelf->__PVT__PG_5_io_s))) 
                                                                    ^ (IData)(vlSelf->__PVT__PG_6_io_s)) 
                                                                   << 6U) 
                                                                  | ((((IData)(vlSelf->__PVT__Black_59_io_o_g) 
                                                                       ^ (IData)(vlSelf->__PVT__PG_5_io_s)) 
                                                                      << 5U) 
                                                                     | ((((IData)(vlSelf->__PVT__Black_33_io_o_g) 
                                                                          ^ (IData)(vlSelf->__PVT__PG_4_io_s)) 
                                                                         << 4U) 
                                                                        | ((((IData)(vlSelf->__PVT__PG_2_io_co) 
                                                                             | ((IData)(vlSelf->__PVT__Black_32_io_o_g) 
                                                                                & (IData)(vlSelf->__PVT__PG_2_io_s))) 
                                                                            ^ (IData)(vlSelf->__PVT__PG_3_io_s)) 
                                                                           << 3U)))))))))) 
                       | ((((IData)(vlSelf->__PVT__Black_32_io_o_g) 
                            ^ (IData)(vlSelf->__PVT__PG_2_io_s)) 
                           << 2U) | ((((IData)(vlSelf->__PVT__PG_1_io_s) 
                                       ^ (IData)(vlSelf->__PVT__PG_io_co)) 
                                      << 1U) | (IData)(vlSelf->__PVT__PG_io_s))));
}

VL_INLINE_OPT void VMAC_PPAdder___nba_sequent__TOP__MAC__DOT__ppa1__0(VMAC_PPAdder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_PPAdder___nba_sequent__TOP__MAC__DOT__ppa1__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP.reset))))) {
            VL_FWRITEF_NX(0x80000002U,"res(0) = %1#\n",0,
                          1,vlSelf->__PVT__PG_io_s);
        }
    }
}

VL_INLINE_OPT void VMAC_PPAdder___ico_sequent__TOP__MAC__DOT__ppa2__0(VMAC_PPAdder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_PPAdder___ico_sequent__TOP__MAC__DOT__ppa2__0\n"); );
    // Body
    vlSelf->__PVT__PG_io_s = (1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    ^ vlSymsp->TOP.io_addend));
    vlSelf->__PVT__PG_30_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x1eU));
    vlSelf->__PVT__PG_10_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                         & vlSymsp->TOP.io_addend) 
                                        >> 0xaU));
    vlSelf->__PVT__PG_20_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                         & vlSymsp->TOP.io_addend) 
                                        >> 0x14U));
    vlSelf->__PVT__PG_16_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x10U));
    vlSelf->__PVT__PG_5_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        & vlSymsp->TOP.io_addend) 
                                       >> 5U));
    vlSelf->__PVT__PG_7_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        & vlSymsp->TOP.io_addend) 
                                       >> 7U));
    vlSelf->__PVT__PG_4_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        & vlSymsp->TOP.io_addend) 
                                       >> 4U));
    vlSelf->__PVT__PG_7_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       ^ vlSymsp->TOP.io_addend) 
                                      >> 7U));
    vlSelf->__PVT__PG_4_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       ^ vlSymsp->TOP.io_addend) 
                                      >> 4U));
    vlSelf->__PVT__PG_2_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        & vlSymsp->TOP.io_addend) 
                                       >> 2U));
    vlSelf->__PVT__PG_26_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                         & vlSymsp->TOP.io_addend) 
                                        >> 0x1aU));
    vlSelf->__PVT__PG_22_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                         & vlSymsp->TOP.io_addend) 
                                        >> 0x16U));
    vlSelf->__PVT__PG_29_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x1dU));
    vlSelf->__PVT__PG_2_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       ^ vlSymsp->TOP.io_addend) 
                                      >> 2U));
    vlSelf->__PVT__PG_io_co = (1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     & vlSymsp->TOP.io_addend));
    vlSelf->__PVT__PG_1_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       ^ vlSymsp->TOP.io_addend) 
                                      >> 1U));
    vlSelf->__PVT__PG_10_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0xaU));
    vlSelf->__PVT__PG_12_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                         & vlSymsp->TOP.io_addend) 
                                        >> 0xcU));
    vlSelf->__PVT__PG_12_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0xcU));
    vlSelf->__PVT__PG_17_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                         & vlSymsp->TOP.io_addend) 
                                        >> 0x11U));
    vlSelf->__PVT__PG_15_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0xfU));
    vlSelf->__PVT__PG_9_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       ^ vlSymsp->TOP.io_addend) 
                                      >> 9U));
    vlSelf->__PVT__PG_8_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       ^ vlSymsp->TOP.io_addend) 
                                      >> 8U));
    vlSelf->__PVT__PG_5_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       ^ vlSymsp->TOP.io_addend) 
                                      >> 5U));
    vlSelf->__PVT__PG_11_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0xbU));
    vlSelf->__PVT__PG_28_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x1cU));
    vlSelf->__PVT__PG_14_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0xeU));
    vlSelf->__PVT__PG_3_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       ^ vlSymsp->TOP.io_addend) 
                                      >> 3U));
    vlSelf->__PVT__PG_26_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x1aU));
    vlSelf->__PVT__PG_25_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x19U));
    vlSelf->__PVT__PG_6_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       ^ vlSymsp->TOP.io_addend) 
                                      >> 6U));
    vlSelf->__PVT__PG_13_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0xdU));
    vlSelf->__PVT__PG_27_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x1bU));
    vlSelf->__PVT__PG_24_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x18U));
    vlSelf->__PVT__PG_22_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x16U));
    vlSelf->__PVT__PG_17_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x11U));
    vlSelf->__PVT__PG_20_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x14U));
    vlSelf->__PVT__PG_23_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x17U));
    vlSelf->__PVT__PG_21_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x15U));
    vlSelf->__PVT__PG_19_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x13U));
    vlSelf->__PVT__PG_18_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                        ^ vlSymsp->TOP.io_addend) 
                                       >> 0x12U));
    vlSelf->__PVT__Black_32_io_o_p = ((IData)(vlSelf->__PVT__PG_io_s) 
                                      & (IData)(vlSelf->__PVT__PG_1_io_s));
    vlSelf->__PVT__Black_32_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                              & vlSymsp->TOP.io_addend) 
                                             >> 1U) 
                                            | ((IData)(vlSelf->__PVT__PG_io_co) 
                                               & (IData)(vlSelf->__PVT__PG_1_io_s))));
    vlSelf->__PVT__Black_26_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                              & vlSymsp->TOP.io_addend) 
                                             >> 8U) 
                                            | ((IData)(vlSelf->__PVT__PG_7_io_co) 
                                               & (IData)(vlSelf->__PVT__PG_8_io_s))));
    vlSelf->__PVT__Black_26_io_o_p = ((IData)(vlSelf->__PVT__PG_7_io_s) 
                                      & (IData)(vlSelf->__PVT__PG_8_io_s));
    vlSelf->__PVT__Black_25_io_o_p = ((IData)(vlSelf->__PVT__PG_10_io_s) 
                                      & (IData)(vlSelf->__PVT__PG_11_io_s));
    vlSelf->__PVT__Black_31_io_o_p = ((IData)(vlSelf->__PVT__PG_2_io_s) 
                                      & (IData)(vlSelf->__PVT__PG_3_io_s));
    vlSelf->__PVT__Black_29_io_o_p = ((IData)(vlSelf->__PVT__PG_5_io_s) 
                                      & (IData)(vlSelf->__PVT__PG_6_io_s));
    vlSelf->__PVT__Black_21_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                              & vlSymsp->TOP.io_addend) 
                                             >> 0xdU) 
                                            | ((IData)(vlSelf->__PVT__PG_12_io_co) 
                                               & (IData)(vlSelf->__PVT__PG_13_io_s))));
    vlSelf->__PVT__Black_21_io_o_p = ((IData)(vlSelf->__PVT__PG_12_io_s) 
                                      & (IData)(vlSelf->__PVT__PG_13_io_s));
    vlSelf->__PVT__Black_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                           & vlSymsp->TOP.io_addend) 
                                          >> 0x1bU) 
                                         | ((IData)(vlSelf->__PVT__PG_26_io_co) 
                                            & (IData)(vlSelf->__PVT__PG_27_io_s))));
    vlSelf->__PVT__Black_io_o_p = ((IData)(vlSelf->__PVT__PG_26_io_s) 
                                   & (IData)(vlSelf->__PVT__PG_27_io_s));
    vlSelf->__PVT__Black_4_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                             & vlSymsp->TOP.io_addend) 
                                            >> 0x17U) 
                                           | ((IData)(vlSelf->__PVT__PG_22_io_co) 
                                              & (IData)(vlSelf->__PVT__PG_23_io_s))));
    vlSelf->__PVT__Black_4_io_o_p = ((IData)(vlSelf->__PVT__PG_22_io_s) 
                                     & (IData)(vlSelf->__PVT__PG_23_io_s));
    vlSelf->__PVT__Black_7_io_o_p = ((IData)(vlSelf->__PVT__PG_20_io_s) 
                                     & (IData)(vlSelf->__PVT__PG_21_io_s));
    vlSelf->__PVT__Black_8_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                             & vlSymsp->TOP.io_addend) 
                                            >> 0x12U) 
                                           | ((IData)(vlSelf->__PVT__PG_17_io_co) 
                                              & (IData)(vlSelf->__PVT__PG_18_io_s))));
    vlSelf->__PVT__Black_8_io_o_p = ((IData)(vlSelf->__PVT__PG_17_io_s) 
                                     & (IData)(vlSelf->__PVT__PG_18_io_s));
    vlSelf->__PVT__Black_27_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                              & vlSymsp->TOP.io_addend) 
                                             >> 9U) 
                                            | ((IData)(vlSelf->__PVT__Black_26_io_o_g) 
                                               & (IData)(vlSelf->__PVT__PG_9_io_s))));
    vlSelf->__PVT__Black_27_io_o_p = ((IData)(vlSelf->__PVT__Black_26_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_9_io_s));
    vlSelf->__PVT__Black_33_io_o_p = ((IData)(vlSelf->__PVT__Black_32_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_31_io_o_p));
    vlSelf->__PVT__Black_33_io_o_g = (1U & ((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                               & vlSymsp->TOP.io_addend) 
                                              >> 3U) 
                                             | ((IData)(vlSelf->__PVT__PG_2_io_co) 
                                                & (IData)(vlSelf->__PVT__PG_3_io_s))) 
                                            | ((IData)(vlSelf->__PVT__Black_32_io_o_g) 
                                               & (IData)(vlSelf->__PVT__Black_31_io_o_p))));
    vlSelf->__PVT__Black_30_io_o_p = ((IData)(vlSelf->__PVT__PG_4_io_s) 
                                      & (IData)(vlSelf->__PVT__Black_29_io_o_p));
    vlSelf->__PVT__Black_22_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                              & vlSymsp->TOP.io_addend) 
                                             >> 0xeU) 
                                            | ((IData)(vlSelf->__PVT__Black_21_io_o_g) 
                                               & (IData)(vlSelf->__PVT__PG_14_io_s))));
    vlSelf->__PVT__Black_22_io_o_p = ((IData)(vlSelf->__PVT__Black_21_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_14_io_s));
    vlSelf->__PVT__Black_1_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                             & vlSymsp->TOP.io_addend) 
                                            >> 0x1cU) 
                                           | ((IData)(vlSelf->__PVT__Black_io_o_g) 
                                              & (IData)(vlSelf->__PVT__PG_28_io_s))));
    vlSelf->__PVT__Black_1_io_o_p = ((IData)(vlSelf->__PVT__Black_io_o_p) 
                                     & (IData)(vlSelf->__PVT__PG_28_io_s));
    vlSelf->__PVT__Black_5_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                             & vlSymsp->TOP.io_addend) 
                                            >> 0x18U) 
                                           | ((IData)(vlSelf->__PVT__Black_4_io_o_g) 
                                              & (IData)(vlSelf->__PVT__PG_24_io_s))));
    vlSelf->__PVT__Black_5_io_o_p = ((IData)(vlSelf->__PVT__Black_4_io_o_p) 
                                     & (IData)(vlSelf->__PVT__PG_24_io_s));
    vlSelf->__PVT__Black_9_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                             & vlSymsp->TOP.io_addend) 
                                            >> 0x13U) 
                                           | ((IData)(vlSelf->__PVT__Black_8_io_o_g) 
                                              & (IData)(vlSelf->__PVT__PG_19_io_s))));
    vlSelf->__PVT__Black_9_io_o_p = ((IData)(vlSelf->__PVT__Black_8_io_o_p) 
                                     & (IData)(vlSelf->__PVT__PG_19_io_s));
    vlSelf->__PVT__Black_28_io_o_p = ((IData)(vlSelf->__PVT__Black_27_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_25_io_o_p));
    vlSelf->__PVT__Black_59_io_o_g = ((IData)(vlSelf->__PVT__PG_4_io_co) 
                                      | ((IData)(vlSelf->__PVT__Black_33_io_o_g) 
                                         & (IData)(vlSelf->__PVT__PG_4_io_s)));
    vlSelf->__PVT__Black_34_io_o_p = ((IData)(vlSelf->__PVT__Black_33_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_30_io_o_p));
    vlSelf->__PVT__Black_34_io_o_g = (1U & (((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                                & vlSymsp->TOP.io_addend) 
                                               >> 6U) 
                                              | ((IData)(vlSelf->__PVT__PG_5_io_co) 
                                                 & (IData)(vlSelf->__PVT__PG_6_io_s))) 
                                             | ((IData)(vlSelf->__PVT__PG_4_io_co) 
                                                & (IData)(vlSelf->__PVT__Black_29_io_o_p))) 
                                            | ((IData)(vlSelf->__PVT__Black_33_io_o_g) 
                                               & (IData)(vlSelf->__PVT__Black_30_io_o_p))));
    vlSelf->__PVT__Black_23_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                              & vlSymsp->TOP.io_addend) 
                                             >> 0xfU) 
                                            | ((IData)(vlSelf->__PVT__Black_22_io_o_g) 
                                               & (IData)(vlSelf->__PVT__PG_15_io_s))));
    vlSelf->__PVT__Black_23_io_o_p = ((IData)(vlSelf->__PVT__Black_22_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_15_io_s));
    vlSelf->__PVT__Black_2_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                             & vlSymsp->TOP.io_addend) 
                                            >> 0x1dU) 
                                           | ((IData)(vlSelf->__PVT__Black_1_io_o_g) 
                                              & (IData)(vlSelf->__PVT__PG_29_io_s))));
    vlSelf->__PVT__Black_2_io_o_p = ((IData)(vlSelf->__PVT__Black_1_io_o_p) 
                                     & (IData)(vlSelf->__PVT__PG_29_io_s));
    vlSelf->__PVT__Black_6_io_o_p = ((IData)(vlSelf->__PVT__Black_5_io_o_p) 
                                     & (IData)(vlSelf->__PVT__PG_25_io_s));
    vlSelf->__PVT__Black_10_io_o_g = (1U & ((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                               & vlSymsp->TOP.io_addend) 
                                              >> 0x15U) 
                                             | ((IData)(vlSelf->__PVT__PG_20_io_co) 
                                                & (IData)(vlSelf->__PVT__PG_21_io_s))) 
                                            | ((IData)(vlSelf->__PVT__Black_9_io_o_g) 
                                               & (IData)(vlSelf->__PVT__Black_7_io_o_p))));
    vlSelf->__PVT__Black_20_io_o_p = ((IData)(vlSelf->__PVT__Black_9_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_20_io_s));
    vlSelf->__PVT__Black_10_io_o_p = ((IData)(vlSelf->__PVT__Black_9_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_7_io_o_p));
    vlSelf->__PVT__Black_35_io_o_p = ((IData)(vlSelf->__PVT__Black_34_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_28_io_o_p));
    vlSelf->__PVT__Black_55_io_o_g = ((IData)(vlSelf->__PVT__Black_27_io_o_g) 
                                      | ((IData)(vlSelf->__PVT__Black_34_io_o_g) 
                                         & (IData)(vlSelf->__PVT__Black_27_io_o_p)));
    vlSelf->__PVT__Black_35_io_o_g = (1U & (((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                                & vlSymsp->TOP.io_addend) 
                                               >> 0xbU) 
                                              | ((IData)(vlSelf->__PVT__PG_10_io_co) 
                                                 & (IData)(vlSelf->__PVT__PG_11_io_s))) 
                                             | ((IData)(vlSelf->__PVT__Black_27_io_o_g) 
                                                & (IData)(vlSelf->__PVT__Black_25_io_o_p))) 
                                            | ((IData)(vlSelf->__PVT__Black_34_io_o_g) 
                                               & (IData)(vlSelf->__PVT__Black_28_io_o_p))));
    vlSelf->__PVT__Black_24_io_o_p = ((IData)(vlSelf->__PVT__Black_23_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_16_io_s));
    vlSelf->__PVT__Black_3_io_o_p = ((IData)(vlSelf->__PVT__Black_2_io_o_p) 
                                     & (IData)(vlSelf->__PVT__PG_30_io_s));
    vlSelf->__PVT__Black_11_io_o_g = (1U & ((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                               & vlSymsp->TOP.io_addend) 
                                              >> 0x19U) 
                                             | ((IData)(vlSelf->__PVT__Black_5_io_o_g) 
                                                & (IData)(vlSelf->__PVT__PG_25_io_s))) 
                                            | ((IData)(vlSelf->__PVT__Black_10_io_o_g) 
                                               & (IData)(vlSelf->__PVT__Black_6_io_o_p))));
    vlSelf->__PVT__Black_17_io_o_p = ((IData)(vlSelf->__PVT__Black_10_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_5_io_o_p));
    vlSelf->__PVT__Black_18_io_o_p = ((IData)(vlSelf->__PVT__Black_10_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_4_io_o_p));
    vlSelf->__PVT__Black_19_io_o_p = ((IData)(vlSelf->__PVT__Black_10_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_22_io_s));
    vlSelf->__PVT__Black_11_io_o_p = ((IData)(vlSelf->__PVT__Black_10_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_6_io_o_p));
    vlSelf->__PVT__Black_36_io_o_p = ((IData)(vlSelf->__PVT__Black_35_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_24_io_o_p));
    vlSelf->__PVT__Black_36_io_o_g = (1U & ((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                               & vlSymsp->TOP.io_addend) 
                                              >> 0x10U) 
                                             | ((IData)(vlSelf->__PVT__Black_23_io_o_g) 
                                                & (IData)(vlSelf->__PVT__PG_16_io_s))) 
                                            | ((IData)(vlSelf->__PVT__Black_35_io_o_g) 
                                               & (IData)(vlSelf->__PVT__Black_24_io_o_p))));
    vlSelf->__PVT__Black_12_io_o_p = ((IData)(vlSelf->__PVT__Black_11_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_3_io_o_p));
    vlSelf->__PVT__Black_13_io_o_p = ((IData)(vlSelf->__PVT__Black_11_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_2_io_o_p));
    vlSelf->__PVT__Black_14_io_o_p = ((IData)(vlSelf->__PVT__Black_11_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_1_io_o_p));
    vlSelf->__PVT__Black_15_io_o_p = ((IData)(vlSelf->__PVT__Black_11_io_o_p) 
                                      & (IData)(vlSelf->__PVT__Black_io_o_p));
    vlSelf->__PVT__Black_16_io_o_p = ((IData)(vlSelf->__PVT__Black_11_io_o_p) 
                                      & (IData)(vlSelf->__PVT__PG_26_io_s));
    vlSelf->__PVT___T_112 = (((((((IData)(vlSelf->__PVT__Black_2_io_o_g) 
                                  | ((IData)(vlSelf->__PVT__Black_11_io_o_g) 
                                     & (IData)(vlSelf->__PVT__Black_2_io_o_p))) 
                                 | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSelf->__PVT__Black_13_io_o_p))) 
                                ^ (IData)(vlSelf->__PVT__PG_30_io_s)) 
                               << 0x12U) | ((((((IData)(vlSelf->__PVT__Black_1_io_o_g) 
                                                | ((IData)(vlSelf->__PVT__Black_11_io_o_g) 
                                                   & (IData)(vlSelf->__PVT__Black_1_io_o_p))) 
                                               | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                  & (IData)(vlSelf->__PVT__Black_14_io_o_p))) 
                                              ^ (IData)(vlSelf->__PVT__PG_29_io_s)) 
                                             << 0x11U) 
                                            | ((((((IData)(vlSelf->__PVT__Black_io_o_g) 
                                                   | ((IData)(vlSelf->__PVT__Black_11_io_o_g) 
                                                      & (IData)(vlSelf->__PVT__Black_io_o_p))) 
                                                  | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                     & (IData)(vlSelf->__PVT__Black_15_io_o_p))) 
                                                 ^ (IData)(vlSelf->__PVT__PG_28_io_s)) 
                                                << 0x10U) 
                                               | ((((((IData)(vlSelf->__PVT__PG_26_io_co) 
                                                      | ((IData)(vlSelf->__PVT__Black_11_io_o_g) 
                                                         & (IData)(vlSelf->__PVT__PG_26_io_s))) 
                                                     | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                        & (IData)(vlSelf->__PVT__Black_16_io_o_p))) 
                                                    ^ (IData)(vlSelf->__PVT__PG_27_io_s)) 
                                                   << 0xfU) 
                                                  | (((((IData)(vlSelf->__PVT__Black_11_io_o_g) 
                                                        | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                           & (IData)(vlSelf->__PVT__Black_11_io_o_p))) 
                                                       ^ (IData)(vlSelf->__PVT__PG_26_io_s)) 
                                                      << 0xeU) 
                                                     | ((((((IData)(vlSelf->__PVT__Black_5_io_o_g) 
                                                            | ((IData)(vlSelf->__PVT__Black_10_io_o_g) 
                                                               & (IData)(vlSelf->__PVT__Black_5_io_o_p))) 
                                                           | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                              & (IData)(vlSelf->__PVT__Black_17_io_o_p))) 
                                                          ^ (IData)(vlSelf->__PVT__PG_25_io_s)) 
                                                         << 0xdU) 
                                                        | ((((((IData)(vlSelf->__PVT__Black_4_io_o_g) 
                                                               | ((IData)(vlSelf->__PVT__Black_10_io_o_g) 
                                                                  & (IData)(vlSelf->__PVT__Black_4_io_o_p))) 
                                                              | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                                 & (IData)(vlSelf->__PVT__Black_18_io_o_p))) 
                                                             ^ (IData)(vlSelf->__PVT__PG_24_io_s)) 
                                                            << 0xcU) 
                                                           | ((((((IData)(vlSelf->__PVT__PG_22_io_co) 
                                                                  | ((IData)(vlSelf->__PVT__Black_10_io_o_g) 
                                                                     & (IData)(vlSelf->__PVT__PG_22_io_s))) 
                                                                 | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                                    & (IData)(vlSelf->__PVT__Black_19_io_o_p))) 
                                                                ^ (IData)(vlSelf->__PVT__PG_23_io_s)) 
                                                               << 0xbU) 
                                                              | (((((IData)(vlSelf->__PVT__Black_10_io_o_g) 
                                                                    | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                                       & (IData)(vlSelf->__PVT__Black_10_io_o_p))) 
                                                                   ^ (IData)(vlSelf->__PVT__PG_22_io_s)) 
                                                                  << 0xaU) 
                                                                 | (((((IData)(vlSelf->__PVT__PG_20_io_co) 
                                                                       | ((IData)(vlSelf->__PVT__Black_9_io_o_g) 
                                                                          & (IData)(vlSelf->__PVT__PG_20_io_s))) 
                                                                      | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                                         & (IData)(vlSelf->__PVT__Black_20_io_o_p))) 
                                                                     ^ (IData)(vlSelf->__PVT__PG_21_io_s)) 
                                                                    << 9U)))))))))) 
                             | (((((IData)(vlSelf->__PVT__Black_9_io_o_g) 
                                   | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                      & (IData)(vlSelf->__PVT__Black_9_io_o_p))) 
                                  ^ (IData)(vlSelf->__PVT__PG_20_io_s)) 
                                 << 8U) | (((((IData)(vlSelf->__PVT__Black_8_io_o_g) 
                                              | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                 & (IData)(vlSelf->__PVT__Black_8_io_o_p))) 
                                             ^ (IData)(vlSelf->__PVT__PG_19_io_s)) 
                                            << 7U) 
                                           | (((((IData)(vlSelf->__PVT__PG_17_io_co) 
                                                 | ((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                    & (IData)(vlSelf->__PVT__PG_17_io_s))) 
                                                ^ (IData)(vlSelf->__PVT__PG_18_io_s)) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->__PVT__Black_36_io_o_g) 
                                                   ^ (IData)(vlSelf->__PVT__PG_17_io_s)) 
                                                  << 5U) 
                                                 | (((((IData)(vlSelf->__PVT__Black_23_io_o_g) 
                                                       | ((IData)(vlSelf->__PVT__Black_35_io_o_g) 
                                                          & (IData)(vlSelf->__PVT__Black_23_io_o_p))) 
                                                      ^ (IData)(vlSelf->__PVT__PG_16_io_s)) 
                                                     << 4U) 
                                                    | (((((IData)(vlSelf->__PVT__Black_22_io_o_g) 
                                                          | ((IData)(vlSelf->__PVT__Black_35_io_o_g) 
                                                             & (IData)(vlSelf->__PVT__Black_22_io_o_p))) 
                                                         ^ (IData)(vlSelf->__PVT__PG_15_io_s)) 
                                                        << 3U) 
                                                       | (((((IData)(vlSelf->__PVT__Black_21_io_o_g) 
                                                             | ((IData)(vlSelf->__PVT__Black_35_io_o_g) 
                                                                & (IData)(vlSelf->__PVT__Black_21_io_o_p))) 
                                                            ^ (IData)(vlSelf->__PVT__PG_14_io_s)) 
                                                           << 2U) 
                                                          | (((((IData)(vlSelf->__PVT__PG_12_io_co) 
                                                                | ((IData)(vlSelf->__PVT__Black_35_io_o_g) 
                                                                   & (IData)(vlSelf->__PVT__PG_12_io_s))) 
                                                               ^ (IData)(vlSelf->__PVT__PG_13_io_s)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelf->__PVT__Black_35_io_o_g) 
                                                                ^ (IData)(vlSelf->__PVT__PG_12_io_s)))))))))));
}
