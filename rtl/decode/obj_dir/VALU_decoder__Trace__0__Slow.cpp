// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU_decoder__Syms.h"


VL_ATTR_COLD void VALU_decoder___024root__trace_init_sub__TOP__0(VALU_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+2,"funct3", false,-1, 2,0);
    tracep->declBit(c+3,"funct7_bit", false,-1);
    tracep->declBus(c+4,"ALUControlD", false,-1, 3,0);
    tracep->pushNamePrefix("ALU_decoder ");
    tracep->declBus(c+1,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+2,"funct3", false,-1, 2,0);
    tracep->declBit(c+3,"funct7_bit", false,-1);
    tracep->declBus(c+4,"ALUControlD", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VALU_decoder___024root__trace_init_top(VALU_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root__trace_init_top\n"); );
    // Body
    VALU_decoder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALU_decoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU_decoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU_decoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALU_decoder___024root__trace_register(VALU_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VALU_decoder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VALU_decoder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VALU_decoder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALU_decoder___024root__trace_full_sub_0(VALU_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALU_decoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root__trace_full_top_0\n"); );
    // Init
    VALU_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_decoder___024root*>(voidSelf);
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALU_decoder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALU_decoder___024root__trace_full_sub_0(VALU_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ALUOp),2);
    bufp->fullCData(oldp+2,(vlSelf->funct3),3);
    bufp->fullBit(oldp+3,(vlSelf->funct7_bit));
    bufp->fullCData(oldp+4,(vlSelf->ALUControlD),4);
}
