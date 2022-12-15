// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontrol_unit__Syms.h"


void Vcontrol_unit___024root__trace_chg_sub_0(Vcontrol_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcontrol_unit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root__trace_chg_top_0\n"); );
    // Init
    Vcontrol_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_unit___024root*>(voidSelf);
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcontrol_unit___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcontrol_unit___024root__trace_chg_sub_0(Vcontrol_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->opcode),7);
    bufp->chgCData(oldp+1,(vlSelf->funct3),3);
    bufp->chgCData(oldp+2,(vlSelf->funct7),7);
    bufp->chgBit(oldp+3,(vlSelf->RegWriteD));
    bufp->chgCData(oldp+4,(vlSelf->ResultSrcD),2);
    bufp->chgBit(oldp+5,(vlSelf->ALUsrcD));
    bufp->chgCData(oldp+6,(vlSelf->ImmSrcD),3);
    bufp->chgBit(oldp+7,(vlSelf->BranchD));
    bufp->chgBit(oldp+8,(vlSelf->JumpD));
    bufp->chgCData(oldp+9,(vlSelf->R_size),3);
    bufp->chgCData(oldp+10,(vlSelf->DMem_size),3);
    bufp->chgCData(oldp+11,(vlSelf->ALUControlD),4);
    bufp->chgBit(oldp+12,(vlSelf->jalr));
    bufp->chgBit(oldp+13,(vlSelf->lui));
    bufp->chgBit(oldp+14,(vlSelf->load_extend_s));
    bufp->chgCData(oldp+15,(((4U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                              ? 0U : ((6U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                                       ? 0U : ((7U 
                                                == vlSelf->control_unit__DOT__main_control__DOT__instr)
                                                ? 1U
                                                : (
                                                   (1U 
                                                    == vlSelf->control_unit__DOT__main_control__DOT__instr)
                                                    ? 2U
                                                    : 3U))))),2);
    bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->funct7) 
                                 >> 5U))));
    bufp->chgIData(oldp+17,(vlSelf->control_unit__DOT__main_control__DOT__instr),32);
}

void Vcontrol_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root__trace_cleanup\n"); );
    // Init
    Vcontrol_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_unit___024root*>(voidSelf);
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
