.text

main:
    JAL ra, init
    JAL ra, _loop

init:
    ADDI x8, x8, 0xFF
    ADDI x7, x7, 50

_loop:
    ADDI a0, a0, 1
    JAL x6, routine
    BNE a0, x8, _loop

routine:
    ADDI x0, x0, 0
    ADDI x1, x1, 1
    BNE x1, x7, routine
    JALR x6, x0
