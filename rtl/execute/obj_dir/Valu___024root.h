// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class Valu__Syms;

class Valu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(ALUsrc,0,0);
    VL_IN8(ALUctrl,3,0);
    VL_IN8(jump_E,0,0);
    VL_IN8(branch_E,0,0);
    VL_OUT8(PCsrc_E,0,0);
    CData/*0:0*/ top_execute__DOT__EQ;
    CData/*0:0*/ top_execute__DOT__pc_src__DOT__and_result;
    VL_IN(RD1,31,0);
    VL_IN(RD2,31,0);
    VL_IN(ImmOp,31,0);
    VL_OUT(ALUout,31,0);
    IData/*31:0*/ top_execute__DOT__ALUop2;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Valu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* name);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
