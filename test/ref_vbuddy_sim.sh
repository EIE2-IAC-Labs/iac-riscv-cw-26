#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f *.vcd

# assemble instructions
cd reference
make reference
cd ..

sed -i 's/__file__/reference\/pdf.hex/' rtl/instr_mem.sv
sed -i 's/__file__/reference\/gaussian.mem/' rtl/ram.sv

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall -y "rtl" --cc --trace --exe top.sv ref_vbuddy_tb.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vtop.mk Vtop

sed -i 's/reference\/pdf.hex/__file__/' rtl/instr_mem.sv
sed -i 's/reference\/gaussian.mem/__file__/' rtl/ram.sv
# run executable simulation file
echo "\nRunning simulation"
sudo obj_dir/Vtop
echo "\nSimulation completed"

