// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMAC__Syms.h"


void VMAC___024root__trace_chg_0_sub_0(VMAC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMAC___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root__trace_chg_0\n"); );
    // Init
    VMAC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC___024root*>(voidSelf);
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMAC___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VMAC___024root__trace_chg_0_sub_0(VMAC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_a) 
                                  << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_b) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_ci) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_ci) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_ci) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_ci) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_ci) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_ci) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_ci) 
                                                                    << 7U) 
                                                                   | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_ci) 
                                                                      << 6U)))))))))) 
                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_ci) 
                                    << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_ci) 
                                               << 4U) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_ci) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_ci) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_ci) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_ci)))))))),16);
        bufp->chgSData(oldp+1,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_a) 
                                  << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_b) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_ci) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_a) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_a) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_a) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_a) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_a) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_a) 
                                                                    << 7U) 
                                                                   | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_a) 
                                                                      << 6U)))))))))) 
                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_a) 
                                    << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_a) 
                                               << 4U) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_a) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_a) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_a) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_124_io_a)))))))),16);
        bufp->chgSData(oldp+2,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_a) 
                                  << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_b) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_ci) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_a) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_b) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_b) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_b) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_b) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_b) 
                                                                    << 7U) 
                                                                   | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_b) 
                                                                      << 6U)))))))))) 
                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_b) 
                                    << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_b) 
                                               << 4U) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_b) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_b) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_b) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_b)))))))),16);
        bufp->chgSData(oldp+3,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_a) 
                                  << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_b) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_ci) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_a) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_b) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_ci) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_ci) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_ci) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_ci) 
                                                                    << 7U) 
                                                                   | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_ci) 
                                                                      << 6U)))))))))) 
                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_ci) 
                                    << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_ci) 
                                               << 4U) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_ci) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_ci) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_ci) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_ci)))))))),16);
        bufp->chgSData(oldp+4,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_a) 
                                  << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_b) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_ci) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_a) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_b) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_ci) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_a) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_a) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_a) 
                                                                    << 7U) 
                                                                   | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_a) 
                                                                      << 6U)))))))))) 
                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_a) 
                                    << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_a) 
                                               << 4U) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_a) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_a) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_a) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_a)))))))),16);
        bufp->chgSData(oldp+5,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_a) 
                                  << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_b) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_ci) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_a) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_b) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_ci) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_a) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_b) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_b) 
                                                                    << 7U) 
                                                                   | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_b) 
                                                                      << 6U)))))))))) 
                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_b) 
                                    << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_b) 
                                               << 4U) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_b) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_b) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_b) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_b)))))))),16);
        bufp->chgSData(oldp+6,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_a) 
                                  << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_b) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_ci) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_a) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_b) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_ci) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_a) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_b) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_ci) 
                                                                    << 7U) 
                                                                   | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_ci) 
                                                                      << 6U)))))))))) 
                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_ci) 
                                    << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_ci) 
                                               << 4U) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_ci) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_ci) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_ci) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_ci)))))))),16);
        bufp->chgSData(oldp+7,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_a) 
                                  << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_b) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_ci) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_a) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_b) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_ci) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_a) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_b) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_ci) 
                                                                    << 7U) 
                                                                   | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_a) 
                                                                      << 6U)))))))))) 
                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_a) 
                                    << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_a) 
                                               << 4U) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_a) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_a) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_a) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_a)))))))),16);
        bufp->chgSData(oldp+8,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_a) 
                                  << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_b) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_ci) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_a) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_b) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_ci) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_a) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_b) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_ci) 
                                                                    << 7U) 
                                                                   | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_a) 
                                                                      << 6U)))))))))) 
                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_b) 
                                    << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_b) 
                                               << 4U) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_b) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_b) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_b) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_b)))))))),16);
        bufp->chgSData(oldp+9,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_a) 
                                  << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_b) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_ci) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_a) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_b) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_ci) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_a) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_b) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_ci) 
                                                                    << 7U) 
                                                                   | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_a) 
                                                                      << 6U)))))))))) 
                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_b) 
                                    << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_ci) 
                                               << 4U) 
                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_ci) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_ci) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_ci) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_ci)))))))),16);
        bufp->chgSData(oldp+10,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_a) 
                                   << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_b) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_ci) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_a) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_b) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_ci) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_a) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_b) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_ci) 
                                                                     << 7U) 
                                                                    | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_a) 
                                                                       << 6U)))))))))) 
                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_b) 
                                     << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_ci) 
                                                << 4U) 
                                               | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_a) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_a) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_a) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_a)))))))),16);
        bufp->chgSData(oldp+11,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_a) 
                                   << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_b) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_ci) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_a) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_b) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_ci) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_a) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_b) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_ci) 
                                                                     << 7U) 
                                                                    | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_a) 
                                                                       << 6U)))))))))) 
                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_b) 
                                     << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_ci) 
                                                << 4U) 
                                               | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_a) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_b) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_b) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_b)))))))),16);
        bufp->chgSData(oldp+12,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_a) 
                                   << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_b) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_ci) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_a) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_b) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_ci) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_a) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_b) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_ci) 
                                                                     << 7U) 
                                                                    | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_a) 
                                                                       << 6U)))))))))) 
                                 | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_b) 
                                     << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_ci) 
                                                << 4U) 
                                               | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_a) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_b) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_ci) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_ci)))))))),16);
        bufp->chgIData(oldp+13,(vlSelf->MAC__DOT__ppa1_io_augend),32);
        bufp->chgIData(oldp+14,(vlSelf->MAC__DOT__ppa1_io_addend),32);
        bufp->chgIData(oldp+15,(vlSelf->MAC__DOT__ppa1_io_augend),31);
        bufp->chgIData(oldp+16,(vlSelf->MAC__DOT__ppa1_io_addend),31);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__MAC__DOT__ppa1.io_outs),31);
        bufp->chgIData(oldp+18,((((vlSymsp->TOP__MAC__DOT__ppa2.__PVT___T_112 
                                   << 0xcU) | (((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_co) 
                                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_55_io_o_g) 
                                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_s))) 
                                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_11_io_s)) 
                                                << 0xbU) 
                                               | ((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_55_io_o_g) 
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
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_io_s))))),31);
        bufp->chgBit(oldp+19,(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_a));
        bufp->chgBit(oldp+20,(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_b));
        bufp->chgBit(oldp+21,(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_ci));
        bufp->chgBit(oldp+22,(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_s));
        bufp->chgBit(oldp+23,(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_co));
        bufp->chgBit(oldp+24,(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_a));
        bufp->chgBit(oldp+25,(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_b));
        bufp->chgBit(oldp+26,(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_ci));
        bufp->chgBit(oldp+27,(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_s));
        bufp->chgBit(oldp+28,(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_co));
        bufp->chgBit(oldp+29,(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_a));
        bufp->chgBit(oldp+30,(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_b));
        bufp->chgBit(oldp+31,(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_ci));
        bufp->chgBit(oldp+32,(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_s));
        bufp->chgBit(oldp+33,(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_co));
        bufp->chgBit(oldp+34,(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_a));
        bufp->chgBit(oldp+35,(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_b));
        bufp->chgBit(oldp+36,(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_ci));
        bufp->chgBit(oldp+37,(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_s));
        bufp->chgBit(oldp+38,(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_co));
        bufp->chgBit(oldp+39,(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_a));
        bufp->chgBit(oldp+40,(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_b));
        bufp->chgBit(oldp+41,(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_ci));
        bufp->chgBit(oldp+42,(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_s));
        bufp->chgBit(oldp+43,(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_co));
        bufp->chgBit(oldp+44,(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_a));
        bufp->chgBit(oldp+45,(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_b));
        bufp->chgBit(oldp+46,(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_ci));
        bufp->chgBit(oldp+47,(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_s));
        bufp->chgBit(oldp+48,(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_co));
        bufp->chgBit(oldp+49,(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_a));
        bufp->chgBit(oldp+50,(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_b));
        bufp->chgBit(oldp+51,(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_ci));
        bufp->chgBit(oldp+52,(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_s));
        bufp->chgBit(oldp+53,(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_co));
        bufp->chgBit(oldp+54,(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_a));
        bufp->chgBit(oldp+55,(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_b));
        bufp->chgBit(oldp+56,(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_ci));
        bufp->chgBit(oldp+57,(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_s));
        bufp->chgBit(oldp+58,(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_co));
        bufp->chgBit(oldp+59,(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_a));
        bufp->chgBit(oldp+60,(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_b));
        bufp->chgBit(oldp+61,(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_ci));
        bufp->chgBit(oldp+62,(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_s));
        bufp->chgBit(oldp+63,(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_co));
        bufp->chgBit(oldp+64,(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_a));
        bufp->chgBit(oldp+65,(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_b));
        bufp->chgBit(oldp+66,(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_ci));
        bufp->chgBit(oldp+67,(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_s));
        bufp->chgBit(oldp+68,(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_co));
        bufp->chgBit(oldp+69,(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_a));
        bufp->chgBit(oldp+70,(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_b));
        bufp->chgBit(oldp+71,(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_ci));
        bufp->chgBit(oldp+72,(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_s));
        bufp->chgBit(oldp+73,(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_co));
        bufp->chgBit(oldp+74,(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_a));
        bufp->chgBit(oldp+75,(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_b));
        bufp->chgBit(oldp+76,(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_ci));
        bufp->chgBit(oldp+77,(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_s));
        bufp->chgBit(oldp+78,(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_co));
        bufp->chgBit(oldp+79,(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_a));
        bufp->chgBit(oldp+80,(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_b));
        bufp->chgBit(oldp+81,(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_ci));
        bufp->chgBit(oldp+82,(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_s));
        bufp->chgBit(oldp+83,(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_co));
        bufp->chgBit(oldp+84,(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_a));
        bufp->chgBit(oldp+85,(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_b));
        bufp->chgBit(oldp+86,(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_ci));
        bufp->chgBit(oldp+87,(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_s));
        bufp->chgBit(oldp+88,(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_co));
        bufp->chgBit(oldp+89,(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_a));
        bufp->chgBit(oldp+90,(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_b));
        bufp->chgBit(oldp+91,(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_ci));
        bufp->chgBit(oldp+92,(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_s));
        bufp->chgBit(oldp+93,(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_co));
        bufp->chgBit(oldp+94,(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_a));
        bufp->chgBit(oldp+95,(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_b));
        bufp->chgBit(oldp+96,(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_ci));
        bufp->chgBit(oldp+97,(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_s));
        bufp->chgBit(oldp+98,(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_co));
        bufp->chgBit(oldp+99,(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_a));
        bufp->chgBit(oldp+100,(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_b));
        bufp->chgBit(oldp+101,(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_ci));
        bufp->chgBit(oldp+102,(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_s));
        bufp->chgBit(oldp+103,(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_co));
        bufp->chgBit(oldp+104,(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_a));
        bufp->chgBit(oldp+105,(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_b));
        bufp->chgBit(oldp+106,(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_ci));
        bufp->chgBit(oldp+107,(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_s));
        bufp->chgBit(oldp+108,(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_co));
        bufp->chgBit(oldp+109,(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_a));
        bufp->chgBit(oldp+110,(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_b));
        bufp->chgBit(oldp+111,(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_ci));
        bufp->chgBit(oldp+112,(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_s));
        bufp->chgBit(oldp+113,(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_co));
        bufp->chgBit(oldp+114,(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_a));
        bufp->chgBit(oldp+115,(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_b));
        bufp->chgBit(oldp+116,(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_ci));
        bufp->chgBit(oldp+117,(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_s));
        bufp->chgBit(oldp+118,(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_co));
        bufp->chgBit(oldp+119,(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_a));
        bufp->chgBit(oldp+120,(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_b));
        bufp->chgBit(oldp+121,(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_ci));
        bufp->chgBit(oldp+122,(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_s));
        bufp->chgBit(oldp+123,(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_co));
        bufp->chgBit(oldp+124,(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_a));
        bufp->chgBit(oldp+125,(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_b));
        bufp->chgBit(oldp+126,(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_ci));
        bufp->chgBit(oldp+127,(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_s));
        bufp->chgBit(oldp+128,(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_co));
        bufp->chgBit(oldp+129,(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_a));
        bufp->chgBit(oldp+130,(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_b));
        bufp->chgBit(oldp+131,(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_ci));
        bufp->chgBit(oldp+132,(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_s));
        bufp->chgBit(oldp+133,(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_co));
        bufp->chgBit(oldp+134,(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_a));
        bufp->chgBit(oldp+135,(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_b));
        bufp->chgBit(oldp+136,(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_ci));
        bufp->chgBit(oldp+137,(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_s));
        bufp->chgBit(oldp+138,(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_co));
        bufp->chgBit(oldp+139,(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_a));
        bufp->chgBit(oldp+140,(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_b));
        bufp->chgBit(oldp+141,(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_ci));
        bufp->chgBit(oldp+142,(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_s));
        bufp->chgBit(oldp+143,(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_co));
        bufp->chgBit(oldp+144,(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_a));
        bufp->chgBit(oldp+145,(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_b));
        bufp->chgBit(oldp+146,(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_ci));
        bufp->chgBit(oldp+147,(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_s));
        bufp->chgBit(oldp+148,(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_co));
        bufp->chgBit(oldp+149,(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_a));
        bufp->chgBit(oldp+150,(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_b));
        bufp->chgBit(oldp+151,(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_ci));
        bufp->chgBit(oldp+152,(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_s));
        bufp->chgBit(oldp+153,(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_co));
        bufp->chgBit(oldp+154,(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_a));
        bufp->chgBit(oldp+155,(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_b));
        bufp->chgBit(oldp+156,(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_ci));
        bufp->chgBit(oldp+157,(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_s));
        bufp->chgBit(oldp+158,(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_co));
        bufp->chgBit(oldp+159,(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_a));
        bufp->chgBit(oldp+160,(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_b));
        bufp->chgBit(oldp+161,(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_ci));
        bufp->chgBit(oldp+162,(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_s));
        bufp->chgBit(oldp+163,(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_co));
        bufp->chgBit(oldp+164,(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_a));
        bufp->chgBit(oldp+165,(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_b));
        bufp->chgBit(oldp+166,(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_ci));
        bufp->chgBit(oldp+167,(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_s));
        bufp->chgBit(oldp+168,(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_co));
        bufp->chgBit(oldp+169,(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_a));
        bufp->chgBit(oldp+170,(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_b));
        bufp->chgBit(oldp+171,(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_ci));
        bufp->chgBit(oldp+172,(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_s));
        bufp->chgBit(oldp+173,(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_co));
        bufp->chgBit(oldp+174,(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_a));
        bufp->chgBit(oldp+175,(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_b));
        bufp->chgBit(oldp+176,(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_ci));
        bufp->chgBit(oldp+177,(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_s));
        bufp->chgBit(oldp+178,(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_co));
        bufp->chgBit(oldp+179,(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_a));
        bufp->chgBit(oldp+180,(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_b));
        bufp->chgBit(oldp+181,(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_ci));
        bufp->chgBit(oldp+182,(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_s));
        bufp->chgBit(oldp+183,(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_co));
        bufp->chgBit(oldp+184,(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_a));
        bufp->chgBit(oldp+185,(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_b));
        bufp->chgBit(oldp+186,(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_ci));
        bufp->chgBit(oldp+187,(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_s));
        bufp->chgBit(oldp+188,(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_co));
        bufp->chgBit(oldp+189,(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_a));
        bufp->chgBit(oldp+190,(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_b));
        bufp->chgBit(oldp+191,(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_ci));
        bufp->chgBit(oldp+192,(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_s));
        bufp->chgBit(oldp+193,(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_co));
        bufp->chgBit(oldp+194,(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_a));
        bufp->chgBit(oldp+195,(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_b));
        bufp->chgBit(oldp+196,(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_ci));
        bufp->chgBit(oldp+197,(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_s));
        bufp->chgBit(oldp+198,(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_co));
        bufp->chgBit(oldp+199,(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_a));
        bufp->chgBit(oldp+200,(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_b));
        bufp->chgBit(oldp+201,(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_ci));
        bufp->chgBit(oldp+202,(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_s));
        bufp->chgBit(oldp+203,(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_co));
        bufp->chgBit(oldp+204,(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_a));
        bufp->chgBit(oldp+205,(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_b));
        bufp->chgBit(oldp+206,(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_ci));
        bufp->chgBit(oldp+207,(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_s));
        bufp->chgBit(oldp+208,(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_co));
        bufp->chgBit(oldp+209,(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_a));
        bufp->chgBit(oldp+210,(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_b));
        bufp->chgBit(oldp+211,(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_ci));
        bufp->chgBit(oldp+212,(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_s));
        bufp->chgBit(oldp+213,(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_co));
        bufp->chgBit(oldp+214,(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_a));
        bufp->chgBit(oldp+215,(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_b));
        bufp->chgBit(oldp+216,(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_ci));
        bufp->chgBit(oldp+217,(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_s));
        bufp->chgBit(oldp+218,(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_co));
        bufp->chgBit(oldp+219,(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_a));
        bufp->chgBit(oldp+220,(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_b));
        bufp->chgBit(oldp+221,(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_ci));
        bufp->chgBit(oldp+222,(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_s));
        bufp->chgBit(oldp+223,(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_co));
        bufp->chgBit(oldp+224,(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_a));
        bufp->chgBit(oldp+225,(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_b));
        bufp->chgBit(oldp+226,(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_ci));
        bufp->chgBit(oldp+227,(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_s));
        bufp->chgBit(oldp+228,(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_co));
        bufp->chgBit(oldp+229,(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_a));
        bufp->chgBit(oldp+230,(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_b));
        bufp->chgBit(oldp+231,(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_ci));
        bufp->chgBit(oldp+232,(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_s));
        bufp->chgBit(oldp+233,(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_co));
        bufp->chgBit(oldp+234,(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_a));
        bufp->chgBit(oldp+235,(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_b));
        bufp->chgBit(oldp+236,(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_ci));
        bufp->chgBit(oldp+237,(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_s));
        bufp->chgBit(oldp+238,(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_co));
        bufp->chgBit(oldp+239,(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_a));
        bufp->chgBit(oldp+240,(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_b));
        bufp->chgBit(oldp+241,(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_ci));
        bufp->chgBit(oldp+242,(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_s));
        bufp->chgBit(oldp+243,(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_co));
        bufp->chgBit(oldp+244,(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_a));
        bufp->chgBit(oldp+245,(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_b));
        bufp->chgBit(oldp+246,(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_ci));
        bufp->chgBit(oldp+247,(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_s));
        bufp->chgBit(oldp+248,(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_co));
        bufp->chgBit(oldp+249,(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_a));
        bufp->chgBit(oldp+250,(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_b));
        bufp->chgBit(oldp+251,(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_ci));
        bufp->chgBit(oldp+252,(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_s));
        bufp->chgBit(oldp+253,(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_co));
        bufp->chgBit(oldp+254,(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_a));
        bufp->chgBit(oldp+255,(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_b));
        bufp->chgBit(oldp+256,(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_ci));
        bufp->chgBit(oldp+257,(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_s));
        bufp->chgBit(oldp+258,(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_co));
        bufp->chgBit(oldp+259,(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_a));
        bufp->chgBit(oldp+260,(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_b));
        bufp->chgBit(oldp+261,(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_ci));
        bufp->chgBit(oldp+262,(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_s));
        bufp->chgBit(oldp+263,(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_co));
        bufp->chgBit(oldp+264,(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_a));
        bufp->chgBit(oldp+265,(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_b));
        bufp->chgBit(oldp+266,(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_ci));
        bufp->chgBit(oldp+267,(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_s));
        bufp->chgBit(oldp+268,(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_co));
        bufp->chgBit(oldp+269,(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_a));
        bufp->chgBit(oldp+270,(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_b));
        bufp->chgBit(oldp+271,(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_ci));
        bufp->chgBit(oldp+272,(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_s));
        bufp->chgBit(oldp+273,(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_co));
        bufp->chgBit(oldp+274,(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_a));
        bufp->chgBit(oldp+275,(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_b));
        bufp->chgBit(oldp+276,(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_ci));
        bufp->chgBit(oldp+277,(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_s));
        bufp->chgBit(oldp+278,(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_co));
        bufp->chgBit(oldp+279,(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_a));
        bufp->chgBit(oldp+280,(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_b));
        bufp->chgBit(oldp+281,(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_ci));
        bufp->chgBit(oldp+282,(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_s));
        bufp->chgBit(oldp+283,(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_co));
        bufp->chgBit(oldp+284,(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_a));
        bufp->chgBit(oldp+285,(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_b));
        bufp->chgBit(oldp+286,(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_ci));
        bufp->chgBit(oldp+287,(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_s));
        bufp->chgBit(oldp+288,(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_co));
        bufp->chgBit(oldp+289,(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_a));
        bufp->chgBit(oldp+290,(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_b));
        bufp->chgBit(oldp+291,(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_ci));
        bufp->chgBit(oldp+292,(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_s));
        bufp->chgBit(oldp+293,(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_co));
        bufp->chgBit(oldp+294,(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_a));
        bufp->chgBit(oldp+295,(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_b));
        bufp->chgBit(oldp+296,(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_ci));
        bufp->chgBit(oldp+297,(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_s));
        bufp->chgBit(oldp+298,(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_co));
        bufp->chgBit(oldp+299,(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_a));
        bufp->chgBit(oldp+300,(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_b));
        bufp->chgBit(oldp+301,(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_ci));
        bufp->chgBit(oldp+302,(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_s));
        bufp->chgBit(oldp+303,(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_co));
        bufp->chgBit(oldp+304,(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_a));
        bufp->chgBit(oldp+305,(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_b));
        bufp->chgBit(oldp+306,(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_ci));
        bufp->chgBit(oldp+307,(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_s));
        bufp->chgBit(oldp+308,(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_co));
        bufp->chgBit(oldp+309,(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_a));
        bufp->chgBit(oldp+310,(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_b));
        bufp->chgBit(oldp+311,(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_ci));
        bufp->chgBit(oldp+312,(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_s));
        bufp->chgBit(oldp+313,(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_co));
        bufp->chgBit(oldp+314,(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_a));
        bufp->chgBit(oldp+315,(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_b));
        bufp->chgBit(oldp+316,(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_ci));
        bufp->chgBit(oldp+317,(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_s));
        bufp->chgBit(oldp+318,(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_co));
        bufp->chgBit(oldp+319,(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_a));
        bufp->chgBit(oldp+320,(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_b));
        bufp->chgBit(oldp+321,(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_ci));
        bufp->chgBit(oldp+322,(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_s));
        bufp->chgBit(oldp+323,(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_co));
        bufp->chgBit(oldp+324,(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_a));
        bufp->chgBit(oldp+325,(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_b));
        bufp->chgBit(oldp+326,(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_ci));
        bufp->chgBit(oldp+327,(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_s));
        bufp->chgBit(oldp+328,(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_co));
        bufp->chgBit(oldp+329,(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_a));
        bufp->chgBit(oldp+330,(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_b));
        bufp->chgBit(oldp+331,(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_ci));
        bufp->chgBit(oldp+332,(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_s));
        bufp->chgBit(oldp+333,(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_co));
        bufp->chgBit(oldp+334,(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_a));
        bufp->chgBit(oldp+335,(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_b));
        bufp->chgBit(oldp+336,(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_ci));
        bufp->chgBit(oldp+337,(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_s));
        bufp->chgBit(oldp+338,(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_co));
        bufp->chgBit(oldp+339,(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_a));
        bufp->chgBit(oldp+340,(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_b));
        bufp->chgBit(oldp+341,(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_ci));
        bufp->chgBit(oldp+342,(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_s));
        bufp->chgBit(oldp+343,(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_co));
        bufp->chgBit(oldp+344,(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_a));
        bufp->chgBit(oldp+345,(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_b));
        bufp->chgBit(oldp+346,(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_ci));
        bufp->chgBit(oldp+347,(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_s));
        bufp->chgBit(oldp+348,(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_co));
        bufp->chgBit(oldp+349,(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_a));
        bufp->chgBit(oldp+350,(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_b));
        bufp->chgBit(oldp+351,(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_ci));
        bufp->chgBit(oldp+352,(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_s));
        bufp->chgBit(oldp+353,(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_co));
        bufp->chgBit(oldp+354,(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_a));
        bufp->chgBit(oldp+355,(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_b));
        bufp->chgBit(oldp+356,(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_ci));
        bufp->chgBit(oldp+357,(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_s));
        bufp->chgBit(oldp+358,(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_co));
        bufp->chgBit(oldp+359,(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_a));
        bufp->chgBit(oldp+360,(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_b));
        bufp->chgBit(oldp+361,(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_ci));
        bufp->chgBit(oldp+362,(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_s));
        bufp->chgBit(oldp+363,(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_co));
        bufp->chgBit(oldp+364,(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_a));
        bufp->chgBit(oldp+365,(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_b));
        bufp->chgBit(oldp+366,(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_ci));
        bufp->chgBit(oldp+367,(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_s));
        bufp->chgBit(oldp+368,(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_co));
        bufp->chgBit(oldp+369,(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_a));
        bufp->chgBit(oldp+370,(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_b));
        bufp->chgBit(oldp+371,(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_ci));
        bufp->chgBit(oldp+372,(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_s));
        bufp->chgBit(oldp+373,(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_co));
        bufp->chgBit(oldp+374,(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_a));
        bufp->chgBit(oldp+375,(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_b));
        bufp->chgBit(oldp+376,(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_ci));
        bufp->chgBit(oldp+377,(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_s));
        bufp->chgBit(oldp+378,(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_co));
        bufp->chgBit(oldp+379,(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_a));
        bufp->chgBit(oldp+380,(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_b));
        bufp->chgBit(oldp+381,(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_ci));
        bufp->chgBit(oldp+382,(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_s));
        bufp->chgBit(oldp+383,(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_co));
        bufp->chgBit(oldp+384,(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_a));
        bufp->chgBit(oldp+385,(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_b));
        bufp->chgBit(oldp+386,(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_ci));
        bufp->chgBit(oldp+387,(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_s));
        bufp->chgBit(oldp+388,(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_co));
        bufp->chgBit(oldp+389,(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_a));
        bufp->chgBit(oldp+390,(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_b));
        bufp->chgBit(oldp+391,(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_ci));
        bufp->chgBit(oldp+392,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_b)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_ci))));
        bufp->chgBit(oldp+393,(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_co));
        bufp->chgBit(oldp+394,(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_a));
        bufp->chgBit(oldp+395,(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_b));
        bufp->chgBit(oldp+396,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_b)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_co))));
        bufp->chgBit(oldp+397,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_a) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_b)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_b) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_a) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_co)))));
        bufp->chgBit(oldp+398,(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_a));
        bufp->chgBit(oldp+399,(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_s));
        bufp->chgBit(oldp+400,(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_co));
        bufp->chgBit(oldp+401,(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_a));
        bufp->chgBit(oldp+402,(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_b));
        bufp->chgBit(oldp+403,(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_s));
        bufp->chgBit(oldp+404,(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_co));
        bufp->chgBit(oldp+405,(vlSelf->MAC__DOT__wt__DOT__FullAdder_78_io_s));
        bufp->chgBit(oldp+406,(vlSelf->MAC__DOT__wt__DOT__FullAdder_78_io_co));
        bufp->chgBit(oldp+407,(vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_a));
        bufp->chgBit(oldp+408,(vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_s));
        bufp->chgBit(oldp+409,(vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_co));
        bufp->chgBit(oldp+410,(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_a));
        bufp->chgBit(oldp+411,(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_b));
        bufp->chgBit(oldp+412,(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_s));
        bufp->chgBit(oldp+413,(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_co));
        bufp->chgBit(oldp+414,(vlSelf->MAC__DOT__wt__DOT__FullAdder_81_io_s));
        bufp->chgBit(oldp+415,(vlSelf->MAC__DOT__wt__DOT__FullAdder_81_io_co));
        bufp->chgBit(oldp+416,(vlSelf->MAC__DOT__wt__DOT__FullAdder_82_io_s));
        bufp->chgBit(oldp+417,(vlSelf->MAC__DOT__wt__DOT__FullAdder_82_io_co));
        bufp->chgBit(oldp+418,(vlSelf->MAC__DOT__wt__DOT__FullAdder_83_io_s));
        bufp->chgBit(oldp+419,(vlSelf->MAC__DOT__wt__DOT__FullAdder_83_io_co));
        bufp->chgBit(oldp+420,(vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_a));
        bufp->chgBit(oldp+421,(vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_s));
        bufp->chgBit(oldp+422,(vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_co));
        bufp->chgBit(oldp+423,(vlSelf->MAC__DOT__wt__DOT__FullAdder_85_io_s));
        bufp->chgBit(oldp+424,(vlSelf->MAC__DOT__wt__DOT__FullAdder_85_io_co));
        bufp->chgBit(oldp+425,(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_a));
        bufp->chgBit(oldp+426,(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_b));
        bufp->chgBit(oldp+427,(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_s));
        bufp->chgBit(oldp+428,(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_co));
        bufp->chgBit(oldp+429,(vlSelf->MAC__DOT__wt__DOT__FullAdder_87_io_s));
        bufp->chgBit(oldp+430,(vlSelf->MAC__DOT__wt__DOT__FullAdder_87_io_co));
        bufp->chgBit(oldp+431,(vlSelf->MAC__DOT__wt__DOT__FullAdder_88_io_s));
        bufp->chgBit(oldp+432,(vlSelf->MAC__DOT__wt__DOT__FullAdder_88_io_co));
        bufp->chgBit(oldp+433,(vlSelf->MAC__DOT__wt__DOT__FullAdder_89_io_s));
        bufp->chgBit(oldp+434,(vlSelf->MAC__DOT__wt__DOT__FullAdder_89_io_co));
        bufp->chgBit(oldp+435,(vlSelf->MAC__DOT__wt__DOT__FullAdder_90_io_s));
        bufp->chgBit(oldp+436,(vlSelf->MAC__DOT__wt__DOT__FullAdder_90_io_co));
        bufp->chgBit(oldp+437,(vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_a));
        bufp->chgBit(oldp+438,(vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_s));
        bufp->chgBit(oldp+439,(vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_co));
        bufp->chgBit(oldp+440,(vlSelf->MAC__DOT__wt__DOT__FullAdder_92_io_s));
        bufp->chgBit(oldp+441,(vlSelf->MAC__DOT__wt__DOT__FullAdder_92_io_co));
        bufp->chgBit(oldp+442,(vlSelf->MAC__DOT__wt__DOT__FullAdder_93_io_s));
        bufp->chgBit(oldp+443,(vlSelf->MAC__DOT__wt__DOT__FullAdder_93_io_co));
        bufp->chgBit(oldp+444,(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_a));
        bufp->chgBit(oldp+445,(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_b));
        bufp->chgBit(oldp+446,(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_s));
        bufp->chgBit(oldp+447,(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_co));
        bufp->chgBit(oldp+448,(vlSelf->MAC__DOT__wt__DOT__FullAdder_95_io_s));
        bufp->chgBit(oldp+449,(vlSelf->MAC__DOT__wt__DOT__FullAdder_95_io_co));
        bufp->chgBit(oldp+450,(vlSelf->MAC__DOT__wt__DOT__FullAdder_96_io_s));
        bufp->chgBit(oldp+451,(vlSelf->MAC__DOT__wt__DOT__FullAdder_96_io_co));
        bufp->chgBit(oldp+452,(vlSelf->MAC__DOT__wt__DOT__FullAdder_97_io_s));
        bufp->chgBit(oldp+453,(vlSelf->MAC__DOT__wt__DOT__FullAdder_97_io_co));
        bufp->chgBit(oldp+454,(vlSelf->MAC__DOT__wt__DOT__FullAdder_98_io_s));
        bufp->chgBit(oldp+455,(vlSelf->MAC__DOT__wt__DOT__FullAdder_98_io_co));
        bufp->chgBit(oldp+456,(vlSelf->MAC__DOT__wt__DOT__FullAdder_99_io_s));
        bufp->chgBit(oldp+457,(vlSelf->MAC__DOT__wt__DOT__FullAdder_99_io_co));
        bufp->chgBit(oldp+458,(vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_a));
        bufp->chgBit(oldp+459,(vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_s));
        bufp->chgBit(oldp+460,(vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_co));
        bufp->chgBit(oldp+461,(vlSelf->MAC__DOT__wt__DOT__FullAdder_101_io_s));
        bufp->chgBit(oldp+462,(vlSelf->MAC__DOT__wt__DOT__FullAdder_101_io_co));
        bufp->chgBit(oldp+463,(vlSelf->MAC__DOT__wt__DOT__FullAdder_102_io_s));
        bufp->chgBit(oldp+464,(vlSelf->MAC__DOT__wt__DOT__FullAdder_102_io_co));
        bufp->chgBit(oldp+465,(vlSelf->MAC__DOT__wt__DOT__FullAdder_103_io_s));
        bufp->chgBit(oldp+466,(vlSelf->MAC__DOT__wt__DOT__FullAdder_103_io_co));
        bufp->chgBit(oldp+467,(vlSelf->MAC__DOT__wt__DOT__FullAdder_104_io_s));
        bufp->chgBit(oldp+468,(vlSelf->MAC__DOT__wt__DOT__FullAdder_104_io_co));
        bufp->chgBit(oldp+469,(vlSelf->MAC__DOT__wt__DOT__FullAdder_105_io_s));
        bufp->chgBit(oldp+470,(vlSelf->MAC__DOT__wt__DOT__FullAdder_105_io_co));
        bufp->chgBit(oldp+471,(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_a));
        bufp->chgBit(oldp+472,(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_b));
        bufp->chgBit(oldp+473,(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_s));
        bufp->chgBit(oldp+474,(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_co));
        bufp->chgBit(oldp+475,(vlSelf->MAC__DOT__wt__DOT__FullAdder_107_io_s));
        bufp->chgBit(oldp+476,(vlSelf->MAC__DOT__wt__DOT__FullAdder_107_io_co));
        bufp->chgBit(oldp+477,(vlSelf->MAC__DOT__wt__DOT__FullAdder_108_io_s));
        bufp->chgBit(oldp+478,(vlSelf->MAC__DOT__wt__DOT__FullAdder_108_io_co));
        bufp->chgBit(oldp+479,(vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_a));
        bufp->chgBit(oldp+480,(vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_s));
        bufp->chgBit(oldp+481,(vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_co));
        bufp->chgBit(oldp+482,(vlSelf->MAC__DOT__wt__DOT__FullAdder_110_io_s));
        bufp->chgBit(oldp+483,(vlSelf->MAC__DOT__wt__DOT__FullAdder_110_io_co));
        bufp->chgBit(oldp+484,(vlSelf->MAC__DOT__wt__DOT__FullAdder_111_io_s));
        bufp->chgBit(oldp+485,(vlSelf->MAC__DOT__wt__DOT__FullAdder_111_io_co));
        bufp->chgBit(oldp+486,(vlSelf->MAC__DOT__wt__DOT__FullAdder_112_io_s));
        bufp->chgBit(oldp+487,(vlSelf->MAC__DOT__wt__DOT__FullAdder_112_io_co));
        bufp->chgBit(oldp+488,(vlSelf->MAC__DOT__wt__DOT__FullAdder_113_io_s));
        bufp->chgBit(oldp+489,(vlSelf->MAC__DOT__wt__DOT__FullAdder_113_io_co));
        bufp->chgBit(oldp+490,(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_a));
        bufp->chgBit(oldp+491,(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_b));
        bufp->chgBit(oldp+492,(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_s));
        bufp->chgBit(oldp+493,(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_co));
        bufp->chgBit(oldp+494,(vlSelf->MAC__DOT__wt__DOT__FullAdder_115_io_s));
        bufp->chgBit(oldp+495,(vlSelf->MAC__DOT__wt__DOT__FullAdder_115_io_co));
        bufp->chgBit(oldp+496,(vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_a));
        bufp->chgBit(oldp+497,(vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_s));
        bufp->chgBit(oldp+498,(vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_co));
        bufp->chgBit(oldp+499,(vlSelf->MAC__DOT__wt__DOT__FullAdder_117_io_s));
        bufp->chgBit(oldp+500,(vlSelf->MAC__DOT__wt__DOT__FullAdder_117_io_co));
        bufp->chgBit(oldp+501,(vlSelf->MAC__DOT__wt__DOT__FullAdder_118_io_s));
        bufp->chgBit(oldp+502,(vlSelf->MAC__DOT__wt__DOT__FullAdder_118_io_co));
        bufp->chgBit(oldp+503,(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_a));
        bufp->chgBit(oldp+504,(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_b));
        bufp->chgBit(oldp+505,(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_s));
        bufp->chgBit(oldp+506,(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_co));
        bufp->chgBit(oldp+507,(vlSelf->MAC__DOT__wt__DOT__FullAdder_120_io_s));
        bufp->chgBit(oldp+508,(vlSelf->MAC__DOT__wt__DOT__FullAdder_120_io_co));
        bufp->chgBit(oldp+509,(vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_a));
        bufp->chgBit(oldp+510,(vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_s));
        bufp->chgBit(oldp+511,(vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_co));
        bufp->chgBit(oldp+512,(vlSelf->MAC__DOT__wt__DOT__FullAdder_122_io_s));
        bufp->chgBit(oldp+513,(vlSelf->MAC__DOT__wt__DOT__FullAdder_122_io_co));
        bufp->chgBit(oldp+514,(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_a));
        bufp->chgBit(oldp+515,(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_b));
        bufp->chgBit(oldp+516,(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_s));
        bufp->chgBit(oldp+517,(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_co));
        bufp->chgBit(oldp+518,(vlSelf->MAC__DOT__wt__DOT__FullAdder_124_io_a));
        bufp->chgBit(oldp+519,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_124_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_co))));
        bufp->chgBit(oldp+520,(vlSelf->MAC__DOT__wt__DOT__FullAdder_124_io_co));
        bufp->chgBit(oldp+521,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_co)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_co))));
        bufp->chgBit(oldp+522,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_s) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_co)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_co) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_s) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_co)))));
        bufp->chgBit(oldp+523,(vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_s));
        bufp->chgBit(oldp+524,(vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_co));
        bufp->chgBit(oldp+525,(vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_s));
        bufp->chgBit(oldp+526,(vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_co));
        bufp->chgBit(oldp+527,(vlSelf->MAC__DOT__wt__DOT__FullAdder_128_io_s));
        bufp->chgBit(oldp+528,(vlSelf->MAC__DOT__wt__DOT__FullAdder_128_io_co));
        bufp->chgBit(oldp+529,(vlSelf->MAC__DOT__wt__DOT__FullAdder_129_io_s));
        bufp->chgBit(oldp+530,(vlSelf->MAC__DOT__wt__DOT__FullAdder_129_io_co));
        bufp->chgBit(oldp+531,(vlSelf->MAC__DOT__wt__DOT__FullAdder_130_io_s));
        bufp->chgBit(oldp+532,(vlSelf->MAC__DOT__wt__DOT__FullAdder_130_io_co));
        bufp->chgBit(oldp+533,(vlSelf->MAC__DOT__wt__DOT__FullAdder_131_io_s));
        bufp->chgBit(oldp+534,(vlSelf->MAC__DOT__wt__DOT__FullAdder_131_io_co));
        bufp->chgBit(oldp+535,(vlSelf->MAC__DOT__wt__DOT__FullAdder_132_io_s));
        bufp->chgBit(oldp+536,(vlSelf->MAC__DOT__wt__DOT__FullAdder_132_io_co));
        bufp->chgBit(oldp+537,(vlSelf->MAC__DOT__wt__DOT__FullAdder_133_io_s));
        bufp->chgBit(oldp+538,(vlSelf->MAC__DOT__wt__DOT__FullAdder_133_io_co));
        bufp->chgBit(oldp+539,(vlSelf->MAC__DOT__wt__DOT__FullAdder_134_io_s));
        bufp->chgBit(oldp+540,(vlSelf->MAC__DOT__wt__DOT__FullAdder_134_io_co));
        bufp->chgBit(oldp+541,(vlSelf->MAC__DOT__wt__DOT__FullAdder_135_io_s));
        bufp->chgBit(oldp+542,(vlSelf->MAC__DOT__wt__DOT__FullAdder_135_io_co));
        bufp->chgBit(oldp+543,(vlSelf->MAC__DOT__wt__DOT__FullAdder_136_io_s));
        bufp->chgBit(oldp+544,(vlSelf->MAC__DOT__wt__DOT__FullAdder_136_io_co));
        bufp->chgBit(oldp+545,(vlSelf->MAC__DOT__wt__DOT__FullAdder_137_io_s));
        bufp->chgBit(oldp+546,(vlSelf->MAC__DOT__wt__DOT__FullAdder_137_io_co));
        bufp->chgBit(oldp+547,(vlSelf->MAC__DOT__wt__DOT__FullAdder_138_io_s));
        bufp->chgBit(oldp+548,(vlSelf->MAC__DOT__wt__DOT__FullAdder_138_io_co));
        bufp->chgBit(oldp+549,(vlSelf->MAC__DOT__wt__DOT__FullAdder_139_io_s));
        bufp->chgBit(oldp+550,(vlSelf->MAC__DOT__wt__DOT__FullAdder_139_io_co));
        bufp->chgBit(oldp+551,(vlSelf->MAC__DOT__wt__DOT__FullAdder_140_io_s));
        bufp->chgBit(oldp+552,(vlSelf->MAC__DOT__wt__DOT__FullAdder_140_io_co));
        bufp->chgBit(oldp+553,(vlSelf->MAC__DOT__wt__DOT__FullAdder_141_io_s));
        bufp->chgBit(oldp+554,(vlSelf->MAC__DOT__wt__DOT__FullAdder_141_io_co));
        bufp->chgBit(oldp+555,(vlSelf->MAC__DOT__wt__DOT__FullAdder_142_io_s));
        bufp->chgBit(oldp+556,(vlSelf->MAC__DOT__wt__DOT__FullAdder_142_io_co));
        bufp->chgBit(oldp+557,(vlSelf->MAC__DOT__wt__DOT__FullAdder_143_io_s));
        bufp->chgBit(oldp+558,(vlSelf->MAC__DOT__wt__DOT__FullAdder_143_io_co));
        bufp->chgBit(oldp+559,(vlSelf->MAC__DOT__wt__DOT__FullAdder_144_io_s));
        bufp->chgBit(oldp+560,(vlSelf->MAC__DOT__wt__DOT__FullAdder_144_io_co));
        bufp->chgBit(oldp+561,(vlSelf->MAC__DOT__wt__DOT__FullAdder_145_io_s));
        bufp->chgBit(oldp+562,(vlSelf->MAC__DOT__wt__DOT__FullAdder_145_io_co));
        bufp->chgBit(oldp+563,(vlSelf->MAC__DOT__wt__DOT__FullAdder_146_io_s));
        bufp->chgBit(oldp+564,(vlSelf->MAC__DOT__wt__DOT__FullAdder_146_io_co));
        bufp->chgBit(oldp+565,(vlSelf->MAC__DOT__wt__DOT__FullAdder_147_io_s));
        bufp->chgBit(oldp+566,(vlSelf->MAC__DOT__wt__DOT__FullAdder_147_io_co));
        bufp->chgBit(oldp+567,(vlSelf->MAC__DOT__wt__DOT__FullAdder_148_io_s));
        bufp->chgBit(oldp+568,(vlSelf->MAC__DOT__wt__DOT__FullAdder_148_io_co));
        bufp->chgBit(oldp+569,(vlSelf->MAC__DOT__wt__DOT__FullAdder_149_io_s));
        bufp->chgBit(oldp+570,(vlSelf->MAC__DOT__wt__DOT__FullAdder_149_io_co));
        bufp->chgBit(oldp+571,(vlSelf->MAC__DOT__wt__DOT__FullAdder_150_io_s));
        bufp->chgBit(oldp+572,(vlSelf->MAC__DOT__wt__DOT__FullAdder_150_io_co));
        bufp->chgBit(oldp+573,(vlSelf->MAC__DOT__wt__DOT__FullAdder_151_io_s));
        bufp->chgBit(oldp+574,(vlSelf->MAC__DOT__wt__DOT__FullAdder_151_io_co));
        bufp->chgBit(oldp+575,(vlSelf->MAC__DOT__wt__DOT__FullAdder_152_io_s));
        bufp->chgBit(oldp+576,(vlSelf->MAC__DOT__wt__DOT__FullAdder_152_io_co));
        bufp->chgBit(oldp+577,(vlSelf->MAC__DOT__wt__DOT__FullAdder_153_io_s));
        bufp->chgBit(oldp+578,(vlSelf->MAC__DOT__wt__DOT__FullAdder_153_io_co));
        bufp->chgBit(oldp+579,(vlSelf->MAC__DOT__wt__DOT__HalfAdder_io_s));
        bufp->chgBit(oldp+580,(vlSelf->MAC__DOT__wt__DOT__HalfAdder_io_co));
        bufp->chgBit(oldp+581,(vlSelf->MAC__DOT__wt__DOT__FullAdder_154_io_s));
        bufp->chgBit(oldp+582,(vlSelf->MAC__DOT__wt__DOT__FullAdder_154_io_co));
        bufp->chgBit(oldp+583,(vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_s));
        bufp->chgBit(oldp+584,(vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_co));
        bufp->chgBit(oldp+585,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_124_io_co))));
        bufp->chgBit(oldp+586,(vlSelf->MAC__DOT__wt__DOT__FullAdder_156_io_co));
        bufp->chgBit(oldp+587,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_co)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_co))));
        bufp->chgBit(oldp+588,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_s) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_co)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_co) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_s) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_co)))));
        bufp->chgBit(oldp+589,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_78_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_co))));
        bufp->chgBit(oldp+590,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_78_io_co) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_s)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_s) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_78_io_co) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_co)))));
        bufp->chgBit(oldp+591,(vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_s));
        bufp->chgBit(oldp+592,(vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_co));
        bufp->chgBit(oldp+593,(vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_s));
        bufp->chgBit(oldp+594,(vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_co));
        bufp->chgBit(oldp+595,(vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_s));
        bufp->chgBit(oldp+596,(vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_co));
        bufp->chgBit(oldp+597,(vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_s));
        bufp->chgBit(oldp+598,(vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_co));
        bufp->chgBit(oldp+599,(vlSelf->MAC__DOT__wt__DOT__FullAdder_163_io_s));
        bufp->chgBit(oldp+600,(vlSelf->MAC__DOT__wt__DOT__FullAdder_163_io_co));
        bufp->chgBit(oldp+601,(vlSelf->MAC__DOT__wt__DOT__FullAdder_164_io_s));
        bufp->chgBit(oldp+602,(vlSelf->MAC__DOT__wt__DOT__FullAdder_164_io_co));
        bufp->chgBit(oldp+603,(vlSelf->MAC__DOT__wt__DOT__FullAdder_165_io_s));
        bufp->chgBit(oldp+604,(vlSelf->MAC__DOT__wt__DOT__FullAdder_165_io_co));
        bufp->chgBit(oldp+605,(vlSelf->MAC__DOT__wt__DOT__FullAdder_166_io_s));
        bufp->chgBit(oldp+606,(vlSelf->MAC__DOT__wt__DOT__FullAdder_166_io_co));
        bufp->chgBit(oldp+607,(vlSelf->MAC__DOT__wt__DOT__FullAdder_167_io_s));
        bufp->chgBit(oldp+608,(vlSelf->MAC__DOT__wt__DOT__FullAdder_167_io_co));
        bufp->chgBit(oldp+609,(vlSelf->MAC__DOT__wt__DOT__FullAdder_168_io_s));
        bufp->chgBit(oldp+610,(vlSelf->MAC__DOT__wt__DOT__FullAdder_168_io_co));
        bufp->chgBit(oldp+611,(vlSelf->MAC__DOT__wt__DOT__FullAdder_169_io_s));
        bufp->chgBit(oldp+612,(vlSelf->MAC__DOT__wt__DOT__FullAdder_169_io_co));
        bufp->chgBit(oldp+613,(vlSelf->MAC__DOT__wt__DOT__FullAdder_170_io_s));
        bufp->chgBit(oldp+614,(vlSelf->MAC__DOT__wt__DOT__FullAdder_170_io_co));
        bufp->chgBit(oldp+615,(vlSelf->MAC__DOT__wt__DOT__FullAdder_171_io_s));
        bufp->chgBit(oldp+616,(vlSelf->MAC__DOT__wt__DOT__FullAdder_171_io_co));
        bufp->chgBit(oldp+617,(vlSelf->MAC__DOT__wt__DOT__FullAdder_172_io_s));
        bufp->chgBit(oldp+618,(vlSelf->MAC__DOT__wt__DOT__FullAdder_172_io_co));
        bufp->chgBit(oldp+619,(vlSelf->MAC__DOT__wt__DOT__FullAdder_173_io_s));
        bufp->chgBit(oldp+620,(vlSelf->MAC__DOT__wt__DOT__FullAdder_173_io_co));
        bufp->chgBit(oldp+621,(vlSelf->MAC__DOT__wt__DOT__FullAdder_174_io_s));
        bufp->chgBit(oldp+622,(vlSelf->MAC__DOT__wt__DOT__FullAdder_174_io_co));
        bufp->chgBit(oldp+623,(vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_s));
        bufp->chgBit(oldp+624,(vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_co));
        bufp->chgBit(oldp+625,(vlSelf->MAC__DOT__wt__DOT__FullAdder_175_io_s));
        bufp->chgBit(oldp+626,(vlSelf->MAC__DOT__wt__DOT__FullAdder_175_io_co));
        bufp->chgBit(oldp+627,(vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_s));
        bufp->chgBit(oldp+628,(vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_co));
        bufp->chgBit(oldp+629,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_153_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_154_io_co))));
        bufp->chgBit(oldp+630,(vlSelf->MAC__DOT__wt__DOT__FullAdder_177_io_co));
        bufp->chgBit(oldp+631,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_122_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_co)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_156_io_co))));
        bufp->chgBit(oldp+632,(vlSelf->MAC__DOT__wt__DOT__FullAdder_178_io_co));
        bufp->chgBit(oldp+633,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_128_io_co)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_co))));
        bufp->chgBit(oldp+634,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_s) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_128_io_co)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_128_io_co) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_s) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_co)))));
        bufp->chgBit(oldp+635,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_129_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_co))));
        bufp->chgBit(oldp+636,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_129_io_co) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_s)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_s) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_129_io_co) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_co)))));
        bufp->chgBit(oldp+637,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_130_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_co))));
        bufp->chgBit(oldp+638,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_130_io_co) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_s)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_s) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_130_io_co) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_co)))));
        bufp->chgBit(oldp+639,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_132_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_co))));
        bufp->chgBit(oldp+640,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_132_io_co) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_s)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_s) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_132_io_co) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_co)))));
        bufp->chgBit(oldp+641,(vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_s));
        bufp->chgBit(oldp+642,(vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_co));
        bufp->chgBit(oldp+643,(vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_s));
        bufp->chgBit(oldp+644,(vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_co));
        bufp->chgBit(oldp+645,(vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_s));
        bufp->chgBit(oldp+646,(vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_co));
        bufp->chgBit(oldp+647,(vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_s));
        bufp->chgBit(oldp+648,(vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_co));
        bufp->chgBit(oldp+649,(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_s));
        bufp->chgBit(oldp+650,(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_co));
        bufp->chgBit(oldp+651,(vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_s));
        bufp->chgBit(oldp+652,(vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_co));
        bufp->chgBit(oldp+653,(vlSelf->MAC__DOT__wt__DOT__FullAdder_188_io_s));
        bufp->chgBit(oldp+654,(vlSelf->MAC__DOT__wt__DOT__FullAdder_188_io_co));
        bufp->chgBit(oldp+655,(vlSelf->MAC__DOT__wt__DOT__FullAdder_189_io_s));
        bufp->chgBit(oldp+656,(vlSelf->MAC__DOT__wt__DOT__FullAdder_189_io_co));
        bufp->chgBit(oldp+657,(vlSelf->MAC__DOT__wt__DOT__FullAdder_190_io_s));
        bufp->chgBit(oldp+658,(vlSelf->MAC__DOT__wt__DOT__FullAdder_190_io_co));
        bufp->chgBit(oldp+659,(vlSelf->MAC__DOT__wt__DOT__FullAdder_191_io_s));
        bufp->chgBit(oldp+660,(vlSelf->MAC__DOT__wt__DOT__FullAdder_191_io_co));
        bufp->chgBit(oldp+661,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_174_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_175_io_co))));
        bufp->chgBit(oldp+662,(vlSelf->MAC__DOT__wt__DOT__FullAdder_192_io_co));
        bufp->chgBit(oldp+663,((((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_177_io_co))));
        bufp->chgBit(oldp+664,(vlSelf->MAC__DOT__wt__DOT__FullAdder_193_io_co));
        bufp->chgBit(oldp+665,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_122_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_178_io_co))));
        bufp->chgBit(oldp+666,(vlSelf->MAC__DOT__wt__DOT__FullAdder_194_io_co));
        bufp->chgBit(oldp+667,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_163_io_co)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_co))));
        bufp->chgBit(oldp+668,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_s) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_163_io_co)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_163_io_co) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_s) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_co)))));
        bufp->chgBit(oldp+669,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_164_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_co))));
        bufp->chgBit(oldp+670,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_164_io_co) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_s)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_s) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_164_io_co) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_co)))));
        bufp->chgBit(oldp+671,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_165_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_co))));
        bufp->chgBit(oldp+672,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_165_io_co) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_s)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_s) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_165_io_co) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_co)))));
        bufp->chgBit(oldp+673,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_167_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_co))));
        bufp->chgBit(oldp+674,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_167_io_co) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_s)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_s) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_167_io_co) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_co)))));
        bufp->chgBit(oldp+675,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_co)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_co))));
        bufp->chgBit(oldp+676,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_s) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_co)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_co) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_s) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_co)))));
        bufp->chgBit(oldp+677,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_188_io_co))));
        bufp->chgBit(oldp+678,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_s) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_s)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_s) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_188_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_s) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_188_io_co)))));
        bufp->chgBit(oldp+679,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_188_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_189_io_co))));
        bufp->chgBit(oldp+680,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_188_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_189_io_co))));
        bufp->chgBit(oldp+681,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_189_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_190_io_co))));
        bufp->chgBit(oldp+682,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_189_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_190_io_co))));
        bufp->chgBit(oldp+683,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_190_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_191_io_co))));
        bufp->chgBit(oldp+684,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_190_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_191_io_co))));
        bufp->chgBit(oldp+685,((((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_191_io_s)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_192_io_co))));
        bufp->chgBit(oldp+686,(((((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_co) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_191_io_s)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_191_io_s) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_192_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_co) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_192_io_co)))));
        bufp->chgBit(oldp+687,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_175_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_co)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_193_io_co))));
        bufp->chgBit(oldp+688,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_175_io_s) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_co)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_co) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_193_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_175_io_s) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_193_io_co)))));
        bufp->chgBit(oldp+689,((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_154_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_co)) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_194_io_co))));
        bufp->chgBit(oldp+690,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_154_io_s) 
                                  & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_co)) 
                                 | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_co) 
                                    & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_194_io_co))) 
                                | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_154_io_s) 
                                   & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_194_io_co)))));
        bufp->chgBit(oldp+691,(vlSelf->MAC__DOT__pp__DOT___T_21));
        bufp->chgBit(oldp+692,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_b))));
        bufp->chgBit(oldp+693,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_b))));
        bufp->chgBit(oldp+694,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_ci))));
        bufp->chgBit(oldp+695,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_b) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_ci))));
        bufp->chgBit(oldp+696,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_b))));
        bufp->chgBit(oldp+697,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_b))));
        bufp->chgBit(oldp+698,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_ci))));
        bufp->chgBit(oldp+699,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_b) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_ci))));
        bufp->chgBit(oldp+700,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_b))));
        bufp->chgBit(oldp+701,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_b))));
        bufp->chgBit(oldp+702,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_ci))));
        bufp->chgBit(oldp+703,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_b) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_ci))));
        bufp->chgBit(oldp+704,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_s))));
        bufp->chgBit(oldp+705,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_s))));
        bufp->chgBit(oldp+706,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_s))));
        bufp->chgBit(oldp+707,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_s))));
        bufp->chgBit(oldp+708,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_s))));
        bufp->chgBit(oldp+709,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_s))));
        bufp->chgBit(oldp+710,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_s))));
        bufp->chgBit(oldp+711,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_s))));
        bufp->chgBit(oldp+712,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_co))));
        bufp->chgBit(oldp+713,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_co))));
        bufp->chgBit(oldp+714,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_co))));
        bufp->chgBit(oldp+715,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_co))));
        bufp->chgBit(oldp+716,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_s))));
        bufp->chgBit(oldp+717,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_s))));
        bufp->chgBit(oldp+718,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_s))));
        bufp->chgBit(oldp+719,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_s))));
        bufp->chgBit(oldp+720,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_s))));
        bufp->chgBit(oldp+721,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_s))));
        bufp->chgBit(oldp+722,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_co))));
        bufp->chgBit(oldp+723,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_co))));
        bufp->chgBit(oldp+724,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_co))));
        bufp->chgBit(oldp+725,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_co))));
        bufp->chgBit(oldp+726,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_co))));
        bufp->chgBit(oldp+727,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_co))));
        bufp->chgBit(oldp+728,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_b))));
        bufp->chgBit(oldp+729,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_b))));
        bufp->chgBit(oldp+730,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_s))));
        bufp->chgBit(oldp+731,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_b) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_s))));
        bufp->chgBit(oldp+732,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_s))));
        bufp->chgBit(oldp+733,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_s))));
        bufp->chgBit(oldp+734,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_s))));
        bufp->chgBit(oldp+735,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_s))));
        bufp->chgBit(oldp+736,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_co))));
        bufp->chgBit(oldp+737,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_co))));
        bufp->chgBit(oldp+738,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_co))));
        bufp->chgBit(oldp+739,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_co))));
        bufp->chgBit(oldp+740,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_s))));
        bufp->chgBit(oldp+741,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_s))));
        bufp->chgBit(oldp+742,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_s))));
        bufp->chgBit(oldp+743,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_s))));
        bufp->chgBit(oldp+744,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_b))));
        bufp->chgBit(oldp+745,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_b))));
        bufp->chgBit(oldp+746,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_ci))));
        bufp->chgBit(oldp+747,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_b) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_ci))));
        bufp->chgBit(oldp+748,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_s))));
        bufp->chgBit(oldp+749,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_s))));
        bufp->chgBit(oldp+750,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_co))));
        bufp->chgBit(oldp+751,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_co))));
        bufp->chgBit(oldp+752,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_co))));
        bufp->chgBit(oldp+753,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_co))));
        bufp->chgBit(oldp+754,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_co))));
        bufp->chgBit(oldp+755,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_co))));
        bufp->chgBit(oldp+756,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_s))));
        bufp->chgBit(oldp+757,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_s))));
        bufp->chgBit(oldp+758,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_s))));
        bufp->chgBit(oldp+759,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_s))));
        bufp->chgBit(oldp+760,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_co))));
        bufp->chgBit(oldp+761,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_co))));
        bufp->chgBit(oldp+762,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_co))));
        bufp->chgBit(oldp+763,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_co))));
        bufp->chgBit(oldp+764,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_b))));
        bufp->chgBit(oldp+765,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_b))));
        bufp->chgBit(oldp+766,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_s))));
        bufp->chgBit(oldp+767,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_b) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_s))));
        bufp->chgBit(oldp+768,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_s))));
        bufp->chgBit(oldp+769,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_s))));
        bufp->chgBit(oldp+770,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_co))));
        bufp->chgBit(oldp+771,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_co))));
        bufp->chgBit(oldp+772,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_s))));
        bufp->chgBit(oldp+773,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_s))));
        bufp->chgBit(oldp+774,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_s))));
        bufp->chgBit(oldp+775,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_s))));
        bufp->chgBit(oldp+776,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_co))));
        bufp->chgBit(oldp+777,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_co))));
        bufp->chgBit(oldp+778,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_co))));
        bufp->chgBit(oldp+779,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_co))));
        bufp->chgBit(oldp+780,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_s))));
        bufp->chgBit(oldp+781,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_s))));
        bufp->chgBit(oldp+782,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_s))));
        bufp->chgBit(oldp+783,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_s))));
        bufp->chgBit(oldp+784,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_b))));
        bufp->chgBit(oldp+785,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_b))));
        bufp->chgBit(oldp+786,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_s))));
        bufp->chgBit(oldp+787,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_b) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_s))));
        bufp->chgBit(oldp+788,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_b))));
        bufp->chgBit(oldp+789,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_b))));
        bufp->chgBit(oldp+790,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_ci))));
        bufp->chgBit(oldp+791,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_b) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_ci))));
        bufp->chgBit(oldp+792,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_co))));
        bufp->chgBit(oldp+793,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_co))));
        bufp->chgBit(oldp+794,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_co))));
        bufp->chgBit(oldp+795,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_co))));
        bufp->chgBit(oldp+796,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_s))));
        bufp->chgBit(oldp+797,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_s))));
        bufp->chgBit(oldp+798,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_s))));
        bufp->chgBit(oldp+799,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_s))));
        bufp->chgBit(oldp+800,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_s))));
        bufp->chgBit(oldp+801,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_s))));
        bufp->chgBit(oldp+802,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_co))));
        bufp->chgBit(oldp+803,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_co))));
        bufp->chgBit(oldp+804,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_b))));
        bufp->chgBit(oldp+805,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_b))));
        bufp->chgBit(oldp+806,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_s))));
        bufp->chgBit(oldp+807,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_b) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_s))));
        bufp->chgBit(oldp+808,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_124_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_s))));
        bufp->chgBit(oldp+809,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_124_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_s))));
        bufp->chgBit(oldp+810,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_124_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_co))));
        bufp->chgBit(oldp+811,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_co))));
        bufp->chgBit(oldp+812,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_co))));
        bufp->chgBit(oldp+813,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_co))));
        bufp->chgBit(oldp+814,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_co))));
        bufp->chgBit(oldp+815,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_co))));
        bufp->chgBit(oldp+816,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_co))));
        bufp->chgBit(oldp+817,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_co))));
        bufp->chgBit(oldp+818,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_s))));
        bufp->chgBit(oldp+819,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_s))));
        bufp->chgBit(oldp+820,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_78_io_s))));
        bufp->chgBit(oldp+821,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_78_io_s))));
        bufp->chgBit(oldp+822,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_co))));
        bufp->chgBit(oldp+823,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_78_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_co))));
        bufp->chgBit(oldp+824,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_co))));
        bufp->chgBit(oldp+825,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_co))));
        bufp->chgBit(oldp+826,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_s))));
        bufp->chgBit(oldp+827,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_s))));
        bufp->chgBit(oldp+828,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_s))));
        bufp->chgBit(oldp+829,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_s))));
        bufp->chgBit(oldp+830,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_81_io_s))));
        bufp->chgBit(oldp+831,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_81_io_s))));
        bufp->chgBit(oldp+832,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_b))));
        bufp->chgBit(oldp+833,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_b))));
        bufp->chgBit(oldp+834,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_ci))));
        bufp->chgBit(oldp+835,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_b) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_ci))));
        bufp->chgBit(oldp+836,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_82_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_83_io_s))));
        bufp->chgBit(oldp+837,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_82_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_83_io_s))));
        bufp->chgBit(oldp+838,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_82_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_co))));
        bufp->chgBit(oldp+839,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_83_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_co))));
        bufp->chgBit(oldp+840,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_s))));
        bufp->chgBit(oldp+841,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_s))));
        bufp->chgBit(oldp+842,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_85_io_s))));
        bufp->chgBit(oldp+843,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_85_io_s))));
        bufp->chgBit(oldp+844,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_87_io_co))));
        bufp->chgBit(oldp+845,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_87_io_co))));
        bufp->chgBit(oldp+846,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_88_io_co))));
        bufp->chgBit(oldp+847,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_87_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_88_io_co))));
        bufp->chgBit(oldp+848,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_87_io_s))));
        bufp->chgBit(oldp+849,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_87_io_s))));
        bufp->chgBit(oldp+850,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_88_io_s))));
        bufp->chgBit(oldp+851,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_87_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_88_io_s))));
        bufp->chgBit(oldp+852,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_co))));
        bufp->chgBit(oldp+853,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_co))));
        bufp->chgBit(oldp+854,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_89_io_s))));
        bufp->chgBit(oldp+855,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_89_io_s))));
        bufp->chgBit(oldp+856,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_90_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_co))));
        bufp->chgBit(oldp+857,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_90_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_co))));
        bufp->chgBit(oldp+858,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_90_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_92_io_co))));
        bufp->chgBit(oldp+859,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_92_io_co))));
        bufp->chgBit(oldp+860,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_92_io_s))));
        bufp->chgBit(oldp+861,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_92_io_s))));
        bufp->chgBit(oldp+862,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_93_io_s))));
        bufp->chgBit(oldp+863,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_92_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_93_io_s))));
        bufp->chgBit(oldp+864,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_95_io_co))));
        bufp->chgBit(oldp+865,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_95_io_co))));
        bufp->chgBit(oldp+866,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_96_io_co))));
        bufp->chgBit(oldp+867,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_95_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_96_io_co))));
        bufp->chgBit(oldp+868,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_co))));
        bufp->chgBit(oldp+869,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_co))));
        bufp->chgBit(oldp+870,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_s))));
        bufp->chgBit(oldp+871,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_s))));
        bufp->chgBit(oldp+872,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_95_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_96_io_s))));
        bufp->chgBit(oldp+873,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_95_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_96_io_s))));
        bufp->chgBit(oldp+874,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_95_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_97_io_co))));
        bufp->chgBit(oldp+875,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_96_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_97_io_co))));
        bufp->chgBit(oldp+876,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_b))));
        bufp->chgBit(oldp+877,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_b))));
        bufp->chgBit(oldp+878,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_ci))));
        bufp->chgBit(oldp+879,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_b) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_ci))));
        bufp->chgBit(oldp+880,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_97_io_s))));
        bufp->chgBit(oldp+881,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_97_io_s))));
        bufp->chgBit(oldp+882,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_98_io_s))));
        bufp->chgBit(oldp+883,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_97_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_98_io_s))));
        bufp->chgBit(oldp+884,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_99_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_co))));
        bufp->chgBit(oldp+885,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_99_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_co))));
        bufp->chgBit(oldp+886,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_99_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_101_io_co))));
        bufp->chgBit(oldp+887,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_101_io_co))));
        bufp->chgBit(oldp+888,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_co))));
        bufp->chgBit(oldp+889,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_co))));
        bufp->chgBit(oldp+890,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_s))));
        bufp->chgBit(oldp+891,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_s))));
        bufp->chgBit(oldp+892,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_101_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_102_io_s))));
        bufp->chgBit(oldp+893,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_101_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_102_io_s))));
        bufp->chgBit(oldp+894,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_101_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_103_io_co))));
        bufp->chgBit(oldp+895,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_102_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_103_io_co))));
        bufp->chgBit(oldp+896,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_103_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_104_io_s))));
        bufp->chgBit(oldp+897,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_103_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_104_io_s))));
        bufp->chgBit(oldp+898,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_103_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_105_io_s))));
        bufp->chgBit(oldp+899,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_104_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_105_io_s))));
        bufp->chgBit(oldp+900,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_107_io_co))));
        bufp->chgBit(oldp+901,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_107_io_co))));
        bufp->chgBit(oldp+902,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_108_io_co))));
        bufp->chgBit(oldp+903,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_107_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_108_io_co))));
        bufp->chgBit(oldp+904,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_s))));
        bufp->chgBit(oldp+905,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_s))));
        bufp->chgBit(oldp+906,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_107_io_s))));
        bufp->chgBit(oldp+907,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_106_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_107_io_s))));
        bufp->chgBit(oldp+908,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_108_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_co))));
        bufp->chgBit(oldp+909,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_108_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_co))));
        bufp->chgBit(oldp+910,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_108_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_110_io_co))));
        bufp->chgBit(oldp+911,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_110_io_co))));
        bufp->chgBit(oldp+912,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_110_io_s))));
        bufp->chgBit(oldp+913,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_110_io_s))));
        bufp->chgBit(oldp+914,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_109_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_111_io_s))));
        bufp->chgBit(oldp+915,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_110_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_111_io_s))));
        bufp->chgBit(oldp+916,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_112_io_s))));
        bufp->chgBit(oldp+917,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_112_io_s))));
        bufp->chgBit(oldp+918,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_113_io_s))));
        bufp->chgBit(oldp+919,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_112_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_113_io_s))));
        bufp->chgBit(oldp+920,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_b))));
        bufp->chgBit(oldp+921,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_b))));
        bufp->chgBit(oldp+922,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_ci))));
        bufp->chgBit(oldp+923,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_b) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_ci))));
        bufp->chgBit(oldp+924,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_co))));
        bufp->chgBit(oldp+925,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_co))));
        bufp->chgBit(oldp+926,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_s))));
        bufp->chgBit(oldp+927,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_s))));
        bufp->chgBit(oldp+928,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_115_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_co))));
        bufp->chgBit(oldp+929,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_115_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_co))));
        bufp->chgBit(oldp+930,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_115_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_117_io_co))));
        bufp->chgBit(oldp+931,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_117_io_co))));
        bufp->chgBit(oldp+932,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_s))));
        bufp->chgBit(oldp+933,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_s))));
        bufp->chgBit(oldp+934,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_117_io_s))));
        bufp->chgBit(oldp+935,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_116_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_117_io_s))));
        bufp->chgBit(oldp+936,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_co))));
        bufp->chgBit(oldp+937,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_co))));
        bufp->chgBit(oldp+938,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_118_io_s))));
        bufp->chgBit(oldp+939,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_118_io_s))));
        bufp->chgBit(oldp+940,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_120_io_s))));
        bufp->chgBit(oldp+941,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_120_io_s))));
        bufp->chgBit(oldp+942,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_119_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_co))));
        bufp->chgBit(oldp+943,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_120_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_co))));
        bufp->chgBit(oldp+944,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_co))));
        bufp->chgBit(oldp+945,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_co))));
        bufp->chgBit(oldp+946,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_s))));
        bufp->chgBit(oldp+947,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_121_io_s))));
        bufp->chgBit(oldp+948,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_s))));
        bufp->chgBit(oldp+949,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_s))));
        bufp->chgBit(oldp+950,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_124_io_co))));
        bufp->chgBit(oldp+951,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_124_io_co))));
        bufp->chgBit(oldp+952,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_co))));
        bufp->chgBit(oldp+953,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_co))));
        bufp->chgBit(oldp+954,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_co))));
        bufp->chgBit(oldp+955,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_co))));
        bufp->chgBit(oldp+956,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_78_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_s))));
        bufp->chgBit(oldp+957,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_78_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_s))));
        bufp->chgBit(oldp+958,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_78_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_co))));
        bufp->chgBit(oldp+959,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_126_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_co))));
        bufp->chgBit(oldp+960,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_81_io_co))));
        bufp->chgBit(oldp+961,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_81_io_co))));
        bufp->chgBit(oldp+962,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_128_io_s))));
        bufp->chgBit(oldp+963,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_81_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_128_io_s))));
        bufp->chgBit(oldp+964,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_a) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_b))));
        bufp->chgBit(oldp+965,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_b))));
        bufp->chgBit(oldp+966,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_a) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_ci))));
        bufp->chgBit(oldp+967,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_b) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_ci))));
        bufp->chgBit(oldp+968,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_82_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_83_io_co))));
        bufp->chgBit(oldp+969,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_82_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_83_io_co))));
        bufp->chgBit(oldp+970,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_82_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_129_io_s))));
        bufp->chgBit(oldp+971,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_83_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_129_io_s))));
        bufp->chgBit(oldp+972,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_85_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_130_io_s))));
        bufp->chgBit(oldp+973,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_85_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_130_io_s))));
        bufp->chgBit(oldp+974,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_85_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_131_io_co))));
        bufp->chgBit(oldp+975,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_130_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_131_io_co))));
        bufp->chgBit(oldp+976,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_131_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_132_io_s))));
        bufp->chgBit(oldp+977,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_131_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_132_io_s))));
        bufp->chgBit(oldp+978,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_131_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_133_io_co))));
        bufp->chgBit(oldp+979,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_132_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_133_io_co))));
        bufp->chgBit(oldp+980,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_89_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_90_io_co))));
        bufp->chgBit(oldp+981,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_89_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_90_io_co))));
        bufp->chgBit(oldp+982,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_89_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_133_io_s))));
        bufp->chgBit(oldp+983,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_90_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_133_io_s))));
        bufp->chgBit(oldp+984,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_93_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_134_io_s))));
        bufp->chgBit(oldp+985,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_93_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_134_io_s))));
        bufp->chgBit(oldp+986,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_93_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_135_io_s))));
        bufp->chgBit(oldp+987,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_134_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_135_io_s))));
        bufp->chgBit(oldp+988,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_136_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_137_io_s))));
        bufp->chgBit(oldp+989,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_136_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_137_io_s))));
        bufp->chgBit(oldp+990,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_136_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_138_io_co))));
        bufp->chgBit(oldp+991,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_137_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_138_io_co))));
        bufp->chgBit(oldp+992,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_98_io_co) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_99_io_co))));
        bufp->chgBit(oldp+993,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_98_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_99_io_co))));
        bufp->chgBit(oldp+994,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_98_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_138_io_s))));
        bufp->chgBit(oldp+995,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_99_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_138_io_s))));
        bufp->chgBit(oldp+996,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_139_io_s) 
                                ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_140_io_co))));
        bufp->chgBit(oldp+997,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_139_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_140_io_co))));
        bufp->chgBit(oldp+998,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_139_io_s) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_141_io_co))));
        bufp->chgBit(oldp+999,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_140_io_co) 
                                & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_141_io_co))));
        bufp->chgBit(oldp+1000,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_102_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_140_io_s))));
        bufp->chgBit(oldp+1001,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_102_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_140_io_s))));
        bufp->chgBit(oldp+1002,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_102_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_141_io_s))));
        bufp->chgBit(oldp+1003,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_140_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_141_io_s))));
        bufp->chgBit(oldp+1004,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_104_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_105_io_co))));
        bufp->chgBit(oldp+1005,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_104_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_105_io_co))));
        bufp->chgBit(oldp+1006,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_104_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_142_io_s))));
        bufp->chgBit(oldp+1007,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_105_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_142_io_s))));
        bufp->chgBit(oldp+1008,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_b))));
        bufp->chgBit(oldp+1009,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_b))));
        bufp->chgBit(oldp+1010,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_ci))));
        bufp->chgBit(oldp+1011,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_ci))));
        bufp->chgBit(oldp+1012,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_143_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_144_io_co))));
        bufp->chgBit(oldp+1013,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_143_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_144_io_co))));
        bufp->chgBit(oldp+1014,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_143_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_145_io_co))));
        bufp->chgBit(oldp+1015,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_144_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_145_io_co))));
        bufp->chgBit(oldp+1016,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_144_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_145_io_s))));
        bufp->chgBit(oldp+1017,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_144_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_145_io_s))));
        bufp->chgBit(oldp+1018,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_144_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_146_io_co))));
        bufp->chgBit(oldp+1019,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_145_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_146_io_co))));
        bufp->chgBit(oldp+1020,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_111_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_146_io_s))));
        bufp->chgBit(oldp+1021,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_111_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_146_io_s))));
        bufp->chgBit(oldp+1022,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_111_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_147_io_s))));
        bufp->chgBit(oldp+1023,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_146_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_147_io_s))));
        bufp->chgBit(oldp+1024,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_112_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_113_io_co))));
        bufp->chgBit(oldp+1025,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_112_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_113_io_co))));
        bufp->chgBit(oldp+1026,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_112_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_148_io_s))));
        bufp->chgBit(oldp+1027,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_113_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_148_io_s))));
        bufp->chgBit(oldp+1028,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_115_io_co))));
        bufp->chgBit(oldp+1029,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_115_io_co))));
        bufp->chgBit(oldp+1030,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_114_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_149_io_s))));
        bufp->chgBit(oldp+1031,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_115_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_149_io_s))));
        bufp->chgBit(oldp+1032,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_150_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_151_io_s))));
        bufp->chgBit(oldp+1033,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_150_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_151_io_s))));
        bufp->chgBit(oldp+1034,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_150_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_152_io_co))));
        bufp->chgBit(oldp+1035,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_151_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_152_io_co))));
        bufp->chgBit(oldp+1036,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_118_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_152_io_s))));
        bufp->chgBit(oldp+1037,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_118_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_152_io_s))));
        bufp->chgBit(oldp+1038,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_118_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_153_io_co))));
        bufp->chgBit(oldp+1039,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_152_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_153_io_co))));
        bufp->chgBit(oldp+1040,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_153_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_io_s))));
        bufp->chgBit(oldp+1041,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_153_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_io_s))));
        bufp->chgBit(oldp+1042,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_153_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_154_io_co))));
        bufp->chgBit(oldp+1043,(((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_154_io_co))));
        bufp->chgBit(oldp+1044,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_122_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_co))));
        bufp->chgBit(oldp+1045,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_122_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_co))));
        bufp->chgBit(oldp+1046,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_122_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_156_io_co))));
        bufp->chgBit(oldp+1047,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_123_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_156_io_co))));
        bufp->chgBit(oldp+1048,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_128_io_co))));
        bufp->chgBit(oldp+1049,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_128_io_co))));
        bufp->chgBit(oldp+1050,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_127_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_co))));
        bufp->chgBit(oldp+1051,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_128_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_co))));
        bufp->chgBit(oldp+1052,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_b))));
        bufp->chgBit(oldp+1053,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_b))));
        bufp->chgBit(oldp+1054,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_ci))));
        bufp->chgBit(oldp+1055,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_ci))));
        bufp->chgBit(oldp+1056,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_129_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_s))));
        bufp->chgBit(oldp+1057,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_129_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_s))));
        bufp->chgBit(oldp+1058,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_129_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_co))));
        bufp->chgBit(oldp+1059,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_159_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_co))));
        bufp->chgBit(oldp+1060,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_130_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_s))));
        bufp->chgBit(oldp+1061,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_130_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_s))));
        bufp->chgBit(oldp+1062,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_130_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_co))));
        bufp->chgBit(oldp+1063,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_160_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_co))));
        bufp->chgBit(oldp+1064,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_132_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_s))));
        bufp->chgBit(oldp+1065,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_132_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_s))));
        bufp->chgBit(oldp+1066,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_132_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_co))));
        bufp->chgBit(oldp+1067,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_161_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_co))));
        bufp->chgBit(oldp+1068,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_134_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_135_io_co))));
        bufp->chgBit(oldp+1069,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_134_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_135_io_co))));
        bufp->chgBit(oldp+1070,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_134_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_163_io_s))));
        bufp->chgBit(oldp+1071,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_135_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_163_io_s))));
        bufp->chgBit(oldp+1072,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_136_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_137_io_co))));
        bufp->chgBit(oldp+1073,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_136_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_137_io_co))));
        bufp->chgBit(oldp+1074,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_136_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_164_io_s))));
        bufp->chgBit(oldp+1075,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_137_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_164_io_s))));
        bufp->chgBit(oldp+1076,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_139_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_165_io_s))));
        bufp->chgBit(oldp+1077,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_139_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_165_io_s))));
        bufp->chgBit(oldp+1078,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_139_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_166_io_co))));
        bufp->chgBit(oldp+1079,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_165_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_166_io_co))));
        bufp->chgBit(oldp+1080,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_166_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_167_io_s))));
        bufp->chgBit(oldp+1081,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_166_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_167_io_s))));
        bufp->chgBit(oldp+1082,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_166_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_168_io_co))));
        bufp->chgBit(oldp+1083,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_167_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_168_io_co))));
        bufp->chgBit(oldp+1084,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_142_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_143_io_co))));
        bufp->chgBit(oldp+1085,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_142_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_143_io_co))));
        bufp->chgBit(oldp+1086,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_142_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_168_io_s))));
        bufp->chgBit(oldp+1087,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_143_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_168_io_s))));
        bufp->chgBit(oldp+1088,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_169_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_170_io_s))));
        bufp->chgBit(oldp+1089,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_169_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_170_io_s))));
        bufp->chgBit(oldp+1090,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_169_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_171_io_co))));
        bufp->chgBit(oldp+1091,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_170_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_171_io_co))));
        bufp->chgBit(oldp+1092,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_147_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_171_io_s))));
        bufp->chgBit(oldp+1093,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_147_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_171_io_s))));
        bufp->chgBit(oldp+1094,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_147_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_172_io_co))));
        bufp->chgBit(oldp+1095,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_171_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_172_io_co))));
        bufp->chgBit(oldp+1096,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_b))));
        bufp->chgBit(oldp+1097,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_b))));
        bufp->chgBit(oldp+1098,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_ci))));
        bufp->chgBit(oldp+1099,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_ci))));
        bufp->chgBit(oldp+1100,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_148_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_172_io_s))));
        bufp->chgBit(oldp+1101,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_148_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_172_io_s))));
        bufp->chgBit(oldp+1102,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_148_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_173_io_co))));
        bufp->chgBit(oldp+1103,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_172_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_173_io_co))));
        bufp->chgBit(oldp+1104,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_149_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_173_io_s))));
        bufp->chgBit(oldp+1105,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_149_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_173_io_s))));
        bufp->chgBit(oldp+1106,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_149_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_174_io_co))));
        bufp->chgBit(oldp+1107,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_173_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_174_io_co))));
        bufp->chgBit(oldp+1108,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_174_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_s))));
        bufp->chgBit(oldp+1109,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_174_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_s))));
        bufp->chgBit(oldp+1110,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_174_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_175_io_co))));
        bufp->chgBit(oldp+1111,(((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_175_io_co))));
        bufp->chgBit(oldp+1112,(((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_s))));
        bufp->chgBit(oldp+1113,(((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_s))));
        bufp->chgBit(oldp+1114,(((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_177_io_co))));
        bufp->chgBit(oldp+1115,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_177_io_co))));
        bufp->chgBit(oldp+1116,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_122_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_s))));
        bufp->chgBit(oldp+1117,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_122_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_s))));
        bufp->chgBit(oldp+1118,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_122_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_178_io_co))));
        bufp->chgBit(oldp+1119,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_178_io_co))));
        bufp->chgBit(oldp+1120,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_163_io_co))));
        bufp->chgBit(oldp+1121,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_163_io_co))));
        bufp->chgBit(oldp+1122,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_162_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_co))));
        bufp->chgBit(oldp+1123,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_163_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_co))));
        bufp->chgBit(oldp+1124,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_164_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_s))));
        bufp->chgBit(oldp+1125,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_164_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_s))));
        bufp->chgBit(oldp+1126,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_164_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_co))));
        bufp->chgBit(oldp+1127,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_183_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_co))));
        bufp->chgBit(oldp+1128,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_165_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_s))));
        bufp->chgBit(oldp+1129,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_165_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_s))));
        bufp->chgBit(oldp+1130,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_165_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_co))));
        bufp->chgBit(oldp+1131,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_184_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_co))));
        bufp->chgBit(oldp+1132,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_167_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_s))));
        bufp->chgBit(oldp+1133,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_167_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_s))));
        bufp->chgBit(oldp+1134,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_167_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_co))));
        bufp->chgBit(oldp+1135,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_185_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_co))));
        bufp->chgBit(oldp+1136,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_co))));
        bufp->chgBit(oldp+1137,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_co))));
        bufp->chgBit(oldp+1138,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_186_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_co))));
        bufp->chgBit(oldp+1139,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_co))));
        bufp->chgBit(oldp+1140,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_b))));
        bufp->chgBit(oldp+1141,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_b))));
        bufp->chgBit(oldp+1142,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_ci))));
        bufp->chgBit(oldp+1143,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_ci))));
        bufp->chgBit(oldp+1144,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_b))));
        bufp->chgBit(oldp+1145,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_b))));
        bufp->chgBit(oldp+1146,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_ci))));
        bufp->chgBit(oldp+1147,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_ci))));
        bufp->chgBit(oldp+1148,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_s))));
        bufp->chgBit(oldp+1149,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_s))));
        bufp->chgBit(oldp+1150,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_187_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_188_io_co))));
        bufp->chgBit(oldp+1151,(((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_2_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_188_io_co))));
        bufp->chgBit(oldp+1152,(((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_191_io_s))));
        bufp->chgBit(oldp+1153,(((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_191_io_s))));
        bufp->chgBit(oldp+1154,(((IData)(vlSelf->MAC__DOT__wt__DOT__HalfAdder_1_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_192_io_co))));
        bufp->chgBit(oldp+1155,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_191_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_192_io_co))));
        bufp->chgBit(oldp+1156,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_175_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_co))));
        bufp->chgBit(oldp+1157,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_175_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_co))));
        bufp->chgBit(oldp+1158,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_175_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_193_io_co))));
        bufp->chgBit(oldp+1159,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_176_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_193_io_co))));
        bufp->chgBit(oldp+1160,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_154_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_co))));
        bufp->chgBit(oldp+1161,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_154_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_co))));
        bufp->chgBit(oldp+1162,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_154_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_194_io_co))));
        bufp->chgBit(oldp+1163,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_155_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_194_io_co))));
        bufp->chgBit(oldp+1164,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_b))));
        bufp->chgBit(oldp+1165,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_b))));
        bufp->chgBit(oldp+1166,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_ci))));
        bufp->chgBit(oldp+1167,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_ci))));
        bufp->chgBit(oldp+1168,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_b))));
        bufp->chgBit(oldp+1169,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_b))));
        bufp->chgBit(oldp+1170,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_ci))));
        bufp->chgBit(oldp+1171,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_ci))));
        bufp->chgBit(oldp+1172,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_b))));
        bufp->chgBit(oldp+1173,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_b))));
        bufp->chgBit(oldp+1174,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_ci))));
        bufp->chgBit(oldp+1175,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_ci))));
        bufp->chgBit(oldp+1176,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_b))));
        bufp->chgBit(oldp+1177,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_b))));
        bufp->chgBit(oldp+1178,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_ci))));
        bufp->chgBit(oldp+1179,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_ci))));
        bufp->chgBit(oldp+1180,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_b))));
        bufp->chgBit(oldp+1181,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_b))));
        bufp->chgBit(oldp+1182,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_ci))));
        bufp->chgBit(oldp+1183,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_ci))));
        bufp->chgBit(oldp+1184,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_b))));
        bufp->chgBit(oldp+1185,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_b))));
        bufp->chgBit(oldp+1186,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_ci))));
        bufp->chgBit(oldp+1187,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_ci))));
        bufp->chgBit(oldp+1188,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_b))));
        bufp->chgBit(oldp+1189,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_b))));
        bufp->chgBit(oldp+1190,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_ci))));
        bufp->chgBit(oldp+1191,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_ci))));
        bufp->chgBit(oldp+1192,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_b))));
        bufp->chgBit(oldp+1193,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_b))));
        bufp->chgBit(oldp+1194,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_ci))));
        bufp->chgBit(oldp+1195,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_ci))));
        bufp->chgBit(oldp+1196,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_b))));
        bufp->chgBit(oldp+1197,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_b))));
        bufp->chgBit(oldp+1198,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_ci))));
        bufp->chgBit(oldp+1199,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_ci))));
        bufp->chgBit(oldp+1200,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_b))));
        bufp->chgBit(oldp+1201,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_b))));
        bufp->chgBit(oldp+1202,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_ci))));
        bufp->chgBit(oldp+1203,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_ci))));
        bufp->chgBit(oldp+1204,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_b))));
        bufp->chgBit(oldp+1205,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_b))));
        bufp->chgBit(oldp+1206,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_ci))));
        bufp->chgBit(oldp+1207,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_ci))));
        bufp->chgBit(oldp+1208,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_b))));
        bufp->chgBit(oldp+1209,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_b))));
        bufp->chgBit(oldp+1210,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_ci))));
        bufp->chgBit(oldp+1211,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_ci))));
        bufp->chgBit(oldp+1212,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_b))));
        bufp->chgBit(oldp+1213,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_b))));
        bufp->chgBit(oldp+1214,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_ci))));
        bufp->chgBit(oldp+1215,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_ci))));
        bufp->chgBit(oldp+1216,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_b))));
        bufp->chgBit(oldp+1217,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_b))));
        bufp->chgBit(oldp+1218,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_ci))));
        bufp->chgBit(oldp+1219,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_ci))));
        bufp->chgBit(oldp+1220,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_b))));
        bufp->chgBit(oldp+1221,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_b))));
        bufp->chgBit(oldp+1222,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_ci))));
        bufp->chgBit(oldp+1223,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_ci))));
        bufp->chgBit(oldp+1224,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_b))));
        bufp->chgBit(oldp+1225,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_b))));
        bufp->chgBit(oldp+1226,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_ci))));
        bufp->chgBit(oldp+1227,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_ci))));
        bufp->chgBit(oldp+1228,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_b))));
        bufp->chgBit(oldp+1229,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_b))));
        bufp->chgBit(oldp+1230,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_ci))));
        bufp->chgBit(oldp+1231,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_ci))));
        bufp->chgBit(oldp+1232,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_b))));
        bufp->chgBit(oldp+1233,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_b))));
        bufp->chgBit(oldp+1234,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_ci))));
        bufp->chgBit(oldp+1235,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_ci))));
        bufp->chgBit(oldp+1236,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_b))));
        bufp->chgBit(oldp+1237,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_b))));
        bufp->chgBit(oldp+1238,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_ci))));
        bufp->chgBit(oldp+1239,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_ci))));
        bufp->chgBit(oldp+1240,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_b))));
        bufp->chgBit(oldp+1241,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_b))));
        bufp->chgBit(oldp+1242,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_ci))));
        bufp->chgBit(oldp+1243,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_39_io_ci))));
        bufp->chgBit(oldp+1244,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_b))));
        bufp->chgBit(oldp+1245,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_b))));
        bufp->chgBit(oldp+1246,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_ci))));
        bufp->chgBit(oldp+1247,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_ci))));
        bufp->chgBit(oldp+1248,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_b))));
        bufp->chgBit(oldp+1249,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_b))));
        bufp->chgBit(oldp+1250,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_ci))));
        bufp->chgBit(oldp+1251,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_ci))));
        bufp->chgBit(oldp+1252,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_b))));
        bufp->chgBit(oldp+1253,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_b))));
        bufp->chgBit(oldp+1254,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_ci))));
        bufp->chgBit(oldp+1255,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_41_io_ci))));
        bufp->chgBit(oldp+1256,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_b))));
        bufp->chgBit(oldp+1257,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_b))));
        bufp->chgBit(oldp+1258,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_ci))));
        bufp->chgBit(oldp+1259,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_42_io_ci))));
        bufp->chgBit(oldp+1260,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_b))));
        bufp->chgBit(oldp+1261,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_b))));
        bufp->chgBit(oldp+1262,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_ci))));
        bufp->chgBit(oldp+1263,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_43_io_ci))));
        bufp->chgBit(oldp+1264,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_b))));
        bufp->chgBit(oldp+1265,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_b))));
        bufp->chgBit(oldp+1266,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_ci))));
        bufp->chgBit(oldp+1267,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_44_io_ci))));
        bufp->chgBit(oldp+1268,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_b))));
        bufp->chgBit(oldp+1269,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_b))));
        bufp->chgBit(oldp+1270,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_ci))));
        bufp->chgBit(oldp+1271,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_ci))));
        bufp->chgBit(oldp+1272,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_b))));
        bufp->chgBit(oldp+1273,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_b))));
        bufp->chgBit(oldp+1274,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_ci))));
        bufp->chgBit(oldp+1275,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_46_io_ci))));
        bufp->chgBit(oldp+1276,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_b))));
        bufp->chgBit(oldp+1277,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_b))));
        bufp->chgBit(oldp+1278,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_ci))));
        bufp->chgBit(oldp+1279,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_47_io_ci))));
        bufp->chgBit(oldp+1280,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_b))));
        bufp->chgBit(oldp+1281,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_b))));
        bufp->chgBit(oldp+1282,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_ci))));
        bufp->chgBit(oldp+1283,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_48_io_ci))));
        bufp->chgBit(oldp+1284,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_b))));
        bufp->chgBit(oldp+1285,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_b))));
        bufp->chgBit(oldp+1286,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_ci))));
        bufp->chgBit(oldp+1287,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_ci))));
        bufp->chgBit(oldp+1288,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_b))));
        bufp->chgBit(oldp+1289,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_b))));
        bufp->chgBit(oldp+1290,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_ci))));
        bufp->chgBit(oldp+1291,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_ci))));
        bufp->chgBit(oldp+1292,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_b))));
        bufp->chgBit(oldp+1293,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_b))));
        bufp->chgBit(oldp+1294,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_ci))));
        bufp->chgBit(oldp+1295,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_50_io_ci))));
        bufp->chgBit(oldp+1296,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_b))));
        bufp->chgBit(oldp+1297,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_b))));
        bufp->chgBit(oldp+1298,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_ci))));
        bufp->chgBit(oldp+1299,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_51_io_ci))));
        bufp->chgBit(oldp+1300,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_b))));
        bufp->chgBit(oldp+1301,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_b))));
        bufp->chgBit(oldp+1302,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_ci))));
        bufp->chgBit(oldp+1303,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_52_io_ci))));
        bufp->chgBit(oldp+1304,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_b))));
        bufp->chgBit(oldp+1305,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_b))));
        bufp->chgBit(oldp+1306,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_ci))));
        bufp->chgBit(oldp+1307,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_ci))));
        bufp->chgBit(oldp+1308,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_b))));
        bufp->chgBit(oldp+1309,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_b))));
        bufp->chgBit(oldp+1310,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_ci))));
        bufp->chgBit(oldp+1311,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_54_io_ci))));
        bufp->chgBit(oldp+1312,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_b))));
        bufp->chgBit(oldp+1313,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_b))));
        bufp->chgBit(oldp+1314,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_ci))));
        bufp->chgBit(oldp+1315,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_55_io_ci))));
        bufp->chgBit(oldp+1316,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_b))));
        bufp->chgBit(oldp+1317,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_b))));
        bufp->chgBit(oldp+1318,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_ci))));
        bufp->chgBit(oldp+1319,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_56_io_ci))));
        bufp->chgBit(oldp+1320,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_b))));
        bufp->chgBit(oldp+1321,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_b))));
        bufp->chgBit(oldp+1322,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_ci))));
        bufp->chgBit(oldp+1323,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_ci))));
        bufp->chgBit(oldp+1324,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_b))));
        bufp->chgBit(oldp+1325,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_b))));
        bufp->chgBit(oldp+1326,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_ci))));
        bufp->chgBit(oldp+1327,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_58_io_ci))));
        bufp->chgBit(oldp+1328,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_b))));
        bufp->chgBit(oldp+1329,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_b))));
        bufp->chgBit(oldp+1330,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_ci))));
        bufp->chgBit(oldp+1331,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_59_io_ci))));
        bufp->chgBit(oldp+1332,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_b))));
        bufp->chgBit(oldp+1333,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_b))));
        bufp->chgBit(oldp+1334,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_ci))));
        bufp->chgBit(oldp+1335,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_ci))));
        bufp->chgBit(oldp+1336,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_b))));
        bufp->chgBit(oldp+1337,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_b))));
        bufp->chgBit(oldp+1338,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_ci))));
        bufp->chgBit(oldp+1339,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_ci))));
        bufp->chgBit(oldp+1340,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_b))));
        bufp->chgBit(oldp+1341,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_b))));
        bufp->chgBit(oldp+1342,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_ci))));
        bufp->chgBit(oldp+1343,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_61_io_ci))));
        bufp->chgBit(oldp+1344,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_b))));
        bufp->chgBit(oldp+1345,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_b))));
        bufp->chgBit(oldp+1346,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_ci))));
        bufp->chgBit(oldp+1347,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_62_io_ci))));
        bufp->chgBit(oldp+1348,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_b))));
        bufp->chgBit(oldp+1349,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_b))));
        bufp->chgBit(oldp+1350,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_ci))));
        bufp->chgBit(oldp+1351,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_ci))));
        bufp->chgBit(oldp+1352,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_b))));
        bufp->chgBit(oldp+1353,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_b))));
        bufp->chgBit(oldp+1354,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_ci))));
        bufp->chgBit(oldp+1355,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_64_io_ci))));
        bufp->chgBit(oldp+1356,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_b))));
        bufp->chgBit(oldp+1357,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_b))));
        bufp->chgBit(oldp+1358,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_ci))));
        bufp->chgBit(oldp+1359,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_65_io_ci))));
        bufp->chgBit(oldp+1360,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_b))));
        bufp->chgBit(oldp+1361,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_b))));
        bufp->chgBit(oldp+1362,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_ci))));
        bufp->chgBit(oldp+1363,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_ci))));
        bufp->chgBit(oldp+1364,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_b))));
        bufp->chgBit(oldp+1365,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_b))));
        bufp->chgBit(oldp+1366,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_ci))));
        bufp->chgBit(oldp+1367,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_67_io_ci))));
        bufp->chgBit(oldp+1368,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_b))));
        bufp->chgBit(oldp+1369,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_b))));
        bufp->chgBit(oldp+1370,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_ci))));
        bufp->chgBit(oldp+1371,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_ci))));
        bufp->chgBit(oldp+1372,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_b))));
        bufp->chgBit(oldp+1373,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_b))));
        bufp->chgBit(oldp+1374,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_ci))));
        bufp->chgBit(oldp+1375,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_69_io_ci))));
        bufp->chgBit(oldp+1376,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_b))));
        bufp->chgBit(oldp+1377,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_b))));
        bufp->chgBit(oldp+1378,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_ci))));
        bufp->chgBit(oldp+1379,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_ci))));
        bufp->chgBit(oldp+1380,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_b))));
        bufp->chgBit(oldp+1381,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_b))));
        bufp->chgBit(oldp+1382,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_ci))));
        bufp->chgBit(oldp+1383,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_ci))));
        bufp->chgBit(oldp+1384,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_b))));
        bufp->chgBit(oldp+1385,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_b))));
        bufp->chgBit(oldp+1386,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_ci))));
        bufp->chgBit(oldp+1387,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_71_io_ci))));
        bufp->chgBit(oldp+1388,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_b))));
        bufp->chgBit(oldp+1389,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_b))));
        bufp->chgBit(oldp+1390,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_ci))));
        bufp->chgBit(oldp+1391,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_ci))));
        bufp->chgBit(oldp+1392,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_b))));
        bufp->chgBit(oldp+1393,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_b))));
        bufp->chgBit(oldp+1394,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_ci))));
        bufp->chgBit(oldp+1395,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_ci))));
        bufp->chgBit(oldp+1396,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_b))));
        bufp->chgBit(oldp+1397,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_b))));
        bufp->chgBit(oldp+1398,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_ci))));
        bufp->chgBit(oldp+1399,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_ci))));
        bufp->chgBit(oldp+1400,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_b))));
        bufp->chgBit(oldp+1401,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_b))));
        bufp->chgBit(oldp+1402,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_co))));
        bufp->chgBit(oldp+1403,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_co))));
        bufp->chgBit(oldp+1404,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_s))));
        bufp->chgBit(oldp+1405,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_s))));
        bufp->chgBit(oldp+1406,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_co))));
        bufp->chgBit(oldp+1407,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_1_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_co))));
        bufp->chgBit(oldp+1408,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_b))));
        bufp->chgBit(oldp+1409,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_b))));
        bufp->chgBit(oldp+1410,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_s))));
        bufp->chgBit(oldp+1411,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_2_io_s))));
        bufp->chgBit(oldp+1412,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_s))));
        bufp->chgBit(oldp+1413,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_s))));
        bufp->chgBit(oldp+1414,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_3_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_co))));
        bufp->chgBit(oldp+1415,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_co))));
        bufp->chgBit(oldp+1416,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_s))));
        bufp->chgBit(oldp+1417,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_s))));
        bufp->chgBit(oldp+1418,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_s))));
        bufp->chgBit(oldp+1419,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_5_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_6_io_s))));
        bufp->chgBit(oldp+1420,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_b))));
        bufp->chgBit(oldp+1421,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_b))));
        bufp->chgBit(oldp+1422,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_ci))));
        bufp->chgBit(oldp+1423,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_ci))));
        bufp->chgBit(oldp+1424,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_b))));
        bufp->chgBit(oldp+1425,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_b))));
        bufp->chgBit(oldp+1426,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_s))));
        bufp->chgBit(oldp+1427,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_7_io_s))));
        bufp->chgBit(oldp+1428,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_co))));
        bufp->chgBit(oldp+1429,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_co))));
        bufp->chgBit(oldp+1430,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_8_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_co))));
        bufp->chgBit(oldp+1431,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_co))));
        bufp->chgBit(oldp+1432,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_s))));
        bufp->chgBit(oldp+1433,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_s))));
        bufp->chgBit(oldp+1434,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_s))));
        bufp->chgBit(oldp+1435,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_10_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_s))));
        bufp->chgBit(oldp+1436,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_co))));
        bufp->chgBit(oldp+1437,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_co))));
        bufp->chgBit(oldp+1438,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_co))));
        bufp->chgBit(oldp+1439,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_co))));
        bufp->chgBit(oldp+1440,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_s))));
        bufp->chgBit(oldp+1441,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_s))));
        bufp->chgBit(oldp+1442,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_s))));
        bufp->chgBit(oldp+1443,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_12_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_13_io_s))));
        bufp->chgBit(oldp+1444,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_co))));
        bufp->chgBit(oldp+1445,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_co))));
        bufp->chgBit(oldp+1446,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_14_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_co))));
        bufp->chgBit(oldp+1447,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_co))));
        bufp->chgBit(oldp+1448,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_b))));
        bufp->chgBit(oldp+1449,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_b))));
        bufp->chgBit(oldp+1450,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_s))));
        bufp->chgBit(oldp+1451,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_15_io_s))));
        bufp->chgBit(oldp+1452,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_s))));
        bufp->chgBit(oldp+1453,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_s))));
        bufp->chgBit(oldp+1454,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_16_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_co))));
        bufp->chgBit(oldp+1455,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_17_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_co))));
        bufp->chgBit(oldp+1456,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_co))));
        bufp->chgBit(oldp+1457,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_co))));
        bufp->chgBit(oldp+1458,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_co))));
        bufp->chgBit(oldp+1459,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_co))));
        bufp->chgBit(oldp+1460,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_s))));
        bufp->chgBit(oldp+1461,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_s))));
        bufp->chgBit(oldp+1462,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_18_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_s))));
        bufp->chgBit(oldp+1463,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_19_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_20_io_s))));
        bufp->chgBit(oldp+1464,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_b))));
        bufp->chgBit(oldp+1465,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_b))));
        bufp->chgBit(oldp+1466,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_ci))));
        bufp->chgBit(oldp+1467,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_9_io_ci))));
        bufp->chgBit(oldp+1468,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_co))));
        bufp->chgBit(oldp+1469,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_co))));
        bufp->chgBit(oldp+1470,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_co))));
        bufp->chgBit(oldp+1471,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_co))));
        bufp->chgBit(oldp+1472,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_s))));
        bufp->chgBit(oldp+1473,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_s))));
        bufp->chgBit(oldp+1474,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_s))));
        bufp->chgBit(oldp+1475,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_22_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_23_io_s))));
        bufp->chgBit(oldp+1476,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_s))));
        bufp->chgBit(oldp+1477,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_s))));
        bufp->chgBit(oldp+1478,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_24_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_co))));
        bufp->chgBit(oldp+1479,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_25_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_co))));
        bufp->chgBit(oldp+1480,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_co))));
        bufp->chgBit(oldp+1481,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_co))));
        bufp->chgBit(oldp+1482,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_co))));
        bufp->chgBit(oldp+1483,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_co))));
        bufp->chgBit(oldp+1484,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_a) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_b))));
        bufp->chgBit(oldp+1485,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_b))));
        bufp->chgBit(oldp+1486,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_a) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_s))));
        bufp->chgBit(oldp+1487,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_b) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_26_io_s))));
        bufp->chgBit(oldp+1488,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_s))));
        bufp->chgBit(oldp+1489,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_s))));
        bufp->chgBit(oldp+1490,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_27_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_s))));
        bufp->chgBit(oldp+1491,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_28_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_29_io_s))));
        bufp->chgBit(oldp+1492,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_co))));
        bufp->chgBit(oldp+1493,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_co))));
        bufp->chgBit(oldp+1494,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_co))));
        bufp->chgBit(oldp+1495,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_co))));
        bufp->chgBit(oldp+1496,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_s))));
        bufp->chgBit(oldp+1497,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_s))));
        bufp->chgBit(oldp+1498,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_s))));
        bufp->chgBit(oldp+1499,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_31_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_32_io_s))));
        bufp->chgBit(oldp+1500,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_s) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_s))));
        bufp->chgBit(oldp+1501,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_s))));
        bufp->chgBit(oldp+1502,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_33_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_co))));
        bufp->chgBit(oldp+1503,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_s) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_co))));
        bufp->chgBit(oldp+1504,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_co) 
                                 ^ (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_co))));
        bufp->chgBit(oldp+1505,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_co))));
        bufp->chgBit(oldp+1506,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_36_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_co))));
        bufp->chgBit(oldp+1507,(((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_37_io_co) 
                                 & (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_38_io_co))));
        bufp->chgBit(oldp+1508,((1U & vlSelf->MAC__DOT__ppa1_io_augend)));
        bufp->chgBit(oldp+1509,((1U & vlSelf->MAC__DOT__ppa1_io_addend)));
        bufp->chgBit(oldp+1510,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_io_s));
        bufp->chgBit(oldp+1511,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_io_co));
        bufp->chgBit(oldp+1512,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 1U))));
        bufp->chgBit(oldp+1513,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 1U))));
        bufp->chgBit(oldp+1514,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_1_io_s));
        bufp->chgBit(oldp+1515,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 1U))));
        bufp->chgBit(oldp+1516,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 2U))));
        bufp->chgBit(oldp+1517,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 2U))));
        bufp->chgBit(oldp+1518,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_2_io_s));
        bufp->chgBit(oldp+1519,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_2_io_co));
        bufp->chgBit(oldp+1520,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 3U))));
        bufp->chgBit(oldp+1521,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 3U))));
        bufp->chgBit(oldp+1522,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_3_io_s));
        bufp->chgBit(oldp+1523,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 3U))));
        bufp->chgBit(oldp+1524,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 4U))));
        bufp->chgBit(oldp+1525,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 4U))));
        bufp->chgBit(oldp+1526,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_4_io_s));
        bufp->chgBit(oldp+1527,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_4_io_co));
        bufp->chgBit(oldp+1528,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 5U))));
        bufp->chgBit(oldp+1529,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 5U))));
        bufp->chgBit(oldp+1530,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_5_io_s));
        bufp->chgBit(oldp+1531,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_5_io_co));
        bufp->chgBit(oldp+1532,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 6U))));
        bufp->chgBit(oldp+1533,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 6U))));
        bufp->chgBit(oldp+1534,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_6_io_s));
        bufp->chgBit(oldp+1535,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 6U))));
        bufp->chgBit(oldp+1536,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 7U))));
        bufp->chgBit(oldp+1537,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 7U))));
        bufp->chgBit(oldp+1538,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_7_io_s));
        bufp->chgBit(oldp+1539,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_7_io_co));
        bufp->chgBit(oldp+1540,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 8U))));
        bufp->chgBit(oldp+1541,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 8U))));
        bufp->chgBit(oldp+1542,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_8_io_s));
        bufp->chgBit(oldp+1543,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 8U))));
        bufp->chgBit(oldp+1544,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 9U))));
        bufp->chgBit(oldp+1545,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 9U))));
        bufp->chgBit(oldp+1546,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_9_io_s));
        bufp->chgBit(oldp+1547,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 9U))));
        bufp->chgBit(oldp+1548,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1549,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1550,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_10_io_s));
        bufp->chgBit(oldp+1551,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_10_io_co));
        bufp->chgBit(oldp+1552,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1553,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1554,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_11_io_s));
        bufp->chgBit(oldp+1555,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1556,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1557,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1558,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_12_io_s));
        bufp->chgBit(oldp+1559,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_12_io_co));
        bufp->chgBit(oldp+1560,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1561,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1562,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_13_io_s));
        bufp->chgBit(oldp+1563,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1564,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1565,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1566,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_14_io_s));
        bufp->chgBit(oldp+1567,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1568,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1569,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1570,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_15_io_s));
        bufp->chgBit(oldp+1571,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1572,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1573,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1574,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_16_io_s));
        bufp->chgBit(oldp+1575,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1576,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1577,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1578,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_17_io_s));
        bufp->chgBit(oldp+1579,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_17_io_co));
        bufp->chgBit(oldp+1580,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1581,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1582,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_18_io_s));
        bufp->chgBit(oldp+1583,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1584,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1585,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1586,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_19_io_s));
        bufp->chgBit(oldp+1587,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1588,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1589,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1590,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_20_io_s));
        bufp->chgBit(oldp+1591,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_20_io_co));
        bufp->chgBit(oldp+1592,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1593,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1594,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_21_io_s));
        bufp->chgBit(oldp+1595,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1596,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1597,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1598,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_22_io_s));
        bufp->chgBit(oldp+1599,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_22_io_co));
        bufp->chgBit(oldp+1600,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1601,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1602,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_23_io_s));
        bufp->chgBit(oldp+1603,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1604,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1605,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1606,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_24_io_s));
        bufp->chgBit(oldp+1607,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1608,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1609,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1610,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_25_io_s));
        bufp->chgBit(oldp+1611,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1612,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1613,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1614,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_26_io_s));
        bufp->chgBit(oldp+1615,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_26_io_co));
        bufp->chgBit(oldp+1616,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1617,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1618,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_27_io_s));
        bufp->chgBit(oldp+1619,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1620,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1621,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1622,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_28_io_s));
        bufp->chgBit(oldp+1623,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1624,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1625,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1626,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_29_io_s));
        bufp->chgBit(oldp+1627,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1628,((1U & (vlSelf->MAC__DOT__ppa1_io_augend 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1629,((1U & (vlSelf->MAC__DOT__ppa1_io_addend 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1630,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_30_io_s));
        bufp->chgBit(oldp+1631,((1U & ((vlSelf->MAC__DOT__ppa1_io_augend 
                                        & vlSelf->MAC__DOT__ppa1_io_addend) 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1632,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_io_o_g));
        bufp->chgBit(oldp+1633,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_io_o_p));
        bufp->chgBit(oldp+1634,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_1_io_o_g));
        bufp->chgBit(oldp+1635,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_1_io_o_p));
        bufp->chgBit(oldp+1636,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_2_io_o_g));
        bufp->chgBit(oldp+1637,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_2_io_o_p));
        bufp->chgBit(oldp+1638,((1U & (((vlSelf->MAC__DOT__ppa1_io_augend 
                                         & vlSelf->MAC__DOT__ppa1_io_addend) 
                                        >> 0x1eU) | 
                                       ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_2_io_o_g) 
                                        & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_30_io_s))))));
        bufp->chgBit(oldp+1639,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_3_io_o_p));
        bufp->chgBit(oldp+1640,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_4_io_o_g));
        bufp->chgBit(oldp+1641,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_4_io_o_p));
        bufp->chgBit(oldp+1642,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_5_io_o_g));
        bufp->chgBit(oldp+1643,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_5_io_o_p));
        bufp->chgBit(oldp+1644,((1U & (((vlSelf->MAC__DOT__ppa1_io_augend 
                                         & vlSelf->MAC__DOT__ppa1_io_addend) 
                                        >> 0x19U) | 
                                       ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_5_io_o_g) 
                                        & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_25_io_s))))));
        bufp->chgBit(oldp+1645,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_6_io_o_p));
        bufp->chgBit(oldp+1646,((1U & (((vlSelf->MAC__DOT__ppa1_io_augend 
                                         & vlSelf->MAC__DOT__ppa1_io_addend) 
                                        >> 0x15U) | 
                                       ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_20_io_co) 
                                        & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_21_io_s))))));
        bufp->chgBit(oldp+1647,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_7_io_o_p));
        bufp->chgBit(oldp+1648,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_8_io_o_g));
        bufp->chgBit(oldp+1649,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_8_io_o_p));
        bufp->chgBit(oldp+1650,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_9_io_o_g));
        bufp->chgBit(oldp+1651,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_9_io_o_p));
        bufp->chgBit(oldp+1652,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_g));
        bufp->chgBit(oldp+1653,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_p));
        bufp->chgBit(oldp+1654,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g));
        bufp->chgBit(oldp+1655,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_p));
        bufp->chgBit(oldp+1656,((1U & ((((vlSelf->MAC__DOT__ppa1_io_augend 
                                          & vlSelf->MAC__DOT__ppa1_io_addend) 
                                         >> 0x1eU) 
                                        | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_2_io_o_g) 
                                           & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_30_io_s))) 
                                       | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                          & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_3_io_o_p))))));
        bufp->chgBit(oldp+1657,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_12_io_o_p));
        bufp->chgBit(oldp+1658,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_2_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_2_io_o_p)))));
        bufp->chgBit(oldp+1659,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_13_io_o_p));
        bufp->chgBit(oldp+1660,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_1_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_1_io_o_p)))));
        bufp->chgBit(oldp+1661,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_14_io_o_p));
        bufp->chgBit(oldp+1662,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_io_o_p)))));
        bufp->chgBit(oldp+1663,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_15_io_o_p));
        bufp->chgBit(oldp+1664,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_26_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_26_io_s)))));
        bufp->chgBit(oldp+1665,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_16_io_o_p));
        bufp->chgBit(oldp+1666,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_5_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_5_io_o_p)))));
        bufp->chgBit(oldp+1667,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_17_io_o_p));
        bufp->chgBit(oldp+1668,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_4_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_4_io_o_p)))));
        bufp->chgBit(oldp+1669,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_18_io_o_p));
        bufp->chgBit(oldp+1670,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_22_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_22_io_s)))));
        bufp->chgBit(oldp+1671,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_19_io_o_p));
        bufp->chgBit(oldp+1672,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_20_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_9_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_20_io_s)))));
        bufp->chgBit(oldp+1673,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_20_io_o_p));
        bufp->chgBit(oldp+1674,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_21_io_o_g));
        bufp->chgBit(oldp+1675,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_21_io_o_p));
        bufp->chgBit(oldp+1676,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_22_io_o_g));
        bufp->chgBit(oldp+1677,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_22_io_o_p));
        bufp->chgBit(oldp+1678,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_23_io_o_g));
        bufp->chgBit(oldp+1679,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_23_io_o_p));
        bufp->chgBit(oldp+1680,((1U & (((vlSelf->MAC__DOT__ppa1_io_augend 
                                         & vlSelf->MAC__DOT__ppa1_io_addend) 
                                        >> 0x10U) | 
                                       ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_23_io_o_g) 
                                        & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_16_io_s))))));
        bufp->chgBit(oldp+1681,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_24_io_o_p));
        bufp->chgBit(oldp+1682,((1U & (((vlSelf->MAC__DOT__ppa1_io_augend 
                                         & vlSelf->MAC__DOT__ppa1_io_addend) 
                                        >> 0xbU) | 
                                       ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_10_io_co) 
                                        & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_11_io_s))))));
        bufp->chgBit(oldp+1683,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_25_io_o_p));
        bufp->chgBit(oldp+1684,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_26_io_o_g));
        bufp->chgBit(oldp+1685,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_26_io_o_p));
        bufp->chgBit(oldp+1686,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_27_io_o_g));
        bufp->chgBit(oldp+1687,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_27_io_o_p));
        bufp->chgBit(oldp+1688,((1U & ((((vlSelf->MAC__DOT__ppa1_io_augend 
                                          & vlSelf->MAC__DOT__ppa1_io_addend) 
                                         >> 0xbU) | 
                                        ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_10_io_co) 
                                         & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_11_io_s))) 
                                       | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_27_io_o_g) 
                                          & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_25_io_o_p))))));
        bufp->chgBit(oldp+1689,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_28_io_o_p));
        bufp->chgBit(oldp+1690,((1U & (((vlSelf->MAC__DOT__ppa1_io_augend 
                                         & vlSelf->MAC__DOT__ppa1_io_addend) 
                                        >> 6U) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_5_io_co) 
                                                  & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_6_io_s))))));
        bufp->chgBit(oldp+1691,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_29_io_o_p));
        bufp->chgBit(oldp+1692,((1U & ((((vlSelf->MAC__DOT__ppa1_io_augend 
                                          & vlSelf->MAC__DOT__ppa1_io_addend) 
                                         >> 6U) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_5_io_co) 
                                                   & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_6_io_s))) 
                                       | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_4_io_co) 
                                          & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_29_io_o_p))))));
        bufp->chgBit(oldp+1693,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_30_io_o_p));
        bufp->chgBit(oldp+1694,((1U & (((vlSelf->MAC__DOT__ppa1_io_augend 
                                         & vlSelf->MAC__DOT__ppa1_io_addend) 
                                        >> 3U) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_2_io_co) 
                                                  & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_3_io_s))))));
        bufp->chgBit(oldp+1695,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_31_io_o_p));
        bufp->chgBit(oldp+1696,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_32_io_o_g));
        bufp->chgBit(oldp+1697,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_32_io_o_p));
        bufp->chgBit(oldp+1698,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_33_io_o_g));
        bufp->chgBit(oldp+1699,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_33_io_o_p));
        bufp->chgBit(oldp+1700,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_34_io_o_g));
        bufp->chgBit(oldp+1701,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_34_io_o_p));
        bufp->chgBit(oldp+1702,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_g));
        bufp->chgBit(oldp+1703,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_p));
        bufp->chgBit(oldp+1704,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g));
        bufp->chgBit(oldp+1705,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p));
        bufp->chgBit(oldp+1706,((1U & (((((vlSelf->MAC__DOT__ppa1_io_augend 
                                           & vlSelf->MAC__DOT__ppa1_io_addend) 
                                          >> 0x1eU) 
                                         | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_2_io_o_g) 
                                            & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_30_io_s))) 
                                        | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                           & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_3_io_o_p))) 
                                       | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                          & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_12_io_o_p))))));
        bufp->chgBit(oldp+1707,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_12_io_o_p))));
        bufp->chgBit(oldp+1708,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_2_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_2_io_o_p))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_13_io_o_p)))));
        bufp->chgBit(oldp+1709,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_13_io_o_p))));
        bufp->chgBit(oldp+1710,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_1_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_1_io_o_p))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_14_io_o_p)))));
        bufp->chgBit(oldp+1711,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_14_io_o_p))));
        bufp->chgBit(oldp+1712,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_io_o_p))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_15_io_o_p)))));
        bufp->chgBit(oldp+1713,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_15_io_o_p))));
        bufp->chgBit(oldp+1714,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_26_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_26_io_s))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_16_io_o_p)))));
        bufp->chgBit(oldp+1715,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_16_io_o_p))));
        bufp->chgBit(oldp+1716,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_p)))));
        bufp->chgBit(oldp+1717,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_p))));
        bufp->chgBit(oldp+1718,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_5_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_5_io_o_p))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_17_io_o_p)))));
        bufp->chgBit(oldp+1719,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_17_io_o_p))));
        bufp->chgBit(oldp+1720,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_4_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_4_io_o_p))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_18_io_o_p)))));
        bufp->chgBit(oldp+1721,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_18_io_o_p))));
        bufp->chgBit(oldp+1722,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_22_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_22_io_s))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_19_io_o_p)))));
        bufp->chgBit(oldp+1723,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_19_io_o_p))));
        bufp->chgBit(oldp+1724,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_p)))));
        bufp->chgBit(oldp+1725,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_p))));
        bufp->chgBit(oldp+1726,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_20_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_9_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_20_io_s))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_20_io_o_p)))));
        bufp->chgBit(oldp+1727,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_20_io_o_p))));
        bufp->chgBit(oldp+1728,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_9_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_9_io_o_p)))));
        bufp->chgBit(oldp+1729,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_9_io_o_p))));
        bufp->chgBit(oldp+1730,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_8_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_8_io_o_p)))));
        bufp->chgBit(oldp+1731,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_8_io_o_p))));
        bufp->chgBit(oldp+1732,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_17_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_17_io_s)))));
        bufp->chgBit(oldp+1733,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_17_io_s))));
        bufp->chgBit(oldp+1734,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_23_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_23_io_o_p)))));
        bufp->chgBit(oldp+1735,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_23_io_o_p))));
        bufp->chgBit(oldp+1736,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_22_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_22_io_o_p)))));
        bufp->chgBit(oldp+1737,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_22_io_o_p))));
        bufp->chgBit(oldp+1738,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_21_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_21_io_o_p)))));
        bufp->chgBit(oldp+1739,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_21_io_o_p))));
        bufp->chgBit(oldp+1740,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_12_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_12_io_s)))));
        bufp->chgBit(oldp+1741,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_12_io_s))));
        bufp->chgBit(oldp+1742,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_55_io_o_g));
        bufp->chgBit(oldp+1743,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_34_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_27_io_o_p))));
        bufp->chgBit(oldp+1744,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_10_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_55_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_10_io_s)))));
        bufp->chgBit(oldp+1745,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_34_io_o_p) 
                                  & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_27_io_o_p)) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_10_io_s))));
        bufp->chgBit(oldp+1746,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_26_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_34_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_26_io_o_p)))));
        bufp->chgBit(oldp+1747,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_34_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_26_io_o_p))));
        bufp->chgBit(oldp+1748,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_7_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_34_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_7_io_s)))));
        bufp->chgBit(oldp+1749,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_34_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_7_io_s))));
        bufp->chgBit(oldp+1750,(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_59_io_o_g));
        bufp->chgBit(oldp+1751,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_33_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_4_io_s))));
        bufp->chgBit(oldp+1752,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_5_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_59_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_5_io_s)))));
        bufp->chgBit(oldp+1753,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_33_io_o_p) 
                                  & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_4_io_s)) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_5_io_s))));
        bufp->chgBit(oldp+1754,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_2_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_32_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_2_io_s)))));
        bufp->chgBit(oldp+1755,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_32_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_2_io_s))));
        bufp->chgBit(oldp+1756,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_1_io_s) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_io_co))));
        bufp->chgBit(oldp+1757,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_32_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_2_io_s))));
        bufp->chgBit(oldp+1758,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_2_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_32_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_2_io_s))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_3_io_s))));
        bufp->chgBit(oldp+1759,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_33_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_4_io_s))));
        bufp->chgBit(oldp+1760,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_59_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_5_io_s))));
        bufp->chgBit(oldp+1761,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_5_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_59_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_5_io_s))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_6_io_s))));
        bufp->chgBit(oldp+1762,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_34_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_7_io_s))));
        bufp->chgBit(oldp+1763,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_7_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_34_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_7_io_s))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_8_io_s))));
        bufp->chgBit(oldp+1764,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_26_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_34_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_26_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_9_io_s))));
        bufp->chgBit(oldp+1765,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_55_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_10_io_s))));
        bufp->chgBit(oldp+1766,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_10_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_55_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_10_io_s))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_11_io_s))));
        bufp->chgBit(oldp+1767,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_12_io_s))));
        bufp->chgBit(oldp+1768,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_12_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_12_io_s))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_13_io_s))));
        bufp->chgBit(oldp+1769,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_21_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_21_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_14_io_s))));
        bufp->chgBit(oldp+1770,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_22_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_22_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_15_io_s))));
        bufp->chgBit(oldp+1771,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_23_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_35_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_23_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_16_io_s))));
        bufp->chgBit(oldp+1772,(((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_17_io_s))));
        bufp->chgBit(oldp+1773,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_17_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_17_io_s))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_18_io_s))));
        bufp->chgBit(oldp+1774,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_8_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_8_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_19_io_s))));
        bufp->chgBit(oldp+1775,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_9_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_9_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_20_io_s))));
        bufp->chgBit(oldp+1776,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_20_io_co) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_9_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_20_io_s))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_20_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_21_io_s))));
        bufp->chgBit(oldp+1777,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_22_io_s))));
        bufp->chgBit(oldp+1778,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_22_io_co) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_22_io_s))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_19_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_23_io_s))));
        bufp->chgBit(oldp+1779,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_4_io_o_g) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_4_io_o_p))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_18_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_24_io_s))));
        bufp->chgBit(oldp+1780,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_5_io_o_g) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_10_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_5_io_o_p))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_17_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_25_io_s))));
        bufp->chgBit(oldp+1781,((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_26_io_s))));
        bufp->chgBit(oldp+1782,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_26_io_co) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_26_io_s))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_16_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_27_io_s))));
        bufp->chgBit(oldp+1783,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_io_o_g) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_io_o_p))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_15_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_28_io_s))));
        bufp->chgBit(oldp+1784,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_1_io_o_g) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_1_io_o_p))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_14_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_29_io_s))));
        bufp->chgBit(oldp+1785,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_2_io_o_g) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_11_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_2_io_o_p))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__Black_13_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa1.__PVT__PG_30_io_s))));
        bufp->chgBit(oldp+1786,((1U & vlSymsp->TOP__MAC__DOT__ppa1.io_outs)));
        bufp->chgBit(oldp+1787,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_io_s));
        bufp->chgBit(oldp+1788,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_io_co));
        bufp->chgBit(oldp+1789,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 1U))));
        bufp->chgBit(oldp+1790,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_1_io_s));
        bufp->chgBit(oldp+1791,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 2U))));
        bufp->chgBit(oldp+1792,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_2_io_s));
        bufp->chgBit(oldp+1793,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_2_io_co));
        bufp->chgBit(oldp+1794,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 3U))));
        bufp->chgBit(oldp+1795,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_3_io_s));
        bufp->chgBit(oldp+1796,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 4U))));
        bufp->chgBit(oldp+1797,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_4_io_s));
        bufp->chgBit(oldp+1798,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_4_io_co));
        bufp->chgBit(oldp+1799,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 5U))));
        bufp->chgBit(oldp+1800,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_5_io_s));
        bufp->chgBit(oldp+1801,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_5_io_co));
        bufp->chgBit(oldp+1802,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 6U))));
        bufp->chgBit(oldp+1803,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_6_io_s));
        bufp->chgBit(oldp+1804,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 7U))));
        bufp->chgBit(oldp+1805,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_7_io_s));
        bufp->chgBit(oldp+1806,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_7_io_co));
        bufp->chgBit(oldp+1807,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 8U))));
        bufp->chgBit(oldp+1808,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_8_io_s));
        bufp->chgBit(oldp+1809,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 9U))));
        bufp->chgBit(oldp+1810,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_9_io_s));
        bufp->chgBit(oldp+1811,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1812,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_s));
        bufp->chgBit(oldp+1813,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_co));
        bufp->chgBit(oldp+1814,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1815,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_11_io_s));
        bufp->chgBit(oldp+1816,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1817,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_12_io_s));
        bufp->chgBit(oldp+1818,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_12_io_co));
        bufp->chgBit(oldp+1819,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1820,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_13_io_s));
        bufp->chgBit(oldp+1821,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1822,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_14_io_s));
        bufp->chgBit(oldp+1823,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1824,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_15_io_s));
        bufp->chgBit(oldp+1825,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1826,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_16_io_s));
        bufp->chgBit(oldp+1827,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1828,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_17_io_s));
        bufp->chgBit(oldp+1829,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_17_io_co));
        bufp->chgBit(oldp+1830,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1831,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_18_io_s));
        bufp->chgBit(oldp+1832,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1833,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_19_io_s));
        bufp->chgBit(oldp+1834,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1835,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_20_io_s));
        bufp->chgBit(oldp+1836,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_20_io_co));
        bufp->chgBit(oldp+1837,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1838,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_21_io_s));
        bufp->chgBit(oldp+1839,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1840,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_22_io_s));
        bufp->chgBit(oldp+1841,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_22_io_co));
        bufp->chgBit(oldp+1842,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1843,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_23_io_s));
        bufp->chgBit(oldp+1844,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1845,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_24_io_s));
        bufp->chgBit(oldp+1846,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1847,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_25_io_s));
        bufp->chgBit(oldp+1848,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1849,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_26_io_s));
        bufp->chgBit(oldp+1850,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_26_io_co));
        bufp->chgBit(oldp+1851,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1852,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_27_io_s));
        bufp->chgBit(oldp+1853,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1854,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_28_io_s));
        bufp->chgBit(oldp+1855,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1856,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_29_io_s));
        bufp->chgBit(oldp+1857,((1U & (vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1858,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_30_io_s));
        bufp->chgBit(oldp+1859,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_io_o_g));
        bufp->chgBit(oldp+1860,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_io_o_p));
        bufp->chgBit(oldp+1861,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_1_io_o_g));
        bufp->chgBit(oldp+1862,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_1_io_o_p));
        bufp->chgBit(oldp+1863,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_2_io_o_g));
        bufp->chgBit(oldp+1864,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_2_io_o_p));
        bufp->chgBit(oldp+1865,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_3_io_o_p));
        bufp->chgBit(oldp+1866,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_4_io_o_g));
        bufp->chgBit(oldp+1867,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_4_io_o_p));
        bufp->chgBit(oldp+1868,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_5_io_o_g));
        bufp->chgBit(oldp+1869,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_5_io_o_p));
        bufp->chgBit(oldp+1870,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_6_io_o_p));
        bufp->chgBit(oldp+1871,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_7_io_o_p));
        bufp->chgBit(oldp+1872,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_8_io_o_g));
        bufp->chgBit(oldp+1873,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_8_io_o_p));
        bufp->chgBit(oldp+1874,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_9_io_o_g));
        bufp->chgBit(oldp+1875,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_9_io_o_p));
        bufp->chgBit(oldp+1876,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_g));
        bufp->chgBit(oldp+1877,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_p));
        bufp->chgBit(oldp+1878,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g));
        bufp->chgBit(oldp+1879,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_p));
        bufp->chgBit(oldp+1880,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_12_io_o_p));
        bufp->chgBit(oldp+1881,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_2_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_2_io_o_p)))));
        bufp->chgBit(oldp+1882,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_13_io_o_p));
        bufp->chgBit(oldp+1883,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_1_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_1_io_o_p)))));
        bufp->chgBit(oldp+1884,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_14_io_o_p));
        bufp->chgBit(oldp+1885,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_io_o_p)))));
        bufp->chgBit(oldp+1886,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_15_io_o_p));
        bufp->chgBit(oldp+1887,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_26_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_26_io_s)))));
        bufp->chgBit(oldp+1888,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_16_io_o_p));
        bufp->chgBit(oldp+1889,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_5_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_5_io_o_p)))));
        bufp->chgBit(oldp+1890,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_17_io_o_p));
        bufp->chgBit(oldp+1891,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_4_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_4_io_o_p)))));
        bufp->chgBit(oldp+1892,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_18_io_o_p));
        bufp->chgBit(oldp+1893,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_22_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_22_io_s)))));
        bufp->chgBit(oldp+1894,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_19_io_o_p));
        bufp->chgBit(oldp+1895,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_20_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_9_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_20_io_s)))));
        bufp->chgBit(oldp+1896,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_20_io_o_p));
        bufp->chgBit(oldp+1897,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_21_io_o_g));
        bufp->chgBit(oldp+1898,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_21_io_o_p));
        bufp->chgBit(oldp+1899,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_22_io_o_g));
        bufp->chgBit(oldp+1900,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_22_io_o_p));
        bufp->chgBit(oldp+1901,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_23_io_o_g));
        bufp->chgBit(oldp+1902,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_23_io_o_p));
        bufp->chgBit(oldp+1903,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_24_io_o_p));
        bufp->chgBit(oldp+1904,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_25_io_o_p));
        bufp->chgBit(oldp+1905,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_26_io_o_g));
        bufp->chgBit(oldp+1906,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_26_io_o_p));
        bufp->chgBit(oldp+1907,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_27_io_o_g));
        bufp->chgBit(oldp+1908,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_27_io_o_p));
        bufp->chgBit(oldp+1909,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_28_io_o_p));
        bufp->chgBit(oldp+1910,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_29_io_o_p));
        bufp->chgBit(oldp+1911,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_30_io_o_p));
        bufp->chgBit(oldp+1912,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_31_io_o_p));
        bufp->chgBit(oldp+1913,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_32_io_o_g));
        bufp->chgBit(oldp+1914,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_32_io_o_p));
        bufp->chgBit(oldp+1915,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_33_io_o_g));
        bufp->chgBit(oldp+1916,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_33_io_o_p));
        bufp->chgBit(oldp+1917,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_g));
        bufp->chgBit(oldp+1918,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_p));
        bufp->chgBit(oldp+1919,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_g));
        bufp->chgBit(oldp+1920,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_p));
        bufp->chgBit(oldp+1921,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g));
        bufp->chgBit(oldp+1922,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p));
        bufp->chgBit(oldp+1923,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_12_io_o_p))));
        bufp->chgBit(oldp+1924,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_2_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_2_io_o_p))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_13_io_o_p)))));
        bufp->chgBit(oldp+1925,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_13_io_o_p))));
        bufp->chgBit(oldp+1926,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_1_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_1_io_o_p))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_14_io_o_p)))));
        bufp->chgBit(oldp+1927,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_14_io_o_p))));
        bufp->chgBit(oldp+1928,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_io_o_p))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_15_io_o_p)))));
        bufp->chgBit(oldp+1929,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_15_io_o_p))));
        bufp->chgBit(oldp+1930,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_26_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_26_io_s))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_16_io_o_p)))));
        bufp->chgBit(oldp+1931,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_16_io_o_p))));
        bufp->chgBit(oldp+1932,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_p)))));
        bufp->chgBit(oldp+1933,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_p))));
        bufp->chgBit(oldp+1934,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_5_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_5_io_o_p))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_17_io_o_p)))));
        bufp->chgBit(oldp+1935,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_17_io_o_p))));
        bufp->chgBit(oldp+1936,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_4_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_4_io_o_p))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_18_io_o_p)))));
        bufp->chgBit(oldp+1937,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_18_io_o_p))));
        bufp->chgBit(oldp+1938,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_22_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_22_io_s))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_19_io_o_p)))));
        bufp->chgBit(oldp+1939,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_19_io_o_p))));
        bufp->chgBit(oldp+1940,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_p)))));
        bufp->chgBit(oldp+1941,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_p))));
        bufp->chgBit(oldp+1942,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_20_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_9_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_20_io_s))) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_20_io_o_p)))));
        bufp->chgBit(oldp+1943,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_20_io_o_p))));
        bufp->chgBit(oldp+1944,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_9_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_9_io_o_p)))));
        bufp->chgBit(oldp+1945,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_9_io_o_p))));
        bufp->chgBit(oldp+1946,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_8_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_8_io_o_p)))));
        bufp->chgBit(oldp+1947,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_8_io_o_p))));
        bufp->chgBit(oldp+1948,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_17_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_17_io_s)))));
        bufp->chgBit(oldp+1949,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_17_io_s))));
        bufp->chgBit(oldp+1950,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_23_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_23_io_o_p)))));
        bufp->chgBit(oldp+1951,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_23_io_o_p))));
        bufp->chgBit(oldp+1952,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_22_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_22_io_o_p)))));
        bufp->chgBit(oldp+1953,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_22_io_o_p))));
        bufp->chgBit(oldp+1954,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_21_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_21_io_o_p)))));
        bufp->chgBit(oldp+1955,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_21_io_o_p))));
        bufp->chgBit(oldp+1956,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_12_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_12_io_s)))));
        bufp->chgBit(oldp+1957,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_12_io_s))));
        bufp->chgBit(oldp+1958,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_55_io_o_g));
        bufp->chgBit(oldp+1959,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_27_io_o_p))));
        bufp->chgBit(oldp+1960,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_55_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_s)))));
        bufp->chgBit(oldp+1961,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_p) 
                                  & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_27_io_o_p)) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_s))));
        bufp->chgBit(oldp+1962,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_26_io_o_g) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_26_io_o_p)))));
        bufp->chgBit(oldp+1963,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_26_io_o_p))));
        bufp->chgBit(oldp+1964,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_7_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_7_io_s)))));
        bufp->chgBit(oldp+1965,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_7_io_s))));
        bufp->chgBit(oldp+1966,(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_59_io_o_g));
        bufp->chgBit(oldp+1967,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_33_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_4_io_s))));
        bufp->chgBit(oldp+1968,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_5_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_59_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_5_io_s)))));
        bufp->chgBit(oldp+1969,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_33_io_o_p) 
                                  & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_4_io_s)) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_5_io_s))));
        bufp->chgBit(oldp+1970,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_2_io_co) 
                                 | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_32_io_o_g) 
                                    & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_2_io_s)))));
        bufp->chgBit(oldp+1971,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_32_io_o_p) 
                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_2_io_s))));
        bufp->chgBit(oldp+1972,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_1_io_s) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_io_co))));
        bufp->chgBit(oldp+1973,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_32_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_2_io_s))));
        bufp->chgBit(oldp+1974,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_2_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_32_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_2_io_s))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_3_io_s))));
        bufp->chgBit(oldp+1975,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_33_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_4_io_s))));
        bufp->chgBit(oldp+1976,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_59_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_5_io_s))));
        bufp->chgBit(oldp+1977,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_5_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_59_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_5_io_s))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_6_io_s))));
        bufp->chgBit(oldp+1978,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_7_io_s))));
        bufp->chgBit(oldp+1979,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_7_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_7_io_s))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_8_io_s))));
        bufp->chgBit(oldp+1980,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_26_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_34_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_26_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_9_io_s))));
        bufp->chgBit(oldp+1981,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_55_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_s))));
        bufp->chgBit(oldp+1982,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_55_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_s))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_11_io_s))));
        bufp->chgBit(oldp+1983,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_12_io_s))));
        bufp->chgBit(oldp+1984,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_12_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_12_io_s))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_13_io_s))));
        bufp->chgBit(oldp+1985,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_21_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_21_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_14_io_s))));
        bufp->chgBit(oldp+1986,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_22_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_22_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_15_io_s))));
        bufp->chgBit(oldp+1987,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_23_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_35_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_23_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_16_io_s))));
        bufp->chgBit(oldp+1988,(((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_17_io_s))));
        bufp->chgBit(oldp+1989,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_17_io_co) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_17_io_s))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_18_io_s))));
        bufp->chgBit(oldp+1990,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_8_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_8_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_19_io_s))));
        bufp->chgBit(oldp+1991,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_9_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_9_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_20_io_s))));
        bufp->chgBit(oldp+1992,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_20_io_co) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_9_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_20_io_s))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_20_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_21_io_s))));
        bufp->chgBit(oldp+1993,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_22_io_s))));
        bufp->chgBit(oldp+1994,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_22_io_co) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_22_io_s))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_19_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_23_io_s))));
        bufp->chgBit(oldp+1995,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_4_io_o_g) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_4_io_o_p))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_18_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_24_io_s))));
        bufp->chgBit(oldp+1996,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_5_io_o_g) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_10_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_5_io_o_p))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_17_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_25_io_s))));
        bufp->chgBit(oldp+1997,((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_26_io_s))));
        bufp->chgBit(oldp+1998,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_26_io_co) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_26_io_s))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_16_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_27_io_s))));
        bufp->chgBit(oldp+1999,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_io_o_g) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_io_o_p))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_15_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_28_io_s))));
        bufp->chgBit(oldp+2000,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_1_io_o_g) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_1_io_o_p))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_14_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_29_io_s))));
        bufp->chgBit(oldp+2001,(((((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_2_io_o_g) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_2_io_o_p))) 
                                  | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                     & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_13_io_o_p))) 
                                 ^ (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_30_io_s))));
    }
    bufp->chgBit(oldp+2002,(vlSelf->clock));
    bufp->chgBit(oldp+2003,(vlSelf->reset));
    bufp->chgSData(oldp+2004,(vlSelf->io_multiplicand),16);
    bufp->chgSData(oldp+2005,(vlSelf->io_multiplier),16);
    bufp->chgIData(oldp+2006,(vlSelf->io_addend),31);
    bufp->chgIData(oldp+2007,(vlSelf->io_outs),31);
    bufp->chgSData(oldp+2008,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_a) 
                                 << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_a) 
                                              << 0xeU) 
                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_a) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_a) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_a) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_a) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_a) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_a) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_a) 
                                                                   << 7U) 
                                                                  | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_a) 
                                                                     << 6U)))))))))) 
                               | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_a) 
                                   << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_a) 
                                              << 4U) 
                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_a) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_a) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->MAC__DOT__pp__DOT___T_21) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->io_multiplicand) 
                                                            & (IData)(vlSelf->io_multiplier)))))))))),16);
    bufp->chgSData(oldp+2009,(((((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_30_io_a) 
                                 << 0xfU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_35_io_b) 
                                              << 0xeU) 
                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_40_io_b) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_45_io_b) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_49_io_b) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_53_io_b) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_57_io_b) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_60_io_b) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_63_io_b) 
                                                                   << 7U) 
                                                                  | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_66_io_b) 
                                                                     << 6U)))))))))) 
                               | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_68_io_b) 
                                   << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_70_io_b) 
                                              << 4U) 
                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_72_io_b) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_73_io_b) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_74_io_b) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->io_multiplicand) 
                                                            & ((IData)(vlSelf->io_multiplier) 
                                                               >> 1U)))))))))),16);
    bufp->chgSData(oldp+2010,((((0x8000U & ((IData)(vlSelf->io_multiplicand) 
                                            & (IData)(vlSelf->io_multiplier))) 
                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_75_io_b) 
                                    << 0xeU) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_io_ci) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_76_io_a) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_77_io_b) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_4_io_ci) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_79_io_a) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_80_io_b) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_11_io_ci) 
                                                                   << 7U) 
                                                                  | ((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_84_io_a) 
                                                                     << 6U)))))))))) 
                               | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_86_io_b) 
                                   << 5U) | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_21_io_ci) 
                                              << 4U) 
                                             | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_91_io_a) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_94_io_b) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_34_io_ci) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->MAC__DOT__wt__DOT__FullAdder_100_io_a)))))))),16);
    bufp->chgBit(oldp+2011,((1U & ((IData)(vlSelf->io_multiplicand) 
                                   & (IData)(vlSelf->io_multiplier)))));
    bufp->chgBit(oldp+2012,((1U & ((IData)(vlSelf->io_multiplicand) 
                                   & ((IData)(vlSelf->io_multiplier) 
                                      >> 1U)))));
    bufp->chgBit(oldp+2013,((1U & (((IData)(vlSelf->io_multiplicand) 
                                    & (IData)(vlSelf->io_multiplier)) 
                                   >> 0xfU))));
    bufp->chgBit(oldp+2014,((1U & vlSelf->io_addend)));
    bufp->chgBit(oldp+2015,((1U & (vlSelf->io_addend 
                                   >> 1U))));
    bufp->chgBit(oldp+2016,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 1U))));
    bufp->chgBit(oldp+2017,((1U & (vlSelf->io_addend 
                                   >> 2U))));
    bufp->chgBit(oldp+2018,((1U & (vlSelf->io_addend 
                                   >> 3U))));
    bufp->chgBit(oldp+2019,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 3U))));
    bufp->chgBit(oldp+2020,((1U & (vlSelf->io_addend 
                                   >> 4U))));
    bufp->chgBit(oldp+2021,((1U & (vlSelf->io_addend 
                                   >> 5U))));
    bufp->chgBit(oldp+2022,((1U & (vlSelf->io_addend 
                                   >> 6U))));
    bufp->chgBit(oldp+2023,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 6U))));
    bufp->chgBit(oldp+2024,((1U & (vlSelf->io_addend 
                                   >> 7U))));
    bufp->chgBit(oldp+2025,((1U & (vlSelf->io_addend 
                                   >> 8U))));
    bufp->chgBit(oldp+2026,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 8U))));
    bufp->chgBit(oldp+2027,((1U & (vlSelf->io_addend 
                                   >> 9U))));
    bufp->chgBit(oldp+2028,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 9U))));
    bufp->chgBit(oldp+2029,((1U & (vlSelf->io_addend 
                                   >> 0xaU))));
    bufp->chgBit(oldp+2030,((1U & (vlSelf->io_addend 
                                   >> 0xbU))));
    bufp->chgBit(oldp+2031,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0xbU))));
    bufp->chgBit(oldp+2032,((1U & (vlSelf->io_addend 
                                   >> 0xcU))));
    bufp->chgBit(oldp+2033,((1U & (vlSelf->io_addend 
                                   >> 0xdU))));
    bufp->chgBit(oldp+2034,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0xdU))));
    bufp->chgBit(oldp+2035,((1U & (vlSelf->io_addend 
                                   >> 0xeU))));
    bufp->chgBit(oldp+2036,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0xeU))));
    bufp->chgBit(oldp+2037,((1U & (vlSelf->io_addend 
                                   >> 0xfU))));
    bufp->chgBit(oldp+2038,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0xfU))));
    bufp->chgBit(oldp+2039,((1U & (vlSelf->io_addend 
                                   >> 0x10U))));
    bufp->chgBit(oldp+2040,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0x10U))));
    bufp->chgBit(oldp+2041,((1U & (vlSelf->io_addend 
                                   >> 0x11U))));
    bufp->chgBit(oldp+2042,((1U & (vlSelf->io_addend 
                                   >> 0x12U))));
    bufp->chgBit(oldp+2043,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0x12U))));
    bufp->chgBit(oldp+2044,((1U & (vlSelf->io_addend 
                                   >> 0x13U))));
    bufp->chgBit(oldp+2045,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0x13U))));
    bufp->chgBit(oldp+2046,((1U & (vlSelf->io_addend 
                                   >> 0x14U))));
    bufp->chgBit(oldp+2047,((1U & (vlSelf->io_addend 
                                   >> 0x15U))));
    bufp->chgBit(oldp+2048,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0x15U))));
    bufp->chgBit(oldp+2049,((1U & (vlSelf->io_addend 
                                   >> 0x16U))));
    bufp->chgBit(oldp+2050,((1U & (vlSelf->io_addend 
                                   >> 0x17U))));
    bufp->chgBit(oldp+2051,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0x17U))));
    bufp->chgBit(oldp+2052,((1U & (vlSelf->io_addend 
                                   >> 0x18U))));
    bufp->chgBit(oldp+2053,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0x18U))));
    bufp->chgBit(oldp+2054,((1U & (vlSelf->io_addend 
                                   >> 0x19U))));
    bufp->chgBit(oldp+2055,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0x19U))));
    bufp->chgBit(oldp+2056,((1U & (vlSelf->io_addend 
                                   >> 0x1aU))));
    bufp->chgBit(oldp+2057,((1U & (vlSelf->io_addend 
                                   >> 0x1bU))));
    bufp->chgBit(oldp+2058,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0x1bU))));
    bufp->chgBit(oldp+2059,((1U & (vlSelf->io_addend 
                                   >> 0x1cU))));
    bufp->chgBit(oldp+2060,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0x1cU))));
    bufp->chgBit(oldp+2061,((1U & (vlSelf->io_addend 
                                   >> 0x1dU))));
    bufp->chgBit(oldp+2062,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0x1dU))));
    bufp->chgBit(oldp+2063,((1U & (vlSelf->io_addend 
                                   >> 0x1eU))));
    bufp->chgBit(oldp+2064,((1U & ((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                    & vlSelf->io_addend) 
                                   >> 0x1eU))));
    bufp->chgBit(oldp+2065,((1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     & vlSelf->io_addend) 
                                    >> 0x1eU) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_2_io_o_g) 
                                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_30_io_s))))));
    bufp->chgBit(oldp+2066,((1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     & vlSelf->io_addend) 
                                    >> 0x19U) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_5_io_o_g) 
                                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_25_io_s))))));
    bufp->chgBit(oldp+2067,((1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     & vlSelf->io_addend) 
                                    >> 0x15U) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_20_io_co) 
                                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_21_io_s))))));
    bufp->chgBit(oldp+2068,((1U & ((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      & vlSelf->io_addend) 
                                     >> 0x1eU) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_2_io_o_g) 
                                                  & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_30_io_s))) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_3_io_o_p))))));
    bufp->chgBit(oldp+2069,((1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     & vlSelf->io_addend) 
                                    >> 0x10U) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_23_io_o_g) 
                                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_16_io_s))))));
    bufp->chgBit(oldp+2070,((1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     & vlSelf->io_addend) 
                                    >> 0xbU) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_co) 
                                                & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_11_io_s))))));
    bufp->chgBit(oldp+2071,((1U & ((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      & vlSelf->io_addend) 
                                     >> 0xbU) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_10_io_co) 
                                                 & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_11_io_s))) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_27_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_25_io_o_p))))));
    bufp->chgBit(oldp+2072,((1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     & vlSelf->io_addend) 
                                    >> 6U) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_5_io_co) 
                                              & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_6_io_s))))));
    bufp->chgBit(oldp+2073,((1U & ((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                      & vlSelf->io_addend) 
                                     >> 6U) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_5_io_co) 
                                               & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_6_io_s))) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_4_io_co) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_29_io_o_p))))));
    bufp->chgBit(oldp+2074,((1U & (((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                     & vlSelf->io_addend) 
                                    >> 3U) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_2_io_co) 
                                              & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_3_io_s))))));
    bufp->chgBit(oldp+2075,((1U & (((((vlSymsp->TOP__MAC__DOT__ppa1.io_outs 
                                       & vlSelf->io_addend) 
                                      >> 0x1eU) | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_2_io_o_g) 
                                                   & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__PG_30_io_s))) 
                                    | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_11_io_o_g) 
                                       & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_3_io_o_p))) 
                                   | ((IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_36_io_o_g) 
                                      & (IData)(vlSymsp->TOP__MAC__DOT__ppa2.__PVT__Black_12_io_o_p))))));
}

void VMAC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root__trace_cleanup\n"); );
    // Init
    VMAC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC___024root*>(voidSelf);
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
