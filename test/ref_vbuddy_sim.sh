#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f *.vcd

# assemble instructions
cd reference
make reference
cd ..

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall -y "fetch" -y "decode" -y "execute" -y "memory" -y "writeback" -y "pipeline_reg" -y "decode/sign_extend" -y "reference" --cc --trace --exe top.sv sine_tb.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vtop.mk Vtop

# run executable simulation file
echo "\nRunning simulation"
obj_dir/Vtop
echo "\nSimulation completed"

