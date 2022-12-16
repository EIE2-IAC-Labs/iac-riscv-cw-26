# Make file to assembly RISC-V assembly language program(s) in myprog folder
#   ... relocate instruction to start at 0xBFC00000
#   ... output hex file ready to be read into instruction memory

clean:
	@rm -f *.hex *.asm *.out *.bin

f1test: f1.s
	@riscv64-unknown-elf-as -R -march=rv32im -mabi=ilp32 -o f1.out f1.s
	@riscv64-unknown-elf-ld -melf32lriscv -e 0xBFC00000 -Ttext 0xBFC00000 -o f1.out.reloc f1.out
	@riscv64-unknown-elf-objcopy -O binary -j .text f1.out.reloc f1.bin
	@riscv64-unknown-elf-objdump -D -S -l -F -Mno-aliases f1.out.reloc > f1.asm
	@od -v -An -t x1 f1.bin | tr -s '\n' | awk '{f1=f1};1' > f1.hex
	@rm f1.out
	@rm f1.out.reloc
	@rm f1.bin