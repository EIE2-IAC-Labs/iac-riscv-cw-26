// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcontrol_unit.h"
#include "Vcontrol_unit__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcontrol_unit::Vcontrol_unit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcontrol_unit__Syms(contextp(), _vcname__, this)}
    , opcode{vlSymsp->TOP.opcode}
    , funct3{vlSymsp->TOP.funct3}
    , funct7{vlSymsp->TOP.funct7}
    , RegWriteD{vlSymsp->TOP.RegWriteD}
    , ResultSrcD{vlSymsp->TOP.ResultSrcD}
    , MemWriteD{vlSymsp->TOP.MemWriteD}
    , ALUsrcD{vlSymsp->TOP.ALUsrcD}
    , ImmSrcD{vlSymsp->TOP.ImmSrcD}
    , BranchD{vlSymsp->TOP.BranchD}
    , JumpD{vlSymsp->TOP.JumpD}
    , R_size{vlSymsp->TOP.R_size}
    , DMem_size{vlSymsp->TOP.DMem_size}
    , ALUControlD{vlSymsp->TOP.ALUControlD}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcontrol_unit::Vcontrol_unit(const char* _vcname__)
    : Vcontrol_unit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcontrol_unit::~Vcontrol_unit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcontrol_unit___024root___eval_initial(Vcontrol_unit___024root* vlSelf);
void Vcontrol_unit___024root___eval_settle(Vcontrol_unit___024root* vlSelf);
void Vcontrol_unit___024root___eval(Vcontrol_unit___024root* vlSelf);
#ifdef VL_DEBUG
void Vcontrol_unit___024root___eval_debug_assertions(Vcontrol_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vcontrol_unit___024root___final(Vcontrol_unit___024root* vlSelf);

static void _eval_initial_loop(Vcontrol_unit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcontrol_unit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcontrol_unit___024root___eval_settle(&(vlSymsp->TOP));
        Vcontrol_unit___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vcontrol_unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcontrol_unit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcontrol_unit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcontrol_unit___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vcontrol_unit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcontrol_unit::final() {
    Vcontrol_unit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcontrol_unit::hierName() const { return vlSymsp->name(); }
const char* Vcontrol_unit::modelName() const { return "Vcontrol_unit"; }
unsigned Vcontrol_unit::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcontrol_unit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcontrol_unit___024root__trace_init_top(Vcontrol_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcontrol_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_unit___024root*>(voidSelf);
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcontrol_unit___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcontrol_unit___024root__trace_register(Vcontrol_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcontrol_unit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcontrol_unit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
