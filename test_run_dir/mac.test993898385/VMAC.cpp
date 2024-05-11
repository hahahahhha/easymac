// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMAC__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMAC::VMAC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMAC__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_multiplicand{vlSymsp->TOP.io_multiplicand}
    , io_multiplier{vlSymsp->TOP.io_multiplier}
    , io_addend{vlSymsp->TOP.io_addend}
    , io_outs{vlSymsp->TOP.io_outs}
    , __PVT__MAC__DOT__ppa1{vlSymsp->TOP.__PVT__MAC__DOT__ppa1}
    , __PVT__MAC__DOT__ppa2{vlSymsp->TOP.__PVT__MAC__DOT__ppa2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VMAC::VMAC(const char* _vcname__)
    : VMAC(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMAC::~VMAC() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMAC___024root___eval_debug_assertions(VMAC___024root* vlSelf);
#endif  // VL_DEBUG
void VMAC___024root___eval_static(VMAC___024root* vlSelf);
void VMAC___024root___eval_initial(VMAC___024root* vlSelf);
void VMAC___024root___eval_settle(VMAC___024root* vlSelf);
void VMAC___024root___eval(VMAC___024root* vlSelf);

void VMAC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMAC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMAC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMAC___024root___eval_static(&(vlSymsp->TOP));
        VMAC___024root___eval_initial(&(vlSymsp->TOP));
        VMAC___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMAC___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMAC::eventsPending() { return false; }

uint64_t VMAC::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMAC::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMAC___024root___eval_final(VMAC___024root* vlSelf);

VL_ATTR_COLD void VMAC::final() {
    VMAC___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMAC::hierName() const { return vlSymsp->name(); }
const char* VMAC::modelName() const { return "VMAC"; }
unsigned VMAC::threads() const { return 1; }
void VMAC::prepareClone() const { contextp()->prepareClone(); }
void VMAC::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VMAC::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VMAC___024root__trace_decl_types(VerilatedVcd* tracep);

void VMAC___024root__trace_init_top(VMAC___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMAC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC___024root*>(voidSelf);
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VMAC___024root__trace_decl_types(tracep);
    VMAC___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VMAC___024root__trace_register(VMAC___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMAC::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VMAC::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMAC___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
