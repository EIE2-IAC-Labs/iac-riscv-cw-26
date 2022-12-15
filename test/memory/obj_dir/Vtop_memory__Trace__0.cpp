// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_memory__Syms.h"


void Vtop_memory___024root__trace_chg_sub_0(Vtop_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_memory___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_chg_top_0\n"); );
    // Init
    Vtop_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_memory___024root*>(voidSelf);
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_memory___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_memory___024root__trace_chg_sub_0(Vtop_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top_memory__DOT__dout),32);
        bufp->chgIData(oldp+1,(vlSelf->top_memory__DOT__hbw__DOT__he),32);
        bufp->chgIData(oldp+2,(vlSelf->top_memory__DOT__hbw__DOT__be),32);
        bufp->chgSData(oldp+3,(vlSelf->top_memory__DOT__hbw__DOT__h),16);
        bufp->chgCData(oldp+4,(vlSelf->top_memory__DOT__hbw__DOT__b),8);
        bufp->chgBit(oldp+5,(vlSelf->top_memory__DOT__hbw__DOT__h_e__DOT__sign));
        bufp->chgBit(oldp+6,(vlSelf->top_memory__DOT__hbw__DOT__s_e__DOT__sign));
        bufp->chgIData(oldp+7,(vlSelf->top_memory__DOT__ram__DOT__offset_a),32);
    }
    bufp->chgBit(oldp+8,(vlSelf->clk));
    bufp->chgBit(oldp+9,(vlSelf->sw));
    bufp->chgBit(oldp+10,(vlSelf->sh));
    bufp->chgBit(oldp+11,(vlSelf->sb));
    bufp->chgBit(oldp+12,(vlSelf->lw));
    bufp->chgBit(oldp+13,(vlSelf->lh));
    bufp->chgBit(oldp+14,(vlSelf->lb));
    bufp->chgBit(oldp+15,(vlSelf->s));
    bufp->chgCData(oldp+16,(vlSelf->offset),2);
    bufp->chgIData(oldp+17,(vlSelf->ALUResult_M),32);
    bufp->chgIData(oldp+18,(vlSelf->writeData_M),32);
    bufp->chgIData(oldp+19,(vlSelf->readData_M),32);
    bufp->chgCData(oldp+20,((0xffU & vlSelf->writeData_M)),8);
    bufp->chgCData(oldp+21,((0xffU & (vlSelf->writeData_M 
                                      >> 8U))),8);
    bufp->chgCData(oldp+22,((0xffU & (vlSelf->writeData_M 
                                      >> 0x10U))),8);
    bufp->chgCData(oldp+23,((vlSelf->writeData_M >> 0x18U)),8);
}

void Vtop_memory___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_cleanup\n"); );
    // Init
    Vtop_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_memory___024root*>(voidSelf);
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
