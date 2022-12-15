rm -rf obj_dir
rm -f *.vcd


verilator --Wall --cc --trace alu.sv pc_src.sv top_execute.sv --exe alutop_tb.cpp

make -j -C obj_dir/ -f Valu.mk Valu   

echo "\nRunning simulation"
obj_dir/Valu
echo "\nSimulation completed"