// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsign_extend__Syms.h"


VL_ATTR_COLD void Vsign_extend___024root__trace_init_sub__TOP__0(Vsign_extend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4,"InstrD", false,-1, 31,0);
    tracep->declBus(c+5,"ImmSrcD", false,-1, 2,0);
    tracep->declBus(c+6,"ImmExtD", false,-1, 31,0);
    tracep->pushNamePrefix("sign_extend ");
    tracep->declBus(c+8,"data_width", false,-1, 31,0);
    tracep->declBus(c+9,"imm_width1", false,-1, 31,0);
    tracep->declBus(c+10,"imm_width2", false,-1, 31,0);
    tracep->declBus(c+10,"imm_width3", false,-1, 31,0);
    tracep->declBus(c+4,"InstrD", false,-1, 31,0);
    tracep->declBus(c+5,"ImmSrcD", false,-1, 2,0);
    tracep->declBus(c+6,"ImmExtD", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"imm_type_1", false,-1, 11,0);
    tracep->declBus(c+2,"imm_type_lui", false,-1, 19,0);
    tracep->declBus(c+3,"imm_type_jal", false,-1, 19,0);
    tracep->declBus(c+7,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsign_extend___024root__trace_init_top(Vsign_extend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root__trace_init_top\n"); );
    // Body
    Vsign_extend___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsign_extend___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsign_extend___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsign_extend___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsign_extend___024root__trace_register(Vsign_extend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsign_extend___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsign_extend___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsign_extend___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsign_extend___024root__trace_full_sub_0(Vsign_extend___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsign_extend___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root__trace_full_top_0\n"); );
    // Init
    Vsign_extend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsign_extend___024root*>(voidSelf);
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsign_extend___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsign_extend___024root__trace_full_sub_0(Vsign_extend___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_1),12);
    bufp->fullIData(oldp+2,(vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_lui),20);
    bufp->fullIData(oldp+3,(vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_jal),20);
    bufp->fullIData(oldp+4,(vlSelf->InstrD),32);
    bufp->fullCData(oldp+5,(vlSelf->ImmSrcD),3);
    bufp->fullIData(oldp+6,(vlSelf->ImmExtD),32);
    bufp->fullCData(oldp+7,((0x7fU & vlSelf->InstrD)),7);
    bufp->fullIData(oldp+8,(0x20U),32);
    bufp->fullIData(oldp+9,(0xcU),32);
    bufp->fullIData(oldp+10,(0x14U),32);
}
