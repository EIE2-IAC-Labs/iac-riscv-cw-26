// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain_decoder__Syms.h"


VL_ATTR_COLD void Vmain_decoder___024root__trace_init_sub__TOP__0(Vmain_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"funct3", false,-1, 14,12);
    tracep->declBus(c+2,"opcode", false,-1, 6,0);
    tracep->declBit(c+3,"RegWriteD", false,-1);
    tracep->declBus(c+4,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+5,"ALUsrcD", false,-1);
    tracep->declBus(c+6,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+7,"BranchD", false,-1);
    tracep->declBit(c+8,"JumpD", false,-1);
    tracep->declBus(c+9,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+10,"R_size", false,-1, 2,0);
    tracep->declBus(c+11,"DMem_size", false,-1, 2,0);
    tracep->declBit(c+12,"jalr_o", false,-1);
    tracep->declBit(c+13,"lui_o", false,-1);
    tracep->declBit(c+14,"load_extend_s", false,-1);
    tracep->pushNamePrefix("main_decoder ");
    tracep->declBus(c+1,"funct3", false,-1, 14,12);
    tracep->declBus(c+2,"opcode", false,-1, 6,0);
    tracep->declBit(c+3,"RegWriteD", false,-1);
    tracep->declBus(c+4,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+5,"ALUsrcD", false,-1);
    tracep->declBus(c+6,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+7,"BranchD", false,-1);
    tracep->declBit(c+8,"JumpD", false,-1);
    tracep->declBus(c+9,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+10,"R_size", false,-1, 2,0);
    tracep->declBus(c+11,"DMem_size", false,-1, 2,0);
    tracep->declBit(c+12,"jalr_o", false,-1);
    tracep->declBit(c+13,"lui_o", false,-1);
    tracep->declBit(c+14,"load_extend_s", false,-1);
    tracep->declBus(c+15,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vmain_decoder___024root__trace_init_top(Vmain_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root__trace_init_top\n"); );
    // Body
    Vmain_decoder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmain_decoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain_decoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain_decoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmain_decoder___024root__trace_register(Vmain_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmain_decoder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmain_decoder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmain_decoder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmain_decoder___024root__trace_full_sub_0(Vmain_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain_decoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root__trace_full_top_0\n"); );
    // Init
    Vmain_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_decoder___024root*>(voidSelf);
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain_decoder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain_decoder___024root__trace_full_sub_0(Vmain_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->funct3),3);
    bufp->fullCData(oldp+2,(vlSelf->opcode),7);
    bufp->fullBit(oldp+3,(vlSelf->RegWriteD));
    bufp->fullCData(oldp+4,(vlSelf->ResultSrcD),2);
    bufp->fullBit(oldp+5,(vlSelf->ALUsrcD));
    bufp->fullCData(oldp+6,(vlSelf->ImmSrcD),3);
    bufp->fullBit(oldp+7,(vlSelf->BranchD));
    bufp->fullBit(oldp+8,(vlSelf->JumpD));
    bufp->fullCData(oldp+9,(vlSelf->ALUOp),2);
    bufp->fullCData(oldp+10,(vlSelf->R_size),3);
    bufp->fullCData(oldp+11,(vlSelf->DMem_size),3);
    bufp->fullBit(oldp+12,(vlSelf->jalr_o));
    bufp->fullBit(oldp+13,(vlSelf->lui_o));
    bufp->fullBit(oldp+14,(vlSelf->load_extend_s));
    bufp->fullIData(oldp+15,(vlSelf->main_decoder__DOT__instr),32);
}
