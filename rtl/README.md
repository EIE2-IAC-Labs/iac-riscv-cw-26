# Individual contributions to files

## Source files (.sv)

| module | Roshan | Corey | Anlan | Shaheer |
| --- | --- | --- | --- | --- |
| sign_extend.sv | x | | * | |
| ALU_decoder.sv | x | | x | * |
| control_unit.sv |  | | * | |
| main_decoder.sv | x | | * |x|
| register.sv | x | | | * |
| top_decode.sv | * | | | X|
| alu.sv | | | | * |
| pc_src.sv | | | * | * |
| top_execute.sv | * | | | x |
| adder.sv | | * | | |
| instr_mem.sv | x | x | * | |
| mux_2.sv | | * | | *|
| PC_Reg.sv | | * | | |
| top_fetch.sv | * | | | |
| byte_extend.sv | | * | | |
| cache.sv | * | | | |
| cache_store_input.sv | * | | | |
| half_byte_word.sv | | * | | |
| half_extend.sv | | * | | |
| ram.sv | x | * | | |
| top_memory.sv | * | * | | |
| decode_execute_reg.sv | * | | | |
| execute_memory_reg.sv | * | | | |
| fetch_decode_reg.sv | * | | | |
| memory_writeback_reg.sv | * | | | |
| top_writeback.sv | * | | | |
| top.sv | * | | | |
|spatial_cache.sv||||*|

- The files cache.sv and cache_store_input.sv are only for the cache branch.
- top_memory has two principal contributors: Roshan and Corey.
- mux_2 was independently developed by Corey and Shaheer.

## Verilator testbenches (.cpp) and bash scripts (.sh)

| module | Roshan | Corey | Anlan | Shaheer |
| --- | --- | --- | --- | --- |
| main_decoder_tb.cpp | | | * | |
| sign_extend_tb.cpp | | | * | |
| aludecode_tb.cpp | | | | * |
| control_unit_tb.cpp | | | * | |
| decode/dome.sh | | | | |
| alutop_tb.cpp | | | | * |
| execute/dome.sh | | | | * |
| memory_tb.cpp | | * | | |
| run_mem.sh | | * | | |
| f1_vbuddy_sim.sh | * | | | |
| f1_vbuddy_tb.cpp | * | | | |
| gaussian_tb.cpp | x | | * | |
| generic_sim.sh | * | | | |
| generic_tb.cpp | * | | | |
| noisy_tb.cpp | x | | * | |
| ref_vbuddy_sim.sh | * | | | |
| ref_vbuddy_tp.cpp | * | | | |
| sine_tb.cpp | x | | * | |
| triangle_tb.cpp | x | | * | |

## Other files (.s, .py, .mem)

| module | Roshan | Corey | Anlan | Shaheer |
| --- | --- | --- | --- | --- |
| f1.s | * | * | * | |
| dataram.mem | | * | | |
| generate_ram.py | | * | | |
| calc_pdf.py | * | | | |
| pdf.s | x | | | |
| Makefile (f1) | | * | | *|

- For f1.s, Roshan, Corey, and Anlan were considered to have contributed equally.
