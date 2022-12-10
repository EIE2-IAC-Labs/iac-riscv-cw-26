rm -rf obj_dir
rm -f *.vcd


verilator --Wall --cc --trace ALU_decoder.sv --exe aludecode_tb.cpp

make -j -C obj_dir/ -f VALU_decoder.mk VALU_decoder

echo "\nRunning ALU_Decode Simulation"
obj_dir/VALU_decoder
echo "\n ALU_Decode Simulation completed"