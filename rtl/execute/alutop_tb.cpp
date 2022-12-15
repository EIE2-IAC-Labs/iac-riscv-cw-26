#include "Valu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env){
    int it;
    int clk;
    Verilated::commandArgs(argc,argv);
//  initialise top verilog instance
    Valu* top = new Valu;
// initialise trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,99);
    tfp->open("Valu.vcd");

    // initialise simulation outputs


    top->ALUsrc = 0;
    top->ALUctrl = 0;
    top->ImmOp = 0;

    top->RD1 = 3;
    top->RD2 = 4;
    top->jump_E = 0;
    top->branch_E = 0;
    top->ImmOp = 2;
    
    int ALUcntrl_testing_vals[9] = {0,1,8,2,3,5,4,6,7};
    // run simulation for many clock cycles

    for(int i=0;i< 9; i++){

        for(clk=0;clk<2;clk++){
            // in ps
            tfp->dump (2*i+clk);
            // falling edge
            // top->clk = !top->clk;
            top->eval ();
        }
        
            top->ALUctrl = ALUcntrl_testing_vals[i];
        
  

        // top->ALUsrc = 1;
        // top->ALUctrl = 1;
        // top->ImmOp = -1;
      
        if(Verilated::gotFinish()) exit(0);
        
    }

    tfp->close();
    exit(0);

}