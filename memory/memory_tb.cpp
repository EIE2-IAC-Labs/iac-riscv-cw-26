#include "Vtop_memory.h"

#include "verilated.h"
#include "verilated_vcd_c.h"
// #include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {

    Verilated::commandArgs(argc, argv);

    // Init top verilog instance
    Vtop_memory* top = new Vtop_memory;

    // Init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    // // Init Vbuddy
    // if (vbdOpen() != 1)
    //     return(-1);
    // vbdHeader("Lab 4: Reduced RISC-V");
    // vbdSetMode(0); // Toggle mode

    // Init simulation inputs
    top->clk = 1;
    // top->rst = 1;

    int clk;
    for (int i = 0; i < 100; i ++) {
        
        // Dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk ++) {
            tfp->dump(2*i + clk);
            top->clk = !top->clk;
            top->eval();
        }
        if(i < 2){
            top->ALUResult_M = 0x1001;
            top->sw = 1;
            top->writeData_M = 0xFFFFFFFF;
        }
        if(i > 2 && i < 4){
            top->sw = 0;
            top->writeData_M = 0xAAAAAAAA;
            top->lw = 1;
            top->sh = 1;
        }
        if(i > 4 && i < 6){
            top->sh = 0;
            top->writeData_M = 0xBBBBBBBB;
            top->sb = 1;
        
        }
        if(i > 6 && i < 8){
            top->sb = 0;
        }

        
        // // Send data to Vbuddy
        // vbdCycle(i);
        // vbdHex(1, top->a0 & 0xf);
        // vbdHex(2, (top->a0 >> 4) & 0xf);
        // vbdHex(3, (top->a0 >> 8) & 0xf);
        // vbdHex(4, (top->a0 >> 12) & 0xf);
        // // Although the register a0 is 32 bits, we will not be using it to store any numbers higher than 16 bits.

        // Update input signals
        // top->rst = i < 2;

    }

    // vbdClose();
    tfp->close();
    exit(0);

}