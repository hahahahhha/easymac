// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC.h for the primary calling header

#include "VMAC__pch.h"
#include "VMAC_PPAdder.h"

VL_ATTR_COLD void VMAC_PPAdder___ctor_var_reset(VMAC_PPAdder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMAC_PPAdder___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_augend = VL_RAND_RESET_I(31);
    vlSelf->io_addend = VL_RAND_RESET_I(31);
    vlSelf->io_outs = VL_RAND_RESET_I(31);
    vlSelf->__PVT__PG_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_io_co = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_1_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_2_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_2_io_co = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_3_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_4_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_4_io_co = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_5_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_5_io_co = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_6_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_7_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_7_io_co = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_8_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_9_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_10_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_10_io_co = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_11_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_12_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_12_io_co = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_13_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_14_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_15_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_16_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_17_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_17_io_co = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_18_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_19_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_20_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_20_io_co = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_21_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_22_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_22_io_co = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_23_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_24_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_25_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_26_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_26_io_co = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_27_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_28_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_29_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PG_30_io_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_1_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_1_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_2_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_2_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_3_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_4_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_4_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_5_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_5_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_6_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_7_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_8_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_8_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_9_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_9_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_10_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_10_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_11_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_11_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_12_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_13_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_14_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_15_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_16_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_17_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_18_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_19_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_20_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_21_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_21_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_22_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_22_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_23_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_23_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_24_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_25_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_26_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_26_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_27_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_27_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_28_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_29_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_30_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_31_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_32_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_32_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_33_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_33_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_34_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_34_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_35_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_35_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_36_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_36_io_o_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_55_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Black_59_io_o_g = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_112 = VL_RAND_RESET_I(19);
}
