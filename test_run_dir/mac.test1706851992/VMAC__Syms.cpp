// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VMAC__Syms.h"
#include "VMAC.h"
#include "VMAC_PPAdder.h"



// FUNCTIONS
VMAC__Syms::VMAC__Syms(VMAC* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__MAC__DOT__ppa1(Verilated::catName(topp->name(), "MAC.ppa1"))
    , TOP__MAC__DOT__ppa2(Verilated::catName(topp->name(), "MAC.ppa2"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__MAC__DOT__ppa1 = &TOP__MAC__DOT__ppa1;
    TOPp->__PVT__MAC__DOT__ppa2 = &TOP__MAC__DOT__ppa2;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__MAC__DOT__ppa1.__Vconfigure(this, true);
    TOP__MAC__DOT__ppa2.__Vconfigure(this, false);
}
