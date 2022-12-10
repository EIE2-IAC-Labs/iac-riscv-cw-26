// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmain_decoder.h"
#include "Vmain_decoder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmain_decoder::Vmain_decoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmain_decoder__Syms(contextp(), _vcname__, this)}
    , funct3{vlSymsp->TOP.funct3}
    , opcode{vlSymsp->TOP.opcode}
    , RegWriteD{vlSymsp->TOP.RegWriteD}
    , ResultSrcD{vlSymsp->TOP.ResultSrcD}
    , MemWriteD{vlSymsp->TOP.MemWriteD}
    , ALUsrcD{vlSymsp->TOP.ALUsrcD}
    , ImmSrcD{vlSymsp->TOP.ImmSrcD}
    , BranchD{vlSymsp->TOP.BranchD}
    , JumpD{vlSymsp->TOP.JumpD}
    , ALUOp{vlSymsp->TOP.ALUOp}
    , R_size{vlSymsp->TOP.R_size}
    , DMem_size{vlSymsp->TOP.DMem_size}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmain_decoder::Vmain_decoder(const char* _vcname__)
    : Vmain_decoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmain_decoder::~Vmain_decoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmain_decoder___024root___eval_initial(Vmain_decoder___024root* vlSelf);
void Vmain_decoder___024root___eval_settle(Vmain_decoder___024root* vlSelf);
void Vmain_decoder___024root___eval(Vmain_decoder___024root* vlSelf);
#ifdef VL_DEBUG
void Vmain_decoder___024root___eval_debug_assertions(Vmain_decoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vmain_decoder___024root___final(Vmain_decoder___024root* vlSelf);

static void _eval_initial_loop(Vmain_decoder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmain_decoder___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmain_decoder___024root___eval_settle(&(vlSymsp->TOP));
        Vmain_decoder___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vmain_decoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmain_decoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmain_decoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmain_decoder___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vmain_decoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmain_decoder::final() {
    Vmain_decoder___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmain_decoder::hierName() const { return vlSymsp->name(); }
const char* Vmain_decoder::modelName() const { return "Vmain_decoder"; }
unsigned Vmain_decoder::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vmain_decoder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmain_decoder___024root__trace_init_top(Vmain_decoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmain_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_decoder___024root*>(voidSelf);
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmain_decoder___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmain_decoder___024root__trace_register(Vmain_decoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmain_decoder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmain_decoder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
