// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_memory.h"
#include "Vtop_memory__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop_memory::Vtop_memory(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_memory__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , sw{vlSymsp->TOP.sw}
    , sh{vlSymsp->TOP.sh}
    , sb{vlSymsp->TOP.sb}
    , lw{vlSymsp->TOP.lw}
    , lh{vlSymsp->TOP.lh}
    , lb{vlSymsp->TOP.lb}
    , s{vlSymsp->TOP.s}
    , offset{vlSymsp->TOP.offset}
    , ALUResult_M{vlSymsp->TOP.ALUResult_M}
    , writeData_M{vlSymsp->TOP.writeData_M}
    , readData_M{vlSymsp->TOP.readData_M}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_memory::Vtop_memory(const char* _vcname__)
    : Vtop_memory(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_memory::~Vtop_memory() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtop_memory___024root___eval_initial(Vtop_memory___024root* vlSelf);
void Vtop_memory___024root___eval_settle(Vtop_memory___024root* vlSelf);
void Vtop_memory___024root___eval(Vtop_memory___024root* vlSelf);
#ifdef VL_DEBUG
void Vtop_memory___024root___eval_debug_assertions(Vtop_memory___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_memory___024root___final(Vtop_memory___024root* vlSelf);

static void _eval_initial_loop(Vtop_memory__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtop_memory___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtop_memory___024root___eval_settle(&(vlSymsp->TOP));
        Vtop_memory___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtop_memory::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_memory::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_memory___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtop_memory___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtop_memory::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtop_memory::final() {
    Vtop_memory___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_memory::hierName() const { return vlSymsp->name(); }
const char* Vtop_memory::modelName() const { return "Vtop_memory"; }
unsigned Vtop_memory::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtop_memory::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop_memory___024root__trace_init_top(Vtop_memory___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_memory___024root*>(voidSelf);
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtop_memory___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtop_memory___024root__trace_register(Vtop_memory___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_memory::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop_memory___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
