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
        if (i < 2)
        {
            top->ALUResult_M = 0x1001;
            top->sw = 1;
            top->writeData_M = 0xAABBCCDD;
        }
        if (i < 4 && i > 2)
        {
            top->sw = 0;
            top->lb = 1;
            top->offset = 0b00;
        }
        if (i < 6 && i > 4)
        {
            top->offset = 0b01;
        }
        if (i < 8 && i > 6)
        {
            top->offset = 0b10;
        }
        if (i < 10 && i > 8)
        {
            top->offset = 0b11;
        }
        if(i>10){
            top->offset = 0b00;
        }
    }

    // vbdClose();
    tfp->close();
    exit(0);
}