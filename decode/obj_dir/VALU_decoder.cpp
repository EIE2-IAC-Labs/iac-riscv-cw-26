// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VALU_decoder.h"
#include "VALU_decoder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VALU_decoder::VALU_decoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VALU_decoder__Syms(contextp(), _vcname__, this)}
    , ALUOp{vlSymsp->TOP.ALUOp}
    , funct3{vlSymsp->TOP.funct3}
    , funct7_bit{vlSymsp->TOP.funct7_bit}
    , ALUControlD{vlSymsp->TOP.ALUControlD}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VALU_decoder::VALU_decoder(const char* _vcname__)
    : VALU_decoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VALU_decoder::~VALU_decoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VALU_decoder___024root___eval_initial(VALU_decoder___024root* vlSelf);
void VALU_decoder___024root___eval_settle(VALU_decoder___024root* vlSelf);
void VALU_decoder___024root___eval(VALU_decoder___024root* vlSelf);
#ifdef VL_DEBUG
void VALU_decoder___024root___eval_debug_assertions(VALU_decoder___024root* vlSelf);
#endif  // VL_DEBUG
void VALU_decoder___024root___final(VALU_decoder___024root* vlSelf);

static void _eval_initial_loop(VALU_decoder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VALU_decoder___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VALU_decoder___024root___eval_settle(&(vlSymsp->TOP));
        VALU_decoder___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VALU_decoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VALU_decoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VALU_decoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VALU_decoder___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VALU_decoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VALU_decoder::final() {
    VALU_decoder___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VALU_decoder::hierName() const { return vlSymsp->name(); }
const char* VALU_decoder::modelName() const { return "VALU_decoder"; }
unsigned VALU_decoder::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VALU_decoder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VALU_decoder___024root__trace_init_top(VALU_decoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VALU_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_decoder___024root*>(voidSelf);
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VALU_decoder___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VALU_decoder___024root__trace_register(VALU_decoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VALU_decoder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VALU_decoder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VALU_decoder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
