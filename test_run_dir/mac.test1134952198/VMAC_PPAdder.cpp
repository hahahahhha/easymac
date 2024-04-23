// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC.h for the primary calling header

#include "VMAC_PPAdder.h"
#include "VMAC__Syms.h"

//==========

VL_CTOR_IMP(VMAC_PPAdder) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VMAC_PPAdder::__Vconfigure(VMAC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMAC_PPAdder::~VMAC_PPAdder() {
}

VL_INLINE_OPT void VMAC_PPAdder::_sequent__TOP__MAC__DOT__ppa1__2(VMAC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_PPAdder::_sequent__TOP__MAC__DOT__ppa1__2\n"); );
    VMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"res(0) = %1#\n",
                       1,this->__PVT__PG_io_s);
        }
    }
}

VL_INLINE_OPT void VMAC_PPAdder::_combo__TOP__MAC__DOT__ppa1__3(VMAC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_PPAdder::_combo__TOP__MAC__DOT__ppa1__3\n"); );
    VMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__PG_io_s = (1U & (vlTOPp->MAC__DOT__wt__DOT___T_285 
                                  ^ vlTOPp->MAC__DOT__wt__DOT___T_315));
    this->__PVT__PG_30_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x1eU));
    this->__PVT__PG_10_io_co = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                       & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                      >> 0xaU));
    this->__PVT__PG_20_io_co = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                       & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                      >> 0x14U));
    this->__PVT__PG_16_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x10U));
    this->__PVT__PG_29_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x1dU));
    this->__PVT__PG_26_io_co = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                       & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                      >> 0x1aU));
    this->__PVT__PG_22_io_co = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                       & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                      >> 0x16U));
    this->__PVT__PG_5_io_co = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 5U));
    this->__PVT__PG_4_io_co = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 4U));
    this->__PVT__PG_15_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0xfU));
    this->__PVT__PG_28_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x1cU));
    this->__PVT__PG_7_io_co = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 7U));
    this->__PVT__PG_12_io_co = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                       & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                      >> 0xcU));
    this->__PVT__PG_17_io_co = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                       & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                      >> 0x11U));
    this->__PVT__PG_4_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                     ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                    >> 4U));
    this->__PVT__PG_2_io_co = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 2U));
    this->__PVT__PG_10_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0xaU));
    this->__PVT__PG_14_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0xeU));
    this->__PVT__PG_9_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                     ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                    >> 9U));
    this->__PVT__PG_11_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0xbU));
    this->__PVT__PG_25_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x19U));
    this->__PVT__PG_26_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x1aU));
    this->__PVT__PG_12_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0xcU));
    this->__PVT__PG_7_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                     ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                    >> 7U));
    this->__PVT__PG_27_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x1bU));
    this->__PVT__PG_2_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                     ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                    >> 2U));
    this->__PVT__PG_io_co = (1U & (vlTOPp->MAC__DOT__wt__DOT___T_285 
                                   & vlTOPp->MAC__DOT__wt__DOT___T_315));
    this->__PVT__PG_1_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                     ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                    >> 1U));
    this->__PVT__PG_13_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0xdU));
    this->__PVT__PG_8_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                     ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                    >> 8U));
    this->__PVT__PG_5_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                     ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                    >> 5U));
    this->__PVT__PG_24_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x18U));
    this->__PVT__PG_3_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                     ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                    >> 3U));
    this->__PVT__PG_6_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                     ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                    >> 6U));
    this->__PVT__PG_20_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x14U));
    this->__PVT__PG_21_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x15U));
    this->__PVT__PG_19_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x13U));
    this->__PVT__PG_22_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x16U));
    this->__PVT__PG_23_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x17U));
    this->__PVT__PG_17_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x11U));
    this->__PVT__PG_18_io_s = (1U & ((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                      ^ vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                     >> 0x12U));
    this->__PVT__Black_25_io_o_p = ((IData)(this->__PVT__PG_11_io_s) 
                                    & (IData)(this->__PVT__PG_10_io_s));
    this->__PVT__Black_io_o_g = (1U & (((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                         & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                        >> 0x1bU) | 
                                       ((IData)(this->__PVT__PG_26_io_co) 
                                        & (IData)(this->__PVT__PG_27_io_s))));
    this->__PVT__Black_io_o_p = ((IData)(this->__PVT__PG_27_io_s) 
                                 & (IData)(this->__PVT__PG_26_io_s));
    this->__PVT__Black_32_io_o_p = ((IData)(this->__PVT__PG_1_io_s) 
                                    & (IData)(this->__PVT__PG_io_s));
    this->__PVT__Black_32_io_o_g = (1U & (((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                            & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                           >> 1U) | 
                                          ((IData)(this->__PVT__PG_io_co) 
                                           & (IData)(this->__PVT__PG_1_io_s))));
    this->__PVT__Black_21_io_o_g = (1U & (((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                            & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                           >> 0xdU) 
                                          | ((IData)(this->__PVT__PG_12_io_co) 
                                             & (IData)(this->__PVT__PG_13_io_s))));
    this->__PVT__Black_21_io_o_p = ((IData)(this->__PVT__PG_13_io_s) 
                                    & (IData)(this->__PVT__PG_12_io_s));
    this->__PVT__Black_26_io_o_g = (1U & (((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                            & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                           >> 8U) | 
                                          ((IData)(this->__PVT__PG_7_io_co) 
                                           & (IData)(this->__PVT__PG_8_io_s))));
    this->__PVT__Black_26_io_o_p = ((IData)(this->__PVT__PG_8_io_s) 
                                    & (IData)(this->__PVT__PG_7_io_s));
    this->__PVT__Black_31_io_o_p = ((IData)(this->__PVT__PG_3_io_s) 
                                    & (IData)(this->__PVT__PG_2_io_s));
    this->__PVT__Black_29_io_o_p = ((IData)(this->__PVT__PG_6_io_s) 
                                    & (IData)(this->__PVT__PG_5_io_s));
    this->__PVT__Black_7_io_o_p = ((IData)(this->__PVT__PG_21_io_s) 
                                   & (IData)(this->__PVT__PG_20_io_s));
    this->__PVT__Black_4_io_o_g = (1U & (((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                           & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                          >> 0x17U) 
                                         | ((IData)(this->__PVT__PG_22_io_co) 
                                            & (IData)(this->__PVT__PG_23_io_s))));
    this->__PVT__Black_4_io_o_p = ((IData)(this->__PVT__PG_23_io_s) 
                                   & (IData)(this->__PVT__PG_22_io_s));
    this->__PVT__Black_8_io_o_g = (1U & (((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                           & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                          >> 0x12U) 
                                         | ((IData)(this->__PVT__PG_17_io_co) 
                                            & (IData)(this->__PVT__PG_18_io_s))));
    this->__PVT__Black_8_io_o_p = ((IData)(this->__PVT__PG_18_io_s) 
                                   & (IData)(this->__PVT__PG_17_io_s));
    this->__PVT__Black_1_io_o_g = (1U & (((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                           & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                          >> 0x1cU) 
                                         | ((IData)(this->__PVT__Black_io_o_g) 
                                            & (IData)(this->__PVT__PG_28_io_s))));
    this->__PVT__Black_1_io_o_p = ((IData)(this->__PVT__PG_28_io_s) 
                                   & (IData)(this->__PVT__Black_io_o_p));
    this->__PVT__Black_22_io_o_g = (1U & (((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                            & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                           >> 0xeU) 
                                          | ((IData)(this->__PVT__Black_21_io_o_g) 
                                             & (IData)(this->__PVT__PG_14_io_s))));
    this->__PVT__Black_22_io_o_p = ((IData)(this->__PVT__PG_14_io_s) 
                                    & (IData)(this->__PVT__Black_21_io_o_p));
    this->__PVT__Black_27_io_o_g = (1U & (((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                            & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                           >> 9U) | 
                                          ((IData)(this->__PVT__Black_26_io_o_g) 
                                           & (IData)(this->__PVT__PG_9_io_s))));
    this->__PVT__Black_27_io_o_p = ((IData)(this->__PVT__PG_9_io_s) 
                                    & (IData)(this->__PVT__Black_26_io_o_p));
    this->__PVT__Black_33_io_o_p = ((IData)(this->__PVT__Black_31_io_o_p) 
                                    & (IData)(this->__PVT__Black_32_io_o_p));
    this->__PVT__Black_33_io_o_g = (1U & ((((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                             & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                            >> 3U) 
                                           | ((IData)(this->__PVT__PG_2_io_co) 
                                              & (IData)(this->__PVT__PG_3_io_s))) 
                                          | ((IData)(this->__PVT__Black_32_io_o_g) 
                                             & (IData)(this->__PVT__Black_31_io_o_p))));
    this->__PVT__Black_30_io_o_p = ((IData)(this->__PVT__Black_29_io_o_p) 
                                    & (IData)(this->__PVT__PG_4_io_s));
    this->__PVT__Black_5_io_o_g = (1U & (((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                           & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                          >> 0x18U) 
                                         | ((IData)(this->__PVT__Black_4_io_o_g) 
                                            & (IData)(this->__PVT__PG_24_io_s))));
    this->__PVT__Black_5_io_o_p = ((IData)(this->__PVT__PG_24_io_s) 
                                   & (IData)(this->__PVT__Black_4_io_o_p));
    this->__PVT__Black_9_io_o_g = (1U & (((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                           & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                          >> 0x13U) 
                                         | ((IData)(this->__PVT__Black_8_io_o_g) 
                                            & (IData)(this->__PVT__PG_19_io_s))));
    this->__PVT__Black_9_io_o_p = ((IData)(this->__PVT__PG_19_io_s) 
                                   & (IData)(this->__PVT__Black_8_io_o_p));
    this->__PVT__Black_2_io_o_g = (1U & (((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                           & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                          >> 0x1dU) 
                                         | ((IData)(this->__PVT__Black_1_io_o_g) 
                                            & (IData)(this->__PVT__PG_29_io_s))));
    this->__PVT__Black_2_io_o_p = ((IData)(this->__PVT__PG_29_io_s) 
                                   & (IData)(this->__PVT__Black_1_io_o_p));
    this->__PVT__Black_23_io_o_g = (1U & (((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                            & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                           >> 0xfU) 
                                          | ((IData)(this->__PVT__Black_22_io_o_g) 
                                             & (IData)(this->__PVT__PG_15_io_s))));
    this->__PVT__Black_23_io_o_p = ((IData)(this->__PVT__PG_15_io_s) 
                                    & (IData)(this->__PVT__Black_22_io_o_p));
    this->__PVT__Black_28_io_o_p = ((IData)(this->__PVT__Black_25_io_o_p) 
                                    & (IData)(this->__PVT__Black_27_io_o_p));
    this->__PVT__Black_59_io_o_g = ((IData)(this->__PVT__PG_4_io_co) 
                                    | ((IData)(this->__PVT__Black_33_io_o_g) 
                                       & (IData)(this->__PVT__PG_4_io_s)));
    this->__PVT__Black_34_io_o_p = ((IData)(this->__PVT__Black_30_io_o_p) 
                                    & (IData)(this->__PVT__Black_33_io_o_p));
    this->__PVT__Black_34_io_o_g = (1U & (((((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                              & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                             >> 6U) 
                                            | ((IData)(this->__PVT__PG_5_io_co) 
                                               & (IData)(this->__PVT__PG_6_io_s))) 
                                           | ((IData)(this->__PVT__PG_4_io_co) 
                                              & (IData)(this->__PVT__Black_29_io_o_p))) 
                                          | ((IData)(this->__PVT__Black_33_io_o_g) 
                                             & (IData)(this->__PVT__Black_30_io_o_p))));
    this->__PVT__Black_6_io_o_p = ((IData)(this->__PVT__PG_25_io_s) 
                                   & (IData)(this->__PVT__Black_5_io_o_p));
    this->__PVT__Black_10_io_o_g = (1U & ((((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                             & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                            >> 0x15U) 
                                           | ((IData)(this->__PVT__PG_20_io_co) 
                                              & (IData)(this->__PVT__PG_21_io_s))) 
                                          | ((IData)(this->__PVT__Black_9_io_o_g) 
                                             & (IData)(this->__PVT__Black_7_io_o_p))));
    this->__PVT__Black_20_io_o_p = ((IData)(this->__PVT__PG_20_io_s) 
                                    & (IData)(this->__PVT__Black_9_io_o_p));
    this->__PVT__Black_10_io_o_p = ((IData)(this->__PVT__Black_7_io_o_p) 
                                    & (IData)(this->__PVT__Black_9_io_o_p));
    this->__PVT__Black_3_io_o_p = ((IData)(this->__PVT__PG_30_io_s) 
                                   & (IData)(this->__PVT__Black_2_io_o_p));
    this->__PVT__Black_24_io_o_p = ((IData)(this->__PVT__PG_16_io_s) 
                                    & (IData)(this->__PVT__Black_23_io_o_p));
    this->__PVT__Black_35_io_o_p = ((IData)(this->__PVT__Black_28_io_o_p) 
                                    & (IData)(this->__PVT__Black_34_io_o_p));
    this->__PVT__Black_55_io_o_g = ((IData)(this->__PVT__Black_27_io_o_g) 
                                    | ((IData)(this->__PVT__Black_34_io_o_g) 
                                       & (IData)(this->__PVT__Black_27_io_o_p)));
    this->__PVT__Black_35_io_o_g = (1U & (((((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                              & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                             >> 0xbU) 
                                            | ((IData)(this->__PVT__PG_10_io_co) 
                                               & (IData)(this->__PVT__PG_11_io_s))) 
                                           | ((IData)(this->__PVT__Black_27_io_o_g) 
                                              & (IData)(this->__PVT__Black_25_io_o_p))) 
                                          | ((IData)(this->__PVT__Black_34_io_o_g) 
                                             & (IData)(this->__PVT__Black_28_io_o_p))));
    this->__PVT__Black_11_io_o_g = (1U & ((((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                             & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                            >> 0x19U) 
                                           | ((IData)(this->__PVT__Black_5_io_o_g) 
                                              & (IData)(this->__PVT__PG_25_io_s))) 
                                          | ((IData)(this->__PVT__Black_10_io_o_g) 
                                             & (IData)(this->__PVT__Black_6_io_o_p))));
    this->__PVT__Black_17_io_o_p = ((IData)(this->__PVT__Black_5_io_o_p) 
                                    & (IData)(this->__PVT__Black_10_io_o_p));
    this->__PVT__Black_18_io_o_p = ((IData)(this->__PVT__Black_4_io_o_p) 
                                    & (IData)(this->__PVT__Black_10_io_o_p));
    this->__PVT__Black_19_io_o_p = ((IData)(this->__PVT__PG_22_io_s) 
                                    & (IData)(this->__PVT__Black_10_io_o_p));
    this->__PVT__Black_11_io_o_p = ((IData)(this->__PVT__Black_6_io_o_p) 
                                    & (IData)(this->__PVT__Black_10_io_o_p));
    this->__PVT__Black_36_io_o_p = ((IData)(this->__PVT__Black_24_io_o_p) 
                                    & (IData)(this->__PVT__Black_35_io_o_p));
    this->__PVT__Black_36_io_o_g = (1U & ((((vlTOPp->MAC__DOT__wt__DOT___T_285 
                                             & vlTOPp->MAC__DOT__wt__DOT___T_315) 
                                            >> 0x10U) 
                                           | ((IData)(this->__PVT__Black_23_io_o_g) 
                                              & (IData)(this->__PVT__PG_16_io_s))) 
                                          | ((IData)(this->__PVT__Black_35_io_o_g) 
                                             & (IData)(this->__PVT__Black_24_io_o_p))));
    this->__PVT__Black_12_io_o_p = ((IData)(this->__PVT__Black_3_io_o_p) 
                                    & (IData)(this->__PVT__Black_11_io_o_p));
    this->__PVT__Black_13_io_o_p = ((IData)(this->__PVT__Black_2_io_o_p) 
                                    & (IData)(this->__PVT__Black_11_io_o_p));
    this->__PVT__Black_14_io_o_p = ((IData)(this->__PVT__Black_1_io_o_p) 
                                    & (IData)(this->__PVT__Black_11_io_o_p));
    this->__PVT__Black_15_io_o_p = ((IData)(this->__PVT__Black_io_o_p) 
                                    & (IData)(this->__PVT__Black_11_io_o_p));
    this->__PVT__Black_16_io_o_p = ((IData)(this->__PVT__PG_26_io_s) 
                                    & (IData)(this->__PVT__Black_11_io_o_p));
    this->__PVT___T_112 = (((((IData)(this->__PVT__PG_30_io_s) 
                              ^ (((IData)(this->__PVT__Black_2_io_o_g) 
                                  | ((IData)(this->__PVT__Black_11_io_o_g) 
                                     & (IData)(this->__PVT__Black_2_io_o_p))) 
                                 | ((IData)(this->__PVT__Black_36_io_o_g) 
                                    & (IData)(this->__PVT__Black_13_io_o_p)))) 
                             << 0x12U) | ((((IData)(this->__PVT__PG_29_io_s) 
                                            ^ (((IData)(this->__PVT__Black_1_io_o_g) 
                                                | ((IData)(this->__PVT__Black_11_io_o_g) 
                                                   & (IData)(this->__PVT__Black_1_io_o_p))) 
                                               | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                  & (IData)(this->__PVT__Black_14_io_o_p)))) 
                                           << 0x11U) 
                                          | ((((IData)(this->__PVT__PG_28_io_s) 
                                               ^ (((IData)(this->__PVT__Black_io_o_g) 
                                                   | ((IData)(this->__PVT__Black_11_io_o_g) 
                                                      & (IData)(this->__PVT__Black_io_o_p))) 
                                                  | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                     & (IData)(this->__PVT__Black_15_io_o_p)))) 
                                              << 0x10U) 
                                             | ((((IData)(this->__PVT__PG_27_io_s) 
                                                  ^ 
                                                  (((IData)(this->__PVT__PG_26_io_co) 
                                                    | ((IData)(this->__PVT__Black_11_io_o_g) 
                                                       & (IData)(this->__PVT__PG_26_io_s))) 
                                                   | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                      & (IData)(this->__PVT__Black_16_io_o_p)))) 
                                                 << 0xfU) 
                                                | ((((IData)(this->__PVT__PG_26_io_s) 
                                                     ^ 
                                                     ((IData)(this->__PVT__Black_11_io_o_g) 
                                                      | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                         & (IData)(this->__PVT__Black_11_io_o_p)))) 
                                                    << 0xeU) 
                                                   | ((((IData)(this->__PVT__PG_25_io_s) 
                                                        ^ 
                                                        (((IData)(this->__PVT__Black_5_io_o_g) 
                                                          | ((IData)(this->__PVT__Black_10_io_o_g) 
                                                             & (IData)(this->__PVT__Black_5_io_o_p))) 
                                                         | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                            & (IData)(this->__PVT__Black_17_io_o_p)))) 
                                                       << 0xdU) 
                                                      | ((((IData)(this->__PVT__PG_24_io_s) 
                                                           ^ 
                                                           (((IData)(this->__PVT__Black_4_io_o_g) 
                                                             | ((IData)(this->__PVT__Black_10_io_o_g) 
                                                                & (IData)(this->__PVT__Black_4_io_o_p))) 
                                                            | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                               & (IData)(this->__PVT__Black_18_io_o_p)))) 
                                                          << 0xcU) 
                                                         | ((((IData)(this->__PVT__PG_23_io_s) 
                                                              ^ 
                                                              (((IData)(this->__PVT__PG_22_io_co) 
                                                                | ((IData)(this->__PVT__Black_10_io_o_g) 
                                                                   & (IData)(this->__PVT__PG_22_io_s))) 
                                                               | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                                  & (IData)(this->__PVT__Black_19_io_o_p)))) 
                                                             << 0xbU) 
                                                            | ((((IData)(this->__PVT__PG_22_io_s) 
                                                                 ^ 
                                                                 ((IData)(this->__PVT__Black_10_io_o_g) 
                                                                  | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                                     & (IData)(this->__PVT__Black_10_io_o_p)))) 
                                                                << 0xaU) 
                                                               | (((IData)(this->__PVT__PG_21_io_s) 
                                                                   ^ 
                                                                   (((IData)(this->__PVT__PG_20_io_co) 
                                                                     | ((IData)(this->__PVT__Black_9_io_o_g) 
                                                                        & (IData)(this->__PVT__PG_20_io_s))) 
                                                                    | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                                       & (IData)(this->__PVT__Black_20_io_o_p)))) 
                                                                  << 9U)))))))))) 
                           | ((((IData)(this->__PVT__PG_20_io_s) 
                                ^ ((IData)(this->__PVT__Black_9_io_o_g) 
                                   | ((IData)(this->__PVT__Black_36_io_o_g) 
                                      & (IData)(this->__PVT__Black_9_io_o_p)))) 
                               << 8U) | ((((IData)(this->__PVT__PG_19_io_s) 
                                           ^ ((IData)(this->__PVT__Black_8_io_o_g) 
                                              | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                 & (IData)(this->__PVT__Black_8_io_o_p)))) 
                                          << 7U) | 
                                         ((((IData)(this->__PVT__PG_18_io_s) 
                                            ^ ((IData)(this->__PVT__PG_17_io_co) 
                                               | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                  & (IData)(this->__PVT__PG_17_io_s)))) 
                                           << 6U) | 
                                          ((((IData)(this->__PVT__PG_17_io_s) 
                                             ^ (IData)(this->__PVT__Black_36_io_o_g)) 
                                            << 5U) 
                                           | ((((IData)(this->__PVT__PG_16_io_s) 
                                                ^ ((IData)(this->__PVT__Black_23_io_o_g) 
                                                   | ((IData)(this->__PVT__Black_35_io_o_g) 
                                                      & (IData)(this->__PVT__Black_23_io_o_p)))) 
                                               << 4U) 
                                              | ((((IData)(this->__PVT__PG_15_io_s) 
                                                   ^ 
                                                   ((IData)(this->__PVT__Black_22_io_o_g) 
                                                    | ((IData)(this->__PVT__Black_35_io_o_g) 
                                                       & (IData)(this->__PVT__Black_22_io_o_p)))) 
                                                  << 3U) 
                                                 | ((((IData)(this->__PVT__PG_14_io_s) 
                                                      ^ 
                                                      ((IData)(this->__PVT__Black_21_io_o_g) 
                                                       | ((IData)(this->__PVT__Black_35_io_o_g) 
                                                          & (IData)(this->__PVT__Black_21_io_o_p)))) 
                                                     << 2U) 
                                                    | ((((IData)(this->__PVT__PG_13_io_s) 
                                                         ^ 
                                                         ((IData)(this->__PVT__PG_12_io_co) 
                                                          | ((IData)(this->__PVT__Black_35_io_o_g) 
                                                             & (IData)(this->__PVT__PG_12_io_s)))) 
                                                        << 1U) 
                                                       | ((IData)(this->__PVT__PG_12_io_s) 
                                                          ^ (IData)(this->__PVT__Black_35_io_o_g)))))))))));
    this->io_outs = (((this->__PVT___T_112 << 0xcU) 
                      | ((((IData)(this->__PVT__PG_11_io_s) 
                           ^ ((IData)(this->__PVT__PG_10_io_co) 
                              | ((IData)(this->__PVT__Black_55_io_o_g) 
                                 & (IData)(this->__PVT__PG_10_io_s)))) 
                          << 0xbU) | ((((IData)(this->__PVT__PG_10_io_s) 
                                        ^ (IData)(this->__PVT__Black_55_io_o_g)) 
                                       << 0xaU) | (
                                                   (((IData)(this->__PVT__PG_9_io_s) 
                                                     ^ 
                                                     ((IData)(this->__PVT__Black_26_io_o_g) 
                                                      | ((IData)(this->__PVT__Black_34_io_o_g) 
                                                         & (IData)(this->__PVT__Black_26_io_o_p)))) 
                                                    << 9U) 
                                                   | ((((IData)(this->__PVT__PG_8_io_s) 
                                                        ^ 
                                                        ((IData)(this->__PVT__PG_7_io_co) 
                                                         | ((IData)(this->__PVT__Black_34_io_o_g) 
                                                            & (IData)(this->__PVT__PG_7_io_s)))) 
                                                       << 8U) 
                                                      | ((((IData)(this->__PVT__PG_7_io_s) 
                                                           ^ (IData)(this->__PVT__Black_34_io_o_g)) 
                                                          << 7U) 
                                                         | ((((IData)(this->__PVT__PG_6_io_s) 
                                                              ^ 
                                                              ((IData)(this->__PVT__PG_5_io_co) 
                                                               | ((IData)(this->__PVT__Black_59_io_o_g) 
                                                                  & (IData)(this->__PVT__PG_5_io_s)))) 
                                                             << 6U) 
                                                            | ((((IData)(this->__PVT__PG_5_io_s) 
                                                                 ^ (IData)(this->__PVT__Black_59_io_o_g)) 
                                                                << 5U) 
                                                               | ((((IData)(this->__PVT__PG_4_io_s) 
                                                                    ^ (IData)(this->__PVT__Black_33_io_o_g)) 
                                                                   << 4U) 
                                                                  | (((IData)(this->__PVT__PG_3_io_s) 
                                                                      ^ 
                                                                      ((IData)(this->__PVT__PG_2_io_co) 
                                                                       | ((IData)(this->__PVT__Black_32_io_o_g) 
                                                                          & (IData)(this->__PVT__PG_2_io_s)))) 
                                                                     << 3U)))))))))) 
                     | ((((IData)(this->__PVT__PG_2_io_s) 
                          ^ (IData)(this->__PVT__Black_32_io_o_g)) 
                         << 2U) | ((((IData)(this->__PVT__PG_1_io_s) 
                                     ^ (IData)(this->__PVT__PG_io_co)) 
                                    << 1U) | (IData)(this->__PVT__PG_io_s))));
}

VL_INLINE_OPT void VMAC_PPAdder::_combo__TOP__MAC__DOT__ppa2__4(VMAC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_PPAdder::_combo__TOP__MAC__DOT__ppa2__4\n"); );
    VMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__PG_30_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x1eU));
    this->__PVT__PG_io_s = (1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                  ^ vlTOPp->io_addend));
    this->__PVT__PG_10_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       & vlTOPp->io_addend) 
                                      >> 0xaU));
    this->__PVT__PG_20_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       & vlTOPp->io_addend) 
                                      >> 0x14U));
    this->__PVT__PG_16_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x10U));
    this->__PVT__PG_29_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x1dU));
    this->__PVT__PG_5_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      & vlTOPp->io_addend) 
                                     >> 5U));
    this->__PVT__PG_4_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      & vlTOPp->io_addend) 
                                     >> 4U));
    this->__PVT__PG_26_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       & vlTOPp->io_addend) 
                                      >> 0x1aU));
    this->__PVT__PG_22_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       & vlTOPp->io_addend) 
                                      >> 0x16U));
    this->__PVT__PG_15_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0xfU));
    this->__PVT__PG_28_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x1cU));
    this->__PVT__PG_7_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      & vlTOPp->io_addend) 
                                     >> 7U));
    this->__PVT__PG_4_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     ^ vlTOPp->io_addend) 
                                    >> 4U));
    this->__PVT__PG_2_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      & vlTOPp->io_addend) 
                                     >> 2U));
    this->__PVT__PG_12_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       & vlTOPp->io_addend) 
                                      >> 0xcU));
    this->__PVT__PG_17_io_co = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       & vlTOPp->io_addend) 
                                      >> 0x11U));
    this->__PVT__PG_10_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0xaU));
    this->__PVT__PG_14_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0xeU));
    this->__PVT__PG_9_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     ^ vlTOPp->io_addend) 
                                    >> 9U));
    this->__PVT__PG_25_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x19U));
    this->__PVT__PG_11_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0xbU));
    this->__PVT__PG_26_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x1aU));
    this->__PVT__PG_12_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0xcU));
    this->__PVT__PG_7_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     ^ vlTOPp->io_addend) 
                                    >> 7U));
    this->__PVT__PG_27_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x1bU));
    this->__PVT__PG_io_co = (1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                   & vlTOPp->io_addend));
    this->__PVT__PG_2_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     ^ vlTOPp->io_addend) 
                                    >> 2U));
    this->__PVT__PG_1_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     ^ vlTOPp->io_addend) 
                                    >> 1U));
    this->__PVT__PG_13_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0xdU));
    this->__PVT__PG_8_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     ^ vlTOPp->io_addend) 
                                    >> 8U));
    this->__PVT__PG_5_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     ^ vlTOPp->io_addend) 
                                    >> 5U));
    this->__PVT__PG_3_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     ^ vlTOPp->io_addend) 
                                    >> 3U));
    this->__PVT__PG_24_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x18U));
    this->__PVT__PG_6_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     ^ vlTOPp->io_addend) 
                                    >> 6U));
    this->__PVT__PG_20_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x14U));
    this->__PVT__PG_21_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x15U));
    this->__PVT__PG_19_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x13U));
    this->__PVT__PG_22_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x16U));
    this->__PVT__PG_23_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x17U));
    this->__PVT__PG_17_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x11U));
    this->__PVT__PG_18_io_s = (1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      ^ vlTOPp->io_addend) 
                                     >> 0x12U));
    this->__PVT__Black_25_io_o_p = ((IData)(this->__PVT__PG_11_io_s) 
                                    & (IData)(this->__PVT__PG_10_io_s));
    this->__PVT__Black_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                         & vlTOPp->io_addend) 
                                        >> 0x1bU) | 
                                       ((IData)(this->__PVT__PG_26_io_co) 
                                        & (IData)(this->__PVT__PG_27_io_s))));
    this->__PVT__Black_io_o_p = ((IData)(this->__PVT__PG_27_io_s) 
                                 & (IData)(this->__PVT__PG_26_io_s));
    this->__PVT__Black_32_io_o_p = ((IData)(this->__PVT__PG_1_io_s) 
                                    & (IData)(this->__PVT__PG_io_s));
    this->__PVT__Black_32_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                            & vlTOPp->io_addend) 
                                           >> 1U) | 
                                          ((IData)(this->__PVT__PG_io_co) 
                                           & (IData)(this->__PVT__PG_1_io_s))));
    this->__PVT__Black_21_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                            & vlTOPp->io_addend) 
                                           >> 0xdU) 
                                          | ((IData)(this->__PVT__PG_12_io_co) 
                                             & (IData)(this->__PVT__PG_13_io_s))));
    this->__PVT__Black_21_io_o_p = ((IData)(this->__PVT__PG_13_io_s) 
                                    & (IData)(this->__PVT__PG_12_io_s));
    this->__PVT__Black_26_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                            & vlTOPp->io_addend) 
                                           >> 8U) | 
                                          ((IData)(this->__PVT__PG_7_io_co) 
                                           & (IData)(this->__PVT__PG_8_io_s))));
    this->__PVT__Black_26_io_o_p = ((IData)(this->__PVT__PG_8_io_s) 
                                    & (IData)(this->__PVT__PG_7_io_s));
    this->__PVT__Black_31_io_o_p = ((IData)(this->__PVT__PG_3_io_s) 
                                    & (IData)(this->__PVT__PG_2_io_s));
    this->__PVT__Black_29_io_o_p = ((IData)(this->__PVT__PG_6_io_s) 
                                    & (IData)(this->__PVT__PG_5_io_s));
    this->__PVT__Black_7_io_o_p = ((IData)(this->__PVT__PG_21_io_s) 
                                   & (IData)(this->__PVT__PG_20_io_s));
    this->__PVT__Black_4_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                           & vlTOPp->io_addend) 
                                          >> 0x17U) 
                                         | ((IData)(this->__PVT__PG_22_io_co) 
                                            & (IData)(this->__PVT__PG_23_io_s))));
    this->__PVT__Black_4_io_o_p = ((IData)(this->__PVT__PG_23_io_s) 
                                   & (IData)(this->__PVT__PG_22_io_s));
    this->__PVT__Black_8_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                           & vlTOPp->io_addend) 
                                          >> 0x12U) 
                                         | ((IData)(this->__PVT__PG_17_io_co) 
                                            & (IData)(this->__PVT__PG_18_io_s))));
    this->__PVT__Black_8_io_o_p = ((IData)(this->__PVT__PG_18_io_s) 
                                   & (IData)(this->__PVT__PG_17_io_s));
    this->__PVT__Black_1_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                           & vlTOPp->io_addend) 
                                          >> 0x1cU) 
                                         | ((IData)(this->__PVT__Black_io_o_g) 
                                            & (IData)(this->__PVT__PG_28_io_s))));
    this->__PVT__Black_1_io_o_p = ((IData)(this->__PVT__PG_28_io_s) 
                                   & (IData)(this->__PVT__Black_io_o_p));
    this->__PVT__Black_22_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                            & vlTOPp->io_addend) 
                                           >> 0xeU) 
                                          | ((IData)(this->__PVT__Black_21_io_o_g) 
                                             & (IData)(this->__PVT__PG_14_io_s))));
    this->__PVT__Black_22_io_o_p = ((IData)(this->__PVT__PG_14_io_s) 
                                    & (IData)(this->__PVT__Black_21_io_o_p));
    this->__PVT__Black_27_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                            & vlTOPp->io_addend) 
                                           >> 9U) | 
                                          ((IData)(this->__PVT__Black_26_io_o_g) 
                                           & (IData)(this->__PVT__PG_9_io_s))));
    this->__PVT__Black_27_io_o_p = ((IData)(this->__PVT__PG_9_io_s) 
                                    & (IData)(this->__PVT__Black_26_io_o_p));
    this->__PVT__Black_33_io_o_p = ((IData)(this->__PVT__Black_31_io_o_p) 
                                    & (IData)(this->__PVT__Black_32_io_o_p));
    this->__PVT__Black_33_io_o_g = (1U & ((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                             & vlTOPp->io_addend) 
                                            >> 3U) 
                                           | ((IData)(this->__PVT__PG_2_io_co) 
                                              & (IData)(this->__PVT__PG_3_io_s))) 
                                          | ((IData)(this->__PVT__Black_32_io_o_g) 
                                             & (IData)(this->__PVT__Black_31_io_o_p))));
    this->__PVT__Black_30_io_o_p = ((IData)(this->__PVT__Black_29_io_o_p) 
                                    & (IData)(this->__PVT__PG_4_io_s));
    this->__PVT__Black_5_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                           & vlTOPp->io_addend) 
                                          >> 0x18U) 
                                         | ((IData)(this->__PVT__Black_4_io_o_g) 
                                            & (IData)(this->__PVT__PG_24_io_s))));
    this->__PVT__Black_5_io_o_p = ((IData)(this->__PVT__PG_24_io_s) 
                                   & (IData)(this->__PVT__Black_4_io_o_p));
    this->__PVT__Black_9_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                           & vlTOPp->io_addend) 
                                          >> 0x13U) 
                                         | ((IData)(this->__PVT__Black_8_io_o_g) 
                                            & (IData)(this->__PVT__PG_19_io_s))));
    this->__PVT__Black_9_io_o_p = ((IData)(this->__PVT__PG_19_io_s) 
                                   & (IData)(this->__PVT__Black_8_io_o_p));
    this->__PVT__Black_2_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                           & vlTOPp->io_addend) 
                                          >> 0x1dU) 
                                         | ((IData)(this->__PVT__Black_1_io_o_g) 
                                            & (IData)(this->__PVT__PG_29_io_s))));
    this->__PVT__Black_2_io_o_p = ((IData)(this->__PVT__PG_29_io_s) 
                                   & (IData)(this->__PVT__Black_1_io_o_p));
    this->__PVT__Black_23_io_o_g = (1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                            & vlTOPp->io_addend) 
                                           >> 0xfU) 
                                          | ((IData)(this->__PVT__Black_22_io_o_g) 
                                             & (IData)(this->__PVT__PG_15_io_s))));
    this->__PVT__Black_23_io_o_p = ((IData)(this->__PVT__PG_15_io_s) 
                                    & (IData)(this->__PVT__Black_22_io_o_p));
    this->__PVT__Black_28_io_o_p = ((IData)(this->__PVT__Black_25_io_o_p) 
                                    & (IData)(this->__PVT__Black_27_io_o_p));
    this->__PVT__Black_59_io_o_g = ((IData)(this->__PVT__PG_4_io_co) 
                                    | ((IData)(this->__PVT__Black_33_io_o_g) 
                                       & (IData)(this->__PVT__PG_4_io_s)));
    this->__PVT__Black_34_io_o_p = ((IData)(this->__PVT__Black_30_io_o_p) 
                                    & (IData)(this->__PVT__Black_33_io_o_p));
    this->__PVT__Black_34_io_o_g = (1U & (((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                              & vlTOPp->io_addend) 
                                             >> 6U) 
                                            | ((IData)(this->__PVT__PG_5_io_co) 
                                               & (IData)(this->__PVT__PG_6_io_s))) 
                                           | ((IData)(this->__PVT__PG_4_io_co) 
                                              & (IData)(this->__PVT__Black_29_io_o_p))) 
                                          | ((IData)(this->__PVT__Black_33_io_o_g) 
                                             & (IData)(this->__PVT__Black_30_io_o_p))));
    this->__PVT__Black_6_io_o_p = ((IData)(this->__PVT__PG_25_io_s) 
                                   & (IData)(this->__PVT__Black_5_io_o_p));
    this->__PVT__Black_10_io_o_g = (1U & ((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                             & vlTOPp->io_addend) 
                                            >> 0x15U) 
                                           | ((IData)(this->__PVT__PG_20_io_co) 
                                              & (IData)(this->__PVT__PG_21_io_s))) 
                                          | ((IData)(this->__PVT__Black_9_io_o_g) 
                                             & (IData)(this->__PVT__Black_7_io_o_p))));
    this->__PVT__Black_20_io_o_p = ((IData)(this->__PVT__PG_20_io_s) 
                                    & (IData)(this->__PVT__Black_9_io_o_p));
    this->__PVT__Black_10_io_o_p = ((IData)(this->__PVT__Black_7_io_o_p) 
                                    & (IData)(this->__PVT__Black_9_io_o_p));
    this->__PVT__Black_3_io_o_p = ((IData)(this->__PVT__PG_30_io_s) 
                                   & (IData)(this->__PVT__Black_2_io_o_p));
    this->__PVT__Black_24_io_o_p = ((IData)(this->__PVT__PG_16_io_s) 
                                    & (IData)(this->__PVT__Black_23_io_o_p));
    this->__PVT__Black_35_io_o_p = ((IData)(this->__PVT__Black_28_io_o_p) 
                                    & (IData)(this->__PVT__Black_34_io_o_p));
    this->__PVT__Black_55_io_o_g = ((IData)(this->__PVT__Black_27_io_o_g) 
                                    | ((IData)(this->__PVT__Black_34_io_o_g) 
                                       & (IData)(this->__PVT__Black_27_io_o_p)));
    this->__PVT__Black_35_io_o_g = (1U & (((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                              & vlTOPp->io_addend) 
                                             >> 0xbU) 
                                            | ((IData)(this->__PVT__PG_10_io_co) 
                                               & (IData)(this->__PVT__PG_11_io_s))) 
                                           | ((IData)(this->__PVT__Black_27_io_o_g) 
                                              & (IData)(this->__PVT__Black_25_io_o_p))) 
                                          | ((IData)(this->__PVT__Black_34_io_o_g) 
                                             & (IData)(this->__PVT__Black_28_io_o_p))));
    this->__PVT__Black_11_io_o_g = (1U & ((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                             & vlTOPp->io_addend) 
                                            >> 0x19U) 
                                           | ((IData)(this->__PVT__Black_5_io_o_g) 
                                              & (IData)(this->__PVT__PG_25_io_s))) 
                                          | ((IData)(this->__PVT__Black_10_io_o_g) 
                                             & (IData)(this->__PVT__Black_6_io_o_p))));
    this->__PVT__Black_17_io_o_p = ((IData)(this->__PVT__Black_5_io_o_p) 
                                    & (IData)(this->__PVT__Black_10_io_o_p));
    this->__PVT__Black_18_io_o_p = ((IData)(this->__PVT__Black_4_io_o_p) 
                                    & (IData)(this->__PVT__Black_10_io_o_p));
    this->__PVT__Black_19_io_o_p = ((IData)(this->__PVT__PG_22_io_s) 
                                    & (IData)(this->__PVT__Black_10_io_o_p));
    this->__PVT__Black_11_io_o_p = ((IData)(this->__PVT__Black_6_io_o_p) 
                                    & (IData)(this->__PVT__Black_10_io_o_p));
    this->__PVT__Black_36_io_o_p = ((IData)(this->__PVT__Black_24_io_o_p) 
                                    & (IData)(this->__PVT__Black_35_io_o_p));
    this->__PVT__Black_36_io_o_g = (1U & ((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                             & vlTOPp->io_addend) 
                                            >> 0x10U) 
                                           | ((IData)(this->__PVT__Black_23_io_o_g) 
                                              & (IData)(this->__PVT__PG_16_io_s))) 
                                          | ((IData)(this->__PVT__Black_35_io_o_g) 
                                             & (IData)(this->__PVT__Black_24_io_o_p))));
    this->__PVT__Black_12_io_o_p = ((IData)(this->__PVT__Black_3_io_o_p) 
                                    & (IData)(this->__PVT__Black_11_io_o_p));
    this->__PVT__Black_13_io_o_p = ((IData)(this->__PVT__Black_2_io_o_p) 
                                    & (IData)(this->__PVT__Black_11_io_o_p));
    this->__PVT__Black_14_io_o_p = ((IData)(this->__PVT__Black_1_io_o_p) 
                                    & (IData)(this->__PVT__Black_11_io_o_p));
    this->__PVT__Black_15_io_o_p = ((IData)(this->__PVT__Black_io_o_p) 
                                    & (IData)(this->__PVT__Black_11_io_o_p));
    this->__PVT__Black_16_io_o_p = ((IData)(this->__PVT__PG_26_io_s) 
                                    & (IData)(this->__PVT__Black_11_io_o_p));
    this->__PVT___T_112 = (((((IData)(this->__PVT__PG_30_io_s) 
                              ^ (((IData)(this->__PVT__Black_2_io_o_g) 
                                  | ((IData)(this->__PVT__Black_11_io_o_g) 
                                     & (IData)(this->__PVT__Black_2_io_o_p))) 
                                 | ((IData)(this->__PVT__Black_36_io_o_g) 
                                    & (IData)(this->__PVT__Black_13_io_o_p)))) 
                             << 0x12U) | ((((IData)(this->__PVT__PG_29_io_s) 
                                            ^ (((IData)(this->__PVT__Black_1_io_o_g) 
                                                | ((IData)(this->__PVT__Black_11_io_o_g) 
                                                   & (IData)(this->__PVT__Black_1_io_o_p))) 
                                               | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                  & (IData)(this->__PVT__Black_14_io_o_p)))) 
                                           << 0x11U) 
                                          | ((((IData)(this->__PVT__PG_28_io_s) 
                                               ^ (((IData)(this->__PVT__Black_io_o_g) 
                                                   | ((IData)(this->__PVT__Black_11_io_o_g) 
                                                      & (IData)(this->__PVT__Black_io_o_p))) 
                                                  | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                     & (IData)(this->__PVT__Black_15_io_o_p)))) 
                                              << 0x10U) 
                                             | ((((IData)(this->__PVT__PG_27_io_s) 
                                                  ^ 
                                                  (((IData)(this->__PVT__PG_26_io_co) 
                                                    | ((IData)(this->__PVT__Black_11_io_o_g) 
                                                       & (IData)(this->__PVT__PG_26_io_s))) 
                                                   | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                      & (IData)(this->__PVT__Black_16_io_o_p)))) 
                                                 << 0xfU) 
                                                | ((((IData)(this->__PVT__PG_26_io_s) 
                                                     ^ 
                                                     ((IData)(this->__PVT__Black_11_io_o_g) 
                                                      | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                         & (IData)(this->__PVT__Black_11_io_o_p)))) 
                                                    << 0xeU) 
                                                   | ((((IData)(this->__PVT__PG_25_io_s) 
                                                        ^ 
                                                        (((IData)(this->__PVT__Black_5_io_o_g) 
                                                          | ((IData)(this->__PVT__Black_10_io_o_g) 
                                                             & (IData)(this->__PVT__Black_5_io_o_p))) 
                                                         | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                            & (IData)(this->__PVT__Black_17_io_o_p)))) 
                                                       << 0xdU) 
                                                      | ((((IData)(this->__PVT__PG_24_io_s) 
                                                           ^ 
                                                           (((IData)(this->__PVT__Black_4_io_o_g) 
                                                             | ((IData)(this->__PVT__Black_10_io_o_g) 
                                                                & (IData)(this->__PVT__Black_4_io_o_p))) 
                                                            | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                               & (IData)(this->__PVT__Black_18_io_o_p)))) 
                                                          << 0xcU) 
                                                         | ((((IData)(this->__PVT__PG_23_io_s) 
                                                              ^ 
                                                              (((IData)(this->__PVT__PG_22_io_co) 
                                                                | ((IData)(this->__PVT__Black_10_io_o_g) 
                                                                   & (IData)(this->__PVT__PG_22_io_s))) 
                                                               | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                                  & (IData)(this->__PVT__Black_19_io_o_p)))) 
                                                             << 0xbU) 
                                                            | ((((IData)(this->__PVT__PG_22_io_s) 
                                                                 ^ 
                                                                 ((IData)(this->__PVT__Black_10_io_o_g) 
                                                                  | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                                     & (IData)(this->__PVT__Black_10_io_o_p)))) 
                                                                << 0xaU) 
                                                               | (((IData)(this->__PVT__PG_21_io_s) 
                                                                   ^ 
                                                                   (((IData)(this->__PVT__PG_20_io_co) 
                                                                     | ((IData)(this->__PVT__Black_9_io_o_g) 
                                                                        & (IData)(this->__PVT__PG_20_io_s))) 
                                                                    | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                                       & (IData)(this->__PVT__Black_20_io_o_p)))) 
                                                                  << 9U)))))))))) 
                           | ((((IData)(this->__PVT__PG_20_io_s) 
                                ^ ((IData)(this->__PVT__Black_9_io_o_g) 
                                   | ((IData)(this->__PVT__Black_36_io_o_g) 
                                      & (IData)(this->__PVT__Black_9_io_o_p)))) 
                               << 8U) | ((((IData)(this->__PVT__PG_19_io_s) 
                                           ^ ((IData)(this->__PVT__Black_8_io_o_g) 
                                              | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                 & (IData)(this->__PVT__Black_8_io_o_p)))) 
                                          << 7U) | 
                                         ((((IData)(this->__PVT__PG_18_io_s) 
                                            ^ ((IData)(this->__PVT__PG_17_io_co) 
                                               | ((IData)(this->__PVT__Black_36_io_o_g) 
                                                  & (IData)(this->__PVT__PG_17_io_s)))) 
                                           << 6U) | 
                                          ((((IData)(this->__PVT__PG_17_io_s) 
                                             ^ (IData)(this->__PVT__Black_36_io_o_g)) 
                                            << 5U) 
                                           | ((((IData)(this->__PVT__PG_16_io_s) 
                                                ^ ((IData)(this->__PVT__Black_23_io_o_g) 
                                                   | ((IData)(this->__PVT__Black_35_io_o_g) 
                                                      & (IData)(this->__PVT__Black_23_io_o_p)))) 
                                               << 4U) 
                                              | ((((IData)(this->__PVT__PG_15_io_s) 
                                                   ^ 
                                                   ((IData)(this->__PVT__Black_22_io_o_g) 
                                                    | ((IData)(this->__PVT__Black_35_io_o_g) 
                                                       & (IData)(this->__PVT__Black_22_io_o_p)))) 
                                                  << 3U) 
                                                 | ((((IData)(this->__PVT__PG_14_io_s) 
                                                      ^ 
                                                      ((IData)(this->__PVT__Black_21_io_o_g) 
                                                       | ((IData)(this->__PVT__Black_35_io_o_g) 
                                                          & (IData)(this->__PVT__Black_21_io_o_p)))) 
                                                     << 2U) 
                                                    | ((((IData)(this->__PVT__PG_13_io_s) 
                                                         ^ 
                                                         ((IData)(this->__PVT__PG_12_io_co) 
                                                          | ((IData)(this->__PVT__Black_35_io_o_g) 
                                                             & (IData)(this->__PVT__PG_12_io_s)))) 
                                                        << 1U) 
                                                       | ((IData)(this->__PVT__PG_12_io_s) 
                                                          ^ (IData)(this->__PVT__Black_35_io_o_g)))))))))));
}

