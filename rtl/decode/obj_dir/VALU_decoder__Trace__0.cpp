// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU_decoder__Syms.h"


void VALU_decoder___024root__trace_chg_sub_0(VALU_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VALU_decoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root__trace_chg_top_0\n"); );
    // Init
    VALU_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_decoder___024root*>(voidSelf);
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VALU_decoder___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VALU_decoder___024root__trace_chg_sub_0(VALU_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->ALUOp),2);
    bufp->chgCData(oldp+1,(vlSelf->funct3),3);
    bufp->chgBit(oldp+2,(vlSelf->funct7_bit));
    bufp->chgCData(oldp+3,(vlSelf->ALUControlD),4);
}

void VALU_decoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root__trace_cleanup\n"); );
    // Init
    VALU_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_decoder___024root*>(voidSelf);
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
