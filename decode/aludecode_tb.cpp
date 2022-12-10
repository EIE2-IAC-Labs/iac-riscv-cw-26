#include "VALU_decoder.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env){
    int it;
    int clk;
    Verilated::commandArgs(argc,argv);
//  initialise top verilog instance
    VALU_decoder* top = new VALU_decoder;
// initialise trace dump
    // Verilated::traceEverOn(true);
    // VerilatedVcdC* tfp = new VerilatedVcdC;
    // top->trace(tfp,99);
    // tfp->open("VALU_decoder.vcd");

    // initialise simulation outputs


    // top->ALUOp = 0;
    // top->funct3 = 0;
  

    int funct7_test[2] = {0,1};
    int ALUOp_test[4] = {0,1,2,3};
    
    
    int funct3_test[8] = {0,1,2,3,4,5,6,7};
    // run simulation for many clock cycles

    for(int i=0; i< 4; i++){


        top->ALUOp = ALUOp_test[i];

        for(int j=0; j<8;j++){

            top->funct7_bit = 0;
             top->funct3 = funct3_test[j];
             top->eval ();

             if(i>=2){
                top->funct7_bit = 1;
                top->eval ();
             }
        }

        // if(Verilated::gotFinish()) exit(0);
    
    }


    exit(0);

}