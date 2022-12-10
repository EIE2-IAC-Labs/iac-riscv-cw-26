// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain_decoder.h for the primary calling header

#ifndef VERILATED_VMAIN_DECODER___024ROOT_H_
#define VERILATED_VMAIN_DECODER___024ROOT_H_  // guard

#include "verilated.h"

class Vmain_decoder__Syms;

class Vmain_decoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(funct3,14,12);
    VL_IN8(opcode,6,0);
    VL_OUT8(RegWriteD,0,0);
    VL_OUT8(ResultSrcD,1,0);
    VL_OUT8(MemWriteD,0,0);
    VL_OUT8(ALUsrcD,0,0);
    VL_OUT8(ImmSrcD,2,0);
    VL_OUT8(BranchD,0,0);
    VL_OUT8(JumpD,0,0);
    VL_OUT8(ALUOp,1,0);
    VL_OUT8(R_size,2,0);
    VL_OUT8(DMem_size,2,0);
    IData/*31:0*/ main_decoder__DOT__instr;

    // INTERNAL VARIABLES
    Vmain_decoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmain_decoder___024root(Vmain_decoder__Syms* symsp, const char* name);
    ~Vmain_decoder___024root();
    VL_UNCOPYABLE(Vmain_decoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
