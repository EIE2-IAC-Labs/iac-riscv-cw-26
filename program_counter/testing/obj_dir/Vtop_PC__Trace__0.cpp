// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_PC__Syms.h"


void Vtop_PC___024root__trace_chg_sub_0(Vtop_PC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_PC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root__trace_chg_top_0\n"); );
    // Init
    Vtop_PC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_PC___024root*>(voidSelf);
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_PC___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_PC___024root__trace_chg_sub_0(Vtop_PC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgIData(oldp+2,(vlSelf->ImmOp),32);
    bufp->chgBit(oldp+3,(vlSelf->PCsrc));
    bufp->chgIData(oldp+4,(vlSelf->PC),32);
    bufp->chgIData(oldp+5,(((IData)(4U) + vlSelf->PC)),32);
    bufp->chgIData(oldp+6,(((IData)(vlSelf->PCsrc) ? 
                            (vlSelf->PC + (vlSelf->ImmOp 
                                           << 1U)) : 
                            ((IData)(4U) + vlSelf->PC))),32);
    bufp->chgIData(oldp+7,((vlSelf->PC + (vlSelf->ImmOp 
                                          << 1U))),32);
    bufp->chgIData(oldp+8,((vlSelf->ImmOp << 1U)),32);
}

void Vtop_PC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root__trace_cleanup\n"); );
    // Init
    Vtop_PC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_PC___024root*>(voidSelf);
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
