# Make file to assembly RISC-V assembly language program(s) in myprog folder
#   ... relocate instruction to start at 0xBFC00000
#   ... output hex file ready to be read into instruction memory

clean:
	@rm -f *.hex *.asm *.out *.bin

counter_test: counter.s
	@riscv64-unknown-elf-as -R -march=rv32im -mabi=ilp32 -o counter.out counter.s
	@riscv64-unknown-elf-ld -melf32lriscv -e 0xBFC00000 -Ttext 0xBFC00000 -o counter.out.reloc counter.out
	@riscv64-unknown-elf-objcopy -O binary -j .text counter.out.reloc counter.bin
	@riscv64-unknown-elf-objdump -D -S -l -F -Mno-aliases counter.out.reloc > counter.asm
	@od -v -An -t x1 counter.bin | tr -s '\n' | awk '{counter=counter};1' > counter.hex
	@rm counter.out
	@rm counter.out.reloc
	@rm counter.bin