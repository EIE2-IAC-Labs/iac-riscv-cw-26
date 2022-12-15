#include "Vsign_extend.h"

#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env) {

    Verilated::commandArgs(argc, argv);

    // Init top verilog instance
    Vsign_extend* top = new Vsign_extend;

    // Init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("sign_extend.vcd");

    // Init simulation inputs
    // Testing an immediate instruction: addi t1, x0, 0xff
    top->InstrD = 0b00001111111100000000001100010011;
    top->ImmSrcD = 0b000;

    for (int i = 0; i < 1000; i ++) {
        
        // Control, mem, extend are all combinational (unclocked).
        top->eval();
        tfp->dump(i);

        // Testing a lui instruction: lui s0, 0xFEDC8.
        if (i > 100 && i < 200){
            top->InstrD = 0b11111110110111001000010000110111;
            top->ImmSrcD = 0b001;
        }

        // Testing a sw instruction: sw x1, 155(x2), 08112da3.
        if (i >= 200 && i < 300){
            top->InstrD = 0b00001000000100010010110110100011;
            top->ImmSrcD = 0b010;
        }

        // Testing a branch instruction: bne a1, t1, -4.
        if (i >= 300 && i < 400){
            top->InstrD = 0b11111110011001011001110011100011;
            top->ImmSrcD = 0b011;
        }
        
        // Testing a jal instruction: jal x6, 50.
        if (i >= 400 && i < 500){
            top->InstrD = 0b00000110010000000000001101101111;
            top->ImmSrcD = 0b100;
        }

    }

    tfp->close();
    exit(0);

}