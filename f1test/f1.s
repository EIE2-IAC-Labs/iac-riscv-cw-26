.text

# Registers used (excluding zero):
# ra is used as the primary return address register.
# t1 is used for the nested subroutine call from loop to routine (it was considered unnecessary to implement a stack here).
# s0 and s1 are used for constants defined in init.
# t0 and t2 are used as loop counters in loop and routine.

main:
    JAL ra, init
    ADDI zero, zero, 0 # NO OP
    ADDI zero, zero, 0
    JAL ra, _loop
    ADDI zero, zero, 0
    ADDI zero, zero, 0

infloop:
    JAL ra, infloop # Loop here forever when program is finished
    ADDI zero, zero, 0
    ADDI zero, zero, 0

init:
    ADDI s0, s0, 0xFF
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    ADDI s1, s1, 50
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    JALR ra, ra, 0
    ADDI zero, zero, 0
    ADDI zero, zero, 0
 
_loop:
    ADDI t0, t0, 1
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    ADDI t2, zero, 0 # Reset t2 to 0 before calling routine
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    JAL t1, routine
    ADDI x0, x0, 0
    ADDI x0, x0, 0
    BNE t0, s0, _loop
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    JALR ra, ra, 0
    ADDI zero, zero, 0
    ADDI zero, zero, 0

routine:
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    ADDI t2, t2, 1
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    BNE t2, s1, routine
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    JALR t1, t1, 0
    ADDI zero, zero, 0
    ADDI zero, zero, 0
