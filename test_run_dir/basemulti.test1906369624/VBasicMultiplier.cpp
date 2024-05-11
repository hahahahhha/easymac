// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBasicMultiplier__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBasicMultiplier::VBasicMultiplier(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBasicMultiplier__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_multiplicand{vlSymsp->TOP.io_multiplicand}
    , io_multiplier{vlSymsp->TOP.io_multiplier}
    , io_res{vlSymsp->TOP.io_res}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VBasicMultiplier::VBasicMultiplier(const char* _vcname__)
    : VBasicMultiplier(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBasicMultiplier::~VBasicMultiplier() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VBasicMultiplier___024root___eval_debug_assertions(VBasicMultiplier___024root* vlSelf);
#endif  // VL_DEBUG
void VBasicMultiplier___024root___eval_static(VBasicMultiplier___024root* vlSelf);
void VBasicMultiplier___024root___eval_initial(VBasicMultiplier___024root* vlSelf);
void VBasicMultiplier___024root___eval_settle(VBasicMultiplier___024root* vlSelf);
void VBasicMultiplier___024root___eval(VBasicMultiplier___024root* vlSelf);

void VBasicMultiplier::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBasicMultiplier::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBasicMultiplier___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VBasicMultiplier___024root___eval_static(&(vlSymsp->TOP));
        VBasicMultiplier___024root___eval_initial(&(vlSymsp->TOP));
        VBasicMultiplier___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VBasicMultiplier___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VBasicMultiplier::eventsPending() { return false; }

uint64_t VBasicMultiplier::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VBasicMultiplier::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VBasicMultiplier___024root___eval_final(VBasicMultiplier___024root* vlSelf);

VL_ATTR_COLD void VBasicMultiplier::final() {
    VBasicMultiplier___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBasicMultiplier::hierName() const { return vlSymsp->name(); }
const char* VBasicMultiplier::modelName() const { return "VBasicMultiplier"; }
unsigned VBasicMultiplier::threads() const { return 1; }
void VBasicMultiplier::prepareClone() const { contextp()->prepareClone(); }
void VBasicMultiplier::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VBasicMultiplier::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VBasicMultiplier___024root__trace_decl_types(VerilatedVcd* tracep);

void VBasicMultiplier___024root__trace_init_top(VBasicMultiplier___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBasicMultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBasicMultiplier___024root*>(voidSelf);
    VBasicMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VBasicMultiplier___024root__trace_decl_types(tracep);
    VBasicMultiplier___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VBasicMultiplier___024root__trace_register(VBasicMultiplier___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBasicMultiplier::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VBasicMultiplier::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBasicMultiplier___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
