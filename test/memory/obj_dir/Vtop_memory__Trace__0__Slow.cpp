// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_memory__Syms.h"


VL_ATTR_COLD void Vtop_memory___024root__trace_init_sub__TOP__0(Vtop_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"sw", false,-1);
    tracep->declBit(c+11,"sh", false,-1);
    tracep->declBit(c+12,"sb", false,-1);
    tracep->declBit(c+13,"lw", false,-1);
    tracep->declBit(c+14,"lh", false,-1);
    tracep->declBit(c+15,"lb", false,-1);
    tracep->declBit(c+16,"s", false,-1);
    tracep->declBus(c+17,"offset", false,-1, 1,0);
    tracep->declBus(c+18,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+19,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+20,"readData_M", false,-1, 31,0);
    tracep->pushNamePrefix("top_memory ");
    tracep->declBus(c+25,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"sw", false,-1);
    tracep->declBit(c+11,"sh", false,-1);
    tracep->declBit(c+12,"sb", false,-1);
    tracep->declBit(c+13,"lw", false,-1);
    tracep->declBit(c+14,"lh", false,-1);
    tracep->declBit(c+15,"lb", false,-1);
    tracep->declBit(c+16,"s", false,-1);
    tracep->declBus(c+17,"offset", false,-1, 1,0);
    tracep->declBus(c+18,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+19,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+20,"readData_M", false,-1, 31,0);
    tracep->declBus(c+1,"dout", false,-1, 31,0);
    tracep->pushNamePrefix("hbw ");
    tracep->declBus(c+25,"CPU_WORD", false,-1, 31,0);
    tracep->declBus(c+26,"HALF_LEN", false,-1, 31,0);
    tracep->declBus(c+27,"BYTE_LEN", false,-1, 31,0);
    tracep->declBit(c+13,"lw", false,-1);
    tracep->declBit(c+15,"lb", false,-1);
    tracep->declBit(c+14,"lh", false,-1);
    tracep->declBit(c+16,"s", false,-1);
    tracep->declBus(c+17,"offset", false,-1, 1,0);
    tracep->declBus(c+1,"data", false,-1, 31,0);
    tracep->declBus(c+20,"dout", false,-1, 31,0);
    tracep->declBus(c+2,"he", false,-1, 31,0);
    tracep->declBus(c+3,"be", false,-1, 31,0);
    tracep->declBus(c+4,"h", false,-1, 15,0);
    tracep->declBus(c+5,"b", false,-1, 7,0);
    tracep->pushNamePrefix("h_e ");
    tracep->declBus(c+25,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+26,"HALF_LEN", false,-1, 31,0);
    tracep->declBus(c+4,"din", false,-1, 15,0);
    tracep->declBit(c+16,"s", false,-1);
    tracep->declBus(c+2,"dout", false,-1, 31,0);
    tracep->declBit(c+6,"sign", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s_e ");
    tracep->declBus(c+25,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+27,"BYTE_LEN", false,-1, 31,0);
    tracep->declBus(c+5,"din", false,-1, 7,0);
    tracep->declBit(c+16,"s", false,-1);
    tracep->declBus(c+3,"dout", false,-1, 31,0);
    tracep->declBit(c+7,"sign", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+25,"ADDRESS_LENGTH", false,-1, 31,0);
    tracep->declBus(c+27,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+19,"wd", false,-1, 31,0);
    tracep->declBit(c+10,"sw", false,-1);
    tracep->declBit(c+11,"sh", false,-1);
    tracep->declBit(c+12,"sb", false,-1);
    tracep->declBus(c+18,"a", false,-1, 31,0);
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBus(c+1,"rd", false,-1, 31,0);
    tracep->declBus(c+8,"offset_a", false,-1, 31,0);
    tracep->declBus(c+21,"d0", false,-1, 7,0);
    tracep->declBus(c+22,"d1", false,-1, 7,0);
    tracep->declBus(c+23,"d2", false,-1, 7,0);
    tracep->declBus(c+24,"d3", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop_memory___024root__trace_init_top(Vtop_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_init_top\n"); );
    // Body
    Vtop_memory___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_memory___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_memory___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_memory___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_memory___024root__trace_register(Vtop_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop_memory___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop_memory___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop_memory___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_memory___024root__trace_full_sub_0(Vtop_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_memory___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_full_top_0\n"); );
    // Init
    Vtop_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_memory___024root*>(voidSelf);
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_memory___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_memory___024root__trace_full_sub_0(Vtop_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top_memory__DOT__dout),32);
    bufp->fullIData(oldp+2,(vlSelf->top_memory__DOT__hbw__DOT__he),32);
    bufp->fullIData(oldp+3,(vlSelf->top_memory__DOT__hbw__DOT__be),32);
    bufp->fullSData(oldp+4,(vlSelf->top_memory__DOT__hbw__DOT__h),16);
    bufp->fullCData(oldp+5,(vlSelf->top_memory__DOT__hbw__DOT__b),8);
    bufp->fullBit(oldp+6,(vlSelf->top_memory__DOT__hbw__DOT__h_e__DOT__sign));
    bufp->fullBit(oldp+7,(vlSelf->top_memory__DOT__hbw__DOT__s_e__DOT__sign));
    bufp->fullIData(oldp+8,(vlSelf->top_memory__DOT__ram__DOT__offset_a),32);
    bufp->fullBit(oldp+9,(vlSelf->clk));
    bufp->fullBit(oldp+10,(vlSelf->sw));
    bufp->fullBit(oldp+11,(vlSelf->sh));
    bufp->fullBit(oldp+12,(vlSelf->sb));
    bufp->fullBit(oldp+13,(vlSelf->lw));
    bufp->fullBit(oldp+14,(vlSelf->lh));
    bufp->fullBit(oldp+15,(vlSelf->lb));
    bufp->fullBit(oldp+16,(vlSelf->s));
    bufp->fullCData(oldp+17,(vlSelf->offset),2);
    bufp->fullIData(oldp+18,(vlSelf->ALUResult_M),32);
    bufp->fullIData(oldp+19,(vlSelf->writeData_M),32);
    bufp->fullIData(oldp+20,(vlSelf->readData_M),32);
    bufp->fullCData(oldp+21,((0xffU & vlSelf->writeData_M)),8);
    bufp->fullCData(oldp+22,((0xffU & (vlSelf->writeData_M 
                                       >> 8U))),8);
    bufp->fullCData(oldp+23,((0xffU & (vlSelf->writeData_M 
                                       >> 0x10U))),8);
    bufp->fullCData(oldp+24,((vlSelf->writeData_M >> 0x18U)),8);
    bufp->fullIData(oldp+25,(0x20U),32);
    bufp->fullIData(oldp+26,(0x10U),32);
    bufp->fullIData(oldp+27,(8U),32);
}