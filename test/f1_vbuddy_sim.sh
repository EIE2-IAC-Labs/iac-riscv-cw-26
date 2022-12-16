#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f top.vcd

# assemble instructions
cd f1test
make f1test
cd ..

sed -i 's/__file__/f1test\/f1.hex/' fetch/instr_mem.sv
sed -i 's/__file__/memory\/dataram.mem/' memory/ram.sv

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall -y "fetch" -y "decode" -y "execute" -y "memory" -y "writeback" -y "pipeline_reg" -y "decode/sign_extend" -y "f1test" --cc --trace --exe top.sv f1_vbuddy_tb.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vtop.mk Vtop

sed -i 's/f1test\/f1.hex/__file__/' fetch/instr_mem.sv
sed -i 's/memory\/dataram.mem/__file__/' memory/ram.sv

# run executable simulation file
echo "\nRunning simulation"
sudo obj_dir/Vtop
echo "\nSimulation completed"
