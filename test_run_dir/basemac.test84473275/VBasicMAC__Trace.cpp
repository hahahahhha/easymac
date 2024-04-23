// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBasicMAC__Syms.h"


//======================

void VBasicMAC::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBasicMAC* t = (VBasicMAC*)userthis;
    VBasicMAC__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VBasicMAC::traceChgThis(VBasicMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBasicMAC::traceChgThis__2(VBasicMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->clock));
        vcdp->chgBit(c+9,(vlTOPp->reset));
        vcdp->chgBus(c+17,(vlTOPp->io_multiplicand),25);
        vcdp->chgBus(c+25,(vlTOPp->io_multiplier),18);
        vcdp->chgQuad(c+33,(vlTOPp->io_addend),43);
        vcdp->chgQuad(c+49,(vlTOPp->io_res),43);
    }
}
