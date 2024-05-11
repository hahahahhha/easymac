// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VHighQualityAdder__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VHighQualityAdder::VHighQualityAdder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VHighQualityAdder__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_inputs_1{vlSymsp->TOP.io_inputs_1}
    , io_inputs_0{vlSymsp->TOP.io_inputs_0}
    , io_outs_0{vlSymsp->TOP.io_outs_0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VHighQualityAdder::VHighQualityAdder(const char* _vcname__)
    : VHighQualityAdder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VHighQualityAdder::~VHighQualityAdder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VHighQualityAdder___024root___eval_debug_assertions(VHighQualityAdder___024root* vlSelf);
#endif  // VL_DEBUG
void VHighQualityAdder___024root___eval_static(VHighQualityAdder___024root* vlSelf);
void VHighQualityAdder___024root___eval_initial(VHighQualityAdder___024root* vlSelf);
void VHighQualityAdder___024root___eval_settle(VHighQualityAdder___024root* vlSelf);
void VHighQualityAdder___024root___eval(VHighQualityAdder___024root* vlSelf);

void VHighQualityAdder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VHighQualityAdder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VHighQualityAdder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VHighQualityAdder___024root___eval_static(&(vlSymsp->TOP));
        VHighQualityAdder___024root___eval_initial(&(vlSymsp->TOP));
        VHighQualityAdder___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VHighQualityAdder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VHighQualityAdder::eventsPending() { return false; }

uint64_t VHighQualityAdder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VHighQualityAdder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VHighQualityAdder___024root___eval_final(VHighQualityAdder___024root* vlSelf);

VL_ATTR_COLD void VHighQualityAdder::final() {
    VHighQualityAdder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VHighQualityAdder::hierName() const { return vlSymsp->name(); }
const char* VHighQualityAdder::modelName() const { return "VHighQualityAdder"; }
unsigned VHighQualityAdder::threads() const { return 1; }
void VHighQualityAdder::prepareClone() const { contextp()->prepareClone(); }
void VHighQualityAdder::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VHighQualityAdder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VHighQualityAdder___024root__trace_decl_types(VerilatedVcd* tracep);

void VHighQualityAdder___024root__trace_init_top(VHighQualityAdder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VHighQualityAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHighQualityAdder___024root*>(voidSelf);
    VHighQualityAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VHighQualityAdder___024root__trace_decl_types(tracep);
    VHighQualityAdder___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VHighQualityAdder___024root__trace_register(VHighQualityAdder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VHighQualityAdder::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VHighQualityAdder::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VHighQualityAdder___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
