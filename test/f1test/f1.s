.text

# Registers used (excluding zero):
# ra is used as the primary return address register.
# t1 is used for the nested subroutine call from loop to routine (it was considered unnecessary to implement a stack here).
# s0 and s1 are used for constants defined in init.
# a0 contains the code for the f1 lights.
# t2 is used as the loop counter in routine.
# t0 is used a temporary calculation register in loop.

main:
    JAL ra, init # NO OP
    JAL ra, _loop
    ADDI a0, zero, 0 # Cut lights at end of sequence

infloop:
    JAL ra, infloop # Loop here forever when program is finished

init:
    ADDI s0, zero, 0xF
    ADDI s1, zero, 8
    JALR ra, ra, 0
 
_loop:
    SLLI t0, a0, 1
    ADDI a0, t0, 1
    ADDI t2, zero, 0 # Reset t2 to 0 before calling routine
    JAL t1, routine
    BNE a0, s0, _loop
    JALR ra, ra, 0

routine:
    ADDI t2, t2, 1
    BNE t2, s1, routine
    JALR t1, t1, 0
