// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontrol_unit.h for the primary calling header

#ifndef VERILATED_VCONTROL_UNIT___024ROOT_H_
#define VERILATED_VCONTROL_UNIT___024ROOT_H_  // guard

#include "verilated.h"

class Vcontrol_unit__Syms;

class Vcontrol_unit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(opcode,6,0);
    VL_IN8(funct3,2,0);
    VL_IN8(funct7,6,0);
    VL_OUT8(RegWriteD,0,0);
    VL_OUT8(ResultSrcD,1,0);
    VL_OUT8(ALUsrcD,0,0);
    VL_OUT8(ImmSrcD,2,0);
    VL_OUT8(BranchD,0,0);
    VL_OUT8(JumpD,0,0);
    VL_OUT8(R_size,2,0);
    VL_OUT8(DMem_size,2,0);
    VL_OUT8(ALUControlD,3,0);
    VL_OUT8(jalr,0,0);
    VL_OUT8(lui,0,0);
    VL_OUT8(load_extend_s,0,0);
    IData/*31:0*/ control_unit__DOT__main_control__DOT__instr;

    // INTERNAL VARIABLES
    Vcontrol_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontrol_unit___024root(Vcontrol_unit__Syms* symsp, const char* name);
    ~Vcontrol_unit___024root();
    VL_UNCOPYABLE(Vcontrol_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
