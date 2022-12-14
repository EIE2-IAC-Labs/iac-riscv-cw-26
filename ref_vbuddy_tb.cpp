#include "Vtop.h"

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {

    Verilated::commandArgs(argc, argv);

    // Init top verilog instance
    Vtop* top = new Vtop;

    // Init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    // Init Vbuddy
    if (vbdOpen() != 1)
        return(-1);
    vbdHeader("Ref. program");
    vbdSetMode(1); // One-shot mode

    // Init simulation inputs
    top->clk = 1;
    top->rst = 0;

    int clk;
    bool plotting = false;
    for (int i = 0; i < 100000; i ++) { // Simulate for 100,000 cycles
        
        // Dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk ++) {
            tfp->dump(2*i + clk);
            top->clk = !top->clk;
            top->eval();
        }

        if (top->a0 != 0) {
            plotting = true;
            // Only start plotting when a0 reaches non-zero,
            // i.e. the program has finished calculating the bin values and is starting to display them.
        }

        // Send data to Vbuddy
        vbdCycle(i);
        if (plotting) {
            vbdPlot(top->a0, 0, 0xff);
        }
        // vbdHex(1, top->a0 & 0xf);
        // vbdHex(2, (top->a0 >> 4) & 0xf);
        // vbdHex(3, (top->a0 >> 8) & 0xf);
        // vbdHex(4, (top->a0 >> 12) & 0xf);
        // vbdBar(top->a0 & 0xff);

        // Update input signals
        top->rst = vbdFlag();

    }

    // vbdClose();
    tfp->close();
    exit(0);

}