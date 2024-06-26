// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMAIN_DECODER_H_
#define VERILATED_VMAIN_DECODER_H_  // guard

#include "verilated.h"

class Vmain_decoder__Syms;
class Vmain_decoder___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class Vmain_decoder VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vmain_decoder__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&funct3,14,12);
    VL_IN8(&opcode,6,0);
    VL_OUT8(&RegWriteD,0,0);
    VL_OUT8(&ResultSrcD,1,0);
    VL_OUT8(&ALUsrcD,0,0);
    VL_OUT8(&ImmSrcD,2,0);
    VL_OUT8(&BranchD,0,0);
    VL_OUT8(&JumpD,0,0);
    VL_OUT8(&ALUOp,1,0);
    VL_OUT8(&R_size,2,0);
    VL_OUT8(&DMem_size,2,0);
    VL_OUT8(&jalr_o,0,0);
    VL_OUT8(&lui_o,0,0);
    VL_OUT8(&load_extend_s,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vmain_decoder___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vmain_decoder(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vmain_decoder(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vmain_decoder();
  private:
    VL_UNCOPYABLE(Vmain_decoder);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
