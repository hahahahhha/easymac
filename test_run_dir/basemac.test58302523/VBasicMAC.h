// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBASICMAC_H_
#define _VBASICMAC_H_  // guard

#include "verilated.h"

//==========

class VBasicMAC__Syms;
class VBasicMAC_VerilatedVcd;


//----------

VL_MODULE(VBasicMAC) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN(io_multiplicand,24,0);
    VL_IN(io_multiplier,17,0);
    VL_IN64(io_addend,42,0);
    VL_OUT64(io_res,42,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VBasicMAC__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VBasicMAC);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VBasicMAC(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBasicMAC();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VBasicMAC__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBasicMAC__Syms* symsp, bool first);
  private:
    static QData _change_request(VBasicMAC__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VBasicMAC__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VBasicMAC__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VBasicMAC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VBasicMAC__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VBasicMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VBasicMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VBasicMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VBasicMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VBasicMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VBasicMAC__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
