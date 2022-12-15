// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsign_extend__Syms.h"


void Vsign_extend___024root__trace_chg_sub_0(Vsign_extend___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsign_extend___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root__trace_chg_top_0\n"); );
    // Init
    Vsign_extend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsign_extend___024root*>(voidSelf);
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsign_extend___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsign_extend___024root__trace_chg_sub_0(Vsign_extend___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_1),12);
        bufp->chgIData(oldp+1,(vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_lui),20);
        bufp->chgIData(oldp+2,(vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_jal),20);
    }
    bufp->chgIData(oldp+3,(vlSelf->InstrD),32);
    bufp->chgCData(oldp+4,(vlSelf->ImmSrcD),3);
    bufp->chgIData(oldp+5,(vlSelf->ImmExtD),32);
    bufp->chgCData(oldp+6,((0x7fU & vlSelf->InstrD)),7);
}

void Vsign_extend___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root__trace_cleanup\n"); );
    // Init
    Vsign_extend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsign_extend___024root*>(voidSelf);
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
