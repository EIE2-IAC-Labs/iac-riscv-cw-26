// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain_decoder__Syms.h"


void Vmain_decoder___024root__trace_chg_sub_0(Vmain_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmain_decoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root__trace_chg_top_0\n"); );
    // Init
    Vmain_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_decoder___024root*>(voidSelf);
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmain_decoder___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmain_decoder___024root__trace_chg_sub_0(Vmain_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->funct3),3);
    bufp->chgCData(oldp+1,(vlSelf->opcode),7);
    bufp->chgBit(oldp+2,(vlSelf->RegWriteD));
    bufp->chgCData(oldp+3,(vlSelf->ResultSrcD),2);
    bufp->chgBit(oldp+4,(vlSelf->MemWriteD));
    bufp->chgBit(oldp+5,(vlSelf->ALUsrcD));
    bufp->chgCData(oldp+6,(vlSelf->ImmSrcD),3);
    bufp->chgBit(oldp+7,(vlSelf->BranchD));
    bufp->chgBit(oldp+8,(vlSelf->JumpD));
    bufp->chgCData(oldp+9,(vlSelf->ALUOp),2);
    bufp->chgCData(oldp+10,(vlSelf->R_size),3);
    bufp->chgCData(oldp+11,(vlSelf->DMem_size),3);
    bufp->chgIData(oldp+12,(vlSelf->main_decoder__DOT__instr),32);
}

void Vmain_decoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root__trace_cleanup\n"); );
    // Init
    Vmain_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_decoder___024root*>(voidSelf);
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
