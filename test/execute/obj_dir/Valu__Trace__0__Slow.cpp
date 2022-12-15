// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


VL_ATTR_COLD void Valu___024root__trace_init_sub__TOP__0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"ALUsrc", false,-1);
    tracep->declBus(c+5,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+6,"RD1", false,-1, 31,0);
    tracep->declBus(c+7,"RD2", false,-1, 31,0);
    tracep->declBus(c+8,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+9,"jump_E", false,-1);
    tracep->declBit(c+10,"branch_E", false,-1);
    tracep->declBus(c+11,"ALUout", false,-1, 31,0);
    tracep->declBit(c+12,"PCsrc_E", false,-1);
    tracep->pushNamePrefix("top_execute ");
    tracep->declBus(c+13,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+4,"ALUsrc", false,-1);
    tracep->declBus(c+5,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+6,"RD1", false,-1, 31,0);
    tracep->declBus(c+7,"RD2", false,-1, 31,0);
    tracep->declBus(c+8,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+9,"jump_E", false,-1);
    tracep->declBit(c+10,"branch_E", false,-1);
    tracep->declBus(c+11,"ALUout", false,-1, 31,0);
    tracep->declBit(c+12,"PCsrc_E", false,-1);
    tracep->declBit(c+1,"EQ", false,-1);
    tracep->declBus(c+2,"ALUop2", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+13,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+6,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+2,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+5,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+11,"SUM", false,-1, 31,0);
    tracep->declBit(c+1,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_src ");
    tracep->declBit(c+9,"JumpE", false,-1);
    tracep->declBit(c+10,"BranchE", false,-1);
    tracep->declBit(c+1,"ZeroE", false,-1);
    tracep->declBit(c+12,"PCSrcE", false,-1);
    tracep->declBit(c+3,"and_result", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Valu___024root__trace_init_top(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_init_top\n"); );
    // Body
    Valu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu___024root__trace_register(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Valu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Valu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Valu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu___024root__trace_full_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_full_top_0\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu___024root__trace_full_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top_execute__DOT__EQ));
    bufp->fullIData(oldp+2,(vlSelf->top_execute__DOT__ALUop2),32);
    bufp->fullBit(oldp+3,(vlSelf->top_execute__DOT__pc_src__DOT__and_result));
    bufp->fullBit(oldp+4,(vlSelf->ALUsrc));
    bufp->fullCData(oldp+5,(vlSelf->ALUctrl),4);
    bufp->fullIData(oldp+6,(vlSelf->RD1),32);
    bufp->fullIData(oldp+7,(vlSelf->RD2),32);
    bufp->fullIData(oldp+8,(vlSelf->ImmOp),32);
    bufp->fullBit(oldp+9,(vlSelf->jump_E));
    bufp->fullBit(oldp+10,(vlSelf->branch_E));
    bufp->fullIData(oldp+11,(vlSelf->ALUout),32);
    bufp->fullBit(oldp+12,(vlSelf->PCsrc_E));
    bufp->fullIData(oldp+13,(0x20U),32);
}
