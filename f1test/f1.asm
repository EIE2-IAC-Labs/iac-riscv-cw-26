
f1.out.reloc:     file format elf32-littleriscv


Disassembly of section .text:

bfc00000 <init> (File Offset: 0x1000):
init():
bfc00000:	0ff40413          	addi	s0,s0,255
bfc00004:	03238393          	addi	t2,t2,50

bfc00008 <main> (File Offset: 0x1008):
main():
bfc00008:	00150513          	addi	a0,a0,1
bfc0000c:	0080036f          	jal	t1,bfc00014 <routine> (File Offset: 0x1014)
bfc00010:	fe851ce3          	bne	a0,s0,bfc00008 <main> (File Offset: 0x1008)

bfc00014 <routine> (File Offset: 0x1014):
routine():
bfc00014:	00000013          	addi	zero,zero,0
bfc00018:	00108093          	addi	ra,ra,1
bfc0001c:	fe709ce3          	bne	ra,t2,bfc00014 <routine> (File Offset: 0x1014)
bfc00020:	00000367          	jalr	t1,0(zero) # 0 <init-0xbfc00000> (File Offset: 0xffffffff40401000)

Disassembly of section .riscv.attributes:

00000000 <.riscv.attributes> (File Offset: 0x1024):
   0:	1e41                	.2byte	0x1e41
   2:	0000                	.2byte	0x0
   4:	7200                	.2byte	0x7200
   6:	7369                	.2byte	0x7369
   8:	01007663          	bgeu	zero,a6,14 <init-0xbfbfffec> (File Offset: 0x1038)
   c:	0014                	.2byte	0x14
   e:	0000                	.2byte	0x0
  10:	7205                	.2byte	0x7205
  12:	3376                	.2byte	0x3376
  14:	6932                	.2byte	0x6932
  16:	7032                	.2byte	0x7032
  18:	5f30                	.2byte	0x5f30
  1a:	326d                	.2byte	0x326d
  1c:	3070                	.2byte	0x3070
	...
