// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC.h for the primary calling header

#include "VMAC__pch.h"
#include "VMAC__Syms.h"
#include "VMAC___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC___024root___dump_triggers__ico(VMAC___024root* vlSelf);
#endif  // VL_DEBUG

void VMAC___024root___eval_triggers__ico(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMAC___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void VMAC___024root___ico_sequent__TOP__0(VMAC___024root* vlSelf);
void VMAC_PPAdder___ico_sequent__TOP__MAC__DOT__ppa1__0(VMAC_PPAdder* vlSelf);
void VMAC_PPAdder___ico_sequent__TOP__MAC__DOT__ppa2__0(VMAC_PPAdder* vlSelf);
void VMAC___024root___ico_sequent__TOP__1(VMAC___024root* vlSelf);

void VMAC___024root___eval_ico(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VMAC___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VMAC_PPAdder___ico_sequent__TOP__MAC__DOT__ppa1__0((&vlSymsp->TOP__MAC__DOT__ppa1));
        VMAC_PPAdder___ico_sequent__TOP__MAC__DOT__ppa2__0((&vlSymsp->TOP__MAC__DOT__ppa2));
        VMAC___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void VMAC___024root___ico_sequent__TOP__1(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->io_outs = (((vlSymsp->TOP__MAC__DOT__ppa2.__PVT___T_112 
                         << 0xcU) | (((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_co) 
                                        | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_55_io_o_g) 
                                           & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_s))) 
                                       ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_11_io_s)) 
                                      << 0xbU) | ((
                                                   ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_55_io_o_g) 
                                                    ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_s)) 
                                                   << 0xaU) 
                                                  | (((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_26_io_o_g) 
                                                        | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_g) 
                                                           & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_26_io_o_p))) 
                                                       ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_9_io_s)) 
                                                      << 9U) 
                                                     | (((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_7_io_co) 
                                                           | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_g) 
                                                              & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_7_io_s))) 
                                                          ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_8_io_s)) 
                                                         << 8U) 
                                                        | ((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_g) 
                                                             ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_7_io_s)) 
                                                            << 7U) 
                                                           | (((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_5_io_co) 
                                                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_59_io_o_g) 
                                                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_5_io_s))) 
                                                                ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_6_io_s)) 
                                                               << 6U) 
                                                              | ((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_59_io_o_g) 
                                                                   ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_5_io_s)) 
                                                                  << 5U) 
                                                                 | ((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_33_io_o_g) 
                                                                      ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_4_io_s)) 
                                                                     << 4U) 
                                                                    | ((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_2_io_co) 
                                                                         | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_32_io_o_g) 
                                                                            & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_2_io_s))) 
                                                                        ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_3_io_s)) 
                                                                       << 3U)))))))))) 
                       | ((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_32_io_o_g) 
                            ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_2_io_s)) 
                           << 2U) | ((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_1_io_s) 
                                       ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_io_co)) 
                                      << 1U) | (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_io_s))));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC___024root___dump_triggers__act(VMAC___024root* vlSelf);
#endif  // VL_DEBUG

void VMAC___024root___eval_triggers__act(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMAC___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VMAC_PPAdder___nba_sequent__TOP__MAC__DOT__ppa1__0(VMAC_PPAdder* vlSelf);

void VMAC___024root___eval_nba(VMAC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VMAC_PPAdder___nba_sequent__TOP__MAC__DOT__ppa1__0((&vlSymsp->TOP__MAC__DOT__ppa2));
        VMAC_PPAdder___nba_sequent__TOP__MAC__DOT__ppa1__0((&vlSymsp->TOP__MAC__DOT__ppa1));
    }
}
