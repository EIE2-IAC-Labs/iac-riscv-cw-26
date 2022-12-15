#include "Vtop_memory.h"

#include "verilated.h"
#include "verilated_vcd_c.h"
// #include "vbuddy.cpp"

int main(int argc, char **argv, char **env)
{

    Verilated::commandArgs(argc, argv);

    // Init top verilog instance
    Vtop_memory *top = new Vtop_memory;

    // Init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
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
    for (int i = 0; i < 100; i++)
    {

        // Dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(2 * i + clk);
            top->clk = !top->clk;
            top->eval();
        }

    }

    // vbdClose();
    tfp->close();
    exit(0);
}