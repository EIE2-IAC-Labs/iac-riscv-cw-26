.text
.equ base_data, 0x100

# ADDI, zero, zero, 0 # no-op
# Registers used (excluding zero):
# ra is used as the return address
# s0 is used for constants 
# a0 is used to store the counter

main:
    JAL ra, init
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    JAL ra, _loop

init:
    ADDI s0, zero, 0xFF # sets an upper limit to the counter
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    ADDI s1, zero, 0x1
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    SW s1, base_data(zero) # stores 0 in the memory so i can be loaded into a register in the reset stage
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    

reset:
    LW a0, base_data(zero)
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    JAL ra, _loop


_loop:
    ADDI a0, a0, 0x1
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    BNE a0, s0, _loop
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    JAL ra, reset
