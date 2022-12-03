// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_PC__Syms.h"


VL_ATTR_COLD void Vtop_PC___024root__trace_init_sub__TOP__0(Vtop_PC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->pushNamePrefix("top_PC ");
    tracep->declBus(c+10,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->declBus(c+6,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+7,"next_PC", false,-1, 31,0);
    tracep->declBus(c+8,"branch_PC", false,-1, 31,0);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+10,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+7,"next_PC", false,-1, 31,0);
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add_inc ");
    tracep->declBus(c+10,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBus(c+5,"in", false,-1, 31,0);
    tracep->declBus(c+11,"N", false,-1, 31,0);
    tracep->declBus(c+6,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add_op ");
    tracep->declBus(c+10,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBus(c+5,"in", false,-1, 31,0);
    tracep->declBus(c+9,"N", false,-1, 31,0);
    tracep->declBus(c+8,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+6,"d_0", false,-1, 31,0);
    tracep->declBus(c+8,"d_1", false,-1, 31,0);
    tracep->declBit(c+4,"s", false,-1);
    tracep->declBus(c+7,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop_PC___024root__trace_init_top(Vtop_PC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root__trace_init_top\n"); );
    // Body
    Vtop_PC___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_PC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_PC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_PC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_PC___024root__trace_register(Vtop_PC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop_PC___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop_PC___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop_PC___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_PC___024root__trace_full_sub_0(Vtop_PC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_PC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root__trace_full_top_0\n"); );
    // Init
    Vtop_PC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_PC___024root*>(voidSelf);
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_PC___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_PC___024root__trace_full_sub_0(Vtop_PC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullIData(oldp+3,(vlSelf->ImmOp),32);
    bufp->fullBit(oldp+4,(vlSelf->PCsrc));
    bufp->fullIData(oldp+5,(vlSelf->PC),32);
    bufp->fullIData(oldp+6,(((IData)(4U) + vlSelf->PC)),32);
    bufp->fullIData(oldp+7,(((IData)(vlSelf->PCsrc)
                              ? (vlSelf->PC + (vlSelf->ImmOp 
                                               << 1U))
                              : ((IData)(4U) + vlSelf->PC))),32);
    bufp->fullIData(oldp+8,((vlSelf->PC + (vlSelf->ImmOp 
                                           << 1U))),32);
    bufp->fullIData(oldp+9,((vlSelf->ImmOp << 1U)),32);
    bufp->fullIData(oldp+10,(0x20U),32);
    bufp->fullIData(oldp+11,(4U),32);
}
