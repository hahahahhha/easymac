// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBasicMAC.h for the primary calling header

#include "VBasicMAC.h"
#include "VBasicMAC__Syms.h"

//==========

VL_CTOR_IMP(VBasicMAC) {
    VBasicMAC__Syms* __restrict vlSymsp = __VlSymsp = new VBasicMAC__Syms(this, name());
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBasicMAC::__Vconfigure(VBasicMAC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VBasicMAC::~VBasicMAC() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VBasicMAC::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBasicMAC::eval\n"); );
    VBasicMAC__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("BasicMAC.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VBasicMAC::_eval_initial_loop(VBasicMAC__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("BasicMAC.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VBasicMAC::_combo__TOP__1(VBasicMAC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMAC::_combo__TOP__1\n"); );
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_res = (VL_ULL(0x7ffffffffff) & (((QData)((IData)(vlTOPp->io_multiplicand)) 
                                                * (QData)((IData)(vlTOPp->io_multiplier))) 
                                               + vlTOPp->io_addend));
}

void VBasicMAC::_eval(VBasicMAC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMAC::_eval\n"); );
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VBasicMAC::_eval_initial(VBasicMAC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMAC::_eval_initial\n"); );
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBasicMAC::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMAC::final\n"); );
    // Variables
    VBasicMAC__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBasicMAC::_eval_settle(VBasicMAC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMAC::_eval_settle\n"); );
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VBasicMAC::_change_request(VBasicMAC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMAC::_change_request\n"); );
    VBasicMAC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VBasicMAC::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMAC::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_multiplicand & 0xfe000000U))) {
        Verilated::overWidthError("io_multiplicand");}
    if (VL_UNLIKELY((io_multiplier & 0xfffc0000U))) {
        Verilated::overWidthError("io_multiplier");}
    if (VL_UNLIKELY((io_addend & VL_ULL(0)))) {
        Verilated::overWidthError("io_addend");}
}
#endif  // VL_DEBUG

void VBasicMAC::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicMAC::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_multiplicand = VL_RAND_RESET_I(25);
    io_multiplier = VL_RAND_RESET_I(18);
    io_addend = VL_RAND_RESET_Q(43);
    io_res = VL_RAND_RESET_Q(43);
    __Vm_traceActivity = 0;
}