void VMAC_PPAdder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_PPAdder::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_augend = VL_RAND_RESET_I(31);
    io_addend = VL_RAND_RESET_I(31);
    io_outs = VL_RAND_RESET_I(31);
    __PVT__PG_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_io_co = VL_RAND_RESET_I(1);
    __PVT__PG_1_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_2_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_2_io_co = VL_RAND_RESET_I(1);
    __PVT__PG_3_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_4_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_4_io_co = VL_RAND_RESET_I(1);
    __PVT__PG_5_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_5_io_co = VL_RAND_RESET_I(1);
    __PVT__PG_6_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_7_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_7_io_co = VL_RAND_RESET_I(1);
    __PVT__PG_8_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_9_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_10_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_10_io_co = VL_RAND_RESET_I(1);
    __PVT__PG_11_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_12_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_12_io_co = VL_RAND_RESET_I(1);
    __PVT__PG_13_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_14_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_15_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_16_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_17_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_17_io_co = VL_RAND_RESET_I(1);
    __PVT__PG_18_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_19_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_20_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_20_io_co = VL_RAND_RESET_I(1);
    __PVT__PG_21_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_22_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_22_io_co = VL_RAND_RESET_I(1);
    __PVT__PG_23_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_24_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_25_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_26_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_26_io_co = VL_RAND_RESET_I(1);
    __PVT__PG_27_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_28_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_29_io_s = VL_RAND_RESET_I(1);
    __PVT__PG_30_io_s = VL_RAND_RESET_I(1);
    __PVT__Black_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_1_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_1_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_2_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_2_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_3_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_4_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_4_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_5_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_5_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_6_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_7_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_8_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_8_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_9_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_9_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_10_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_10_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_11_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_11_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_12_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_13_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_14_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_15_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_16_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_17_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_18_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_19_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_20_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_21_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_21_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_22_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_22_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_23_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_23_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_24_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_25_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_26_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_26_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_27_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_27_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_28_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_29_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_30_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_31_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_32_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_32_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_33_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_33_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_34_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_34_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_35_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_35_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_36_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_36_io_o_p = VL_RAND_RESET_I(1);
    __PVT__Black_55_io_o_g = VL_RAND_RESET_I(1);
    __PVT__Black_59_io_o_g = VL_RAND_RESET_I(1);
    __PVT___T_112 = VL_RAND_RESET_I(19);
}
