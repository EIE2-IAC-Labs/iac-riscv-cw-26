.text

init:
    ADDI x8, x8, 0xFF
    ADDI x7, x7, 50

main:
    ADDI a0, a0, 1
    JAL x6, routine
    BNE a0, x8, main

routine:
    ADDI x0, x0, 0
    ADDI x1, x1, 1
    BNE x1, x7, routine
    JALR x6, x0
