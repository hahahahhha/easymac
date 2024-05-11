// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VMAC__SYMS_H_
#define _VMAC__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VMAC.h"
#include "VMAC_PPAdder.h"

// SYMS CLASS
class VMAC__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VMAC*                          TOPp;
    VMAC_PPAdder                   TOP__MAC__DOT__ppa1;
    VMAC_PPAdder                   TOP__MAC__DOT__ppa2;
    
    // CREATORS
    VMAC__Syms(VMAC* topp, const char* namep);
    ~VMAC__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
