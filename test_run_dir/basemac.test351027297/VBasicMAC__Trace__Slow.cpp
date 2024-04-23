// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBasicMAC__Syms.h"


//======================

void VBasicMAC::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VBasicMAC::traceInit, &VBasicMAC::traceFull, &VBasicMAC::traceChg, this);
}
void VBasicMAC::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VBasicMAC* t = (VBasicMAC*)userthis;
    VBasicMAC__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VBasicMAC::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBasicMAC* t = (VBasicMAC*)userthis;
    VBasicMAC__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VBasicMAC::traceInitThis(VBasicMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VBasicMAC::traceFullThis(VBasicMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBasicMAC::traceInitThis__1(VBasicMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1,"clock", false,-1);
        vcdp->declBit(c+9,"reset", false,-1);
        vcdp->declBus(c+17,"io_multiplicand", false,-1, 24,0);
        vcdp->declBus(c+25,"io_multiplier", false,-1, 17,0);
        vcdp->declQuad(c+33,"io_addend", false,-1, 42,0);
        vcdp->declQuad(c+49,"io_res", false,-1, 42,0);
        vcdp->declBit(c+1,"BasicMAC clock", false,-1);
        vcdp->declBit(c+9,"BasicMAC reset", false,-1);
        vcdp->declBus(c+17,"BasicMAC io_multiplicand", false,-1, 24,0);
        vcdp->declBus(c+25,"BasicMAC io_multiplier", false,-1, 17,0);
        vcdp->declQuad(c+33,"BasicMAC io_addend", false,-1, 42,0);
        vcdp->declQuad(c+49,"BasicMAC io_res", false,-1, 42,0);
    }
}

void VBasicMAC::traceFullThis__1(VBasicMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->clock));
        vcdp->fullBit(c+9,(vlTOPp->reset));
        vcdp->fullBus(c+17,(vlTOPp->io_multiplicand),25);
        vcdp->fullBus(c+25,(vlTOPp->io_multiplier),18);
        vcdp->fullQuad(c+33,(vlTOPp->io_addend),43);
        vcdp->fullQuad(c+49,(vlTOPp->io_res),43);
    }
}
