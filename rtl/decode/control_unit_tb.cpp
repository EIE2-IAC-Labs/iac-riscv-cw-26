#include "Vcontrol_unit.h"

#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env) {

    Verilated::commandArgs(argc, argv);

    // Init top verilog instance
    Vcontrol_unit* top = new Vcontrol_unit;

    // Init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("control_unit.vcd");

    // Init simulation inputs
    // Testing an immediate instruction: addi t1, x0, 0xff
    // instruction: 0b0000 1111 1111 0000 0000 0011 0001 0011;

    top->opcode = 0b0010011;
    top->funct3 = 0b000;
    // Funct7 is a 'don't care' for all instructions apart from R-type ones.
    top->funct7 = 0b0000000;

    for (int i = 0; i < 1000; i ++) {
        
        // Control, mem, extend are all combinational (unclocked).
        top->eval();
        tfp->dump(i);

        
        // Testing a lui instruction: lui s0, 0xFEDC8.
        // 0b11111110110111001000010000110111
        if (i > 100 && i < 200){
            top->opcode = 0b0110111;
            top->funct3 = 0b000;
            top->funct7 = 0b0000000;
        }

        // Testing a sw instruction: sw x1, 155(x2), 08112da3.
        // 0b 0000 1000 0001 0001 0010 1101 1010 0011
        if (i >= 200 && i < 300){
            top->opcode = 0b0100011;
            top->funct3 = 0b010;
            top->funct7 = 0b0000000;
        }

        // Testing a branch instruction: bne a1, t1, -4.
        // 1111 1110 0110 0101 1001 1100 1110 0011
        if (i >= 300 && i < 400){
            top->opcode = 0b1100011;
            top->funct3 = 0b001;
            top->funct7 = 0b0000000;
        }
        
        // Testing a jal instruction: jal x6, 50.
        // 00000110010000000000001101101111
        if (i >= 400 && i < 500){
            top->opcode = 0b1101111;
            top->funct3 = 0b000;
            top->funct7 = 0b0000000;
        }
        

    }

    tfp->close();
    exit(0);

}
