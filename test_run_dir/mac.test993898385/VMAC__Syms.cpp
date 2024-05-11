// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VMAC__pch.h"
#include "VMAC.h"
#include "VMAC___024root.h"
#include "VMAC_PPAdder.h"

// FUNCTIONS
VMAC__Syms::~VMAC__Syms()
{
}

VMAC__Syms::VMAC__Syms(VerilatedContext* contextp, const char* namep, VMAC* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__MAC__DOT__ppa1{this, Verilated::catName(namep, "MAC.ppa1")}
    , TOP__MAC__DOT__ppa2{this, Verilated::catName(namep, "MAC.ppa2")}
{
        // Check resources
        Verilated::stackCheck(73);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__MAC__DOT__ppa1 = &TOP__MAC__DOT__ppa1;
    TOP.__PVT__MAC__DOT__ppa2 = &TOP__MAC__DOT__ppa2;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__MAC__DOT__ppa1.__Vconfigure(true);
    TOP__MAC__DOT__ppa2.__Vconfigure(false);
}
