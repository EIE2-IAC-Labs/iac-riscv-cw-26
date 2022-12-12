.text

main:
    JAL ra, init
    ADDI x0, x0, 0 # NO OP
    ADDI x0, x0, 0
    JAL ra, _loop

init:
    ADDI x0, x0, 0
    ADDI x0, x0, 0
    ADDI x8, x8, 0xFF
    ADDI x0, x0, 0
    ADDI x0, x0, 0
    ADDI x7, x7, 50
    ADDI x0, x0, 0
    ADDI x0, x0, 0
 
 
_loop:
    ADDI x0, x0, 0
    ADDI x0, x0, 0
    ADDI a0, a0, 1
    ADDI x0, x0, 0
    ADDI x0, x0, 0

    JAL x6, routine
    ADDI x0, x0, 0
    ADDI x0, x0, 0
    BNE a0, x8, _loop

routine:
    ADDI x0, x0, 0
    ADDI x0, x0, 0
    ADDI x0, x0, 0
    ADDI x0, x0, 0
    ADDI x0, x0, 0
    ADDI x1, x1, 1
    ADDI x0, x0, 0
    ADDI x0, x0, 0
    BNE x1, x7, routine
    ADDI x0, x0, 0
    ADDI x0, x0, 0
    JALR x6, x0
