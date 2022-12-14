.text
.equ base_pdf, 0x100
.equ base_data, 0x10000
.equ max_count, 200
main:
    JAL     ra, init  # jump to init, ra and save position to ra
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    JAL     ra, build
    ADDI zero, zero, 0
    ADDI zero, zero, 0
forever:
    JAL     ra, display
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    J       forever
    ADDI zero, zero, 0
    ADDI zero, zero, 0

init:       # function to initialise PDF buffer memory 
    LI      a1, 0x100            # loop_count a1 = 256
    ADDI zero, zero, 0
    ADDI zero, zero, 0
_loop1:                         # repeat
    ADDI    a1, a1, -1        #     decrement a1
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    SB      zero, base_pdf(a1)  #     mem[base_pdf+a1) = 0
    BNE     a1, zero, _loop1    # until a1 = 0
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    RET
    ADDI zero, zero, 0
    ADDI zero, zero, 0

build:      # function to build prob dist func (pdf)
    LI      a1, base_data       # a1 = base address of data array
    LI      a2, 0               # a2 = offset into of data array 
    LI      a3, base_pdf        # a3 = base address of pdf array
    LI      a4, max_count       # a4 = maximum count to terminate
_loop2:                         # repeat
    ADD     a5, a1, a2          #     a5 = data base address + offset
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    LBU     t0, 0(a5)           #     t0 = data value
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    ADD     a6, t0, a3          #     a6 = index into pdf array
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    LBU     t1, 0(a6)           #     t1 = current bin count
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    ADDI    t1, t1, 1           #     increment bin count
    ADDI zero, zero, 0
    # The two below instructions have been swapped to avoid the data hazard without adding more no-ops.
    ADDI    a2, a2, 1           #     point to next data in array
    SB      t1, 0(a6)           #     update bin count
    BNE     t1, a4, _loop2      # until bin count reaches max
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    RET
    ADDI zero, zero, 0
    ADDI zero, zero, 0

display:    # function send PDF array value to a0 for display
    LI      a1, 0               # a1 = offset into pdf array
    LI      a2, 255             # a2 = max index of pdf array
    ADDI zero, zero, 0
_loop3:                         # repeat
    LBU     a0, base_pdf(a1)    #   a0 = mem[base_pdf+a1)
    addi    a1, a1, 1           #   incr 
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    BNE     a1, a2, _loop3      # until end of pdf array
    ADDI zero, zero, 0
    ADDI zero, zero, 0
    RET
    ADDI zero, zero, 0
    ADDI zero, zero, 0
