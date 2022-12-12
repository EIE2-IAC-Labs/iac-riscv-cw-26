
f1.out.reloc:     file format elf32-littleriscv


Disassembly of section .text:

bfc00000 <main> (File Offset: 0x1000):
main():
bfc00000:	010000ef          	jal	ra,bfc00010 <init> (File Offset: 0x1010)
bfc00004:	00000013          	addi	zero,zero,0
bfc00008:	00000013          	addi	zero,zero,0
bfc0000c:	024000ef          	jal	ra,bfc00030 <_loop> (File Offset: 0x1030)

bfc00010 <init> (File Offset: 0x1010):
init():
bfc00010:	00000013          	addi	zero,zero,0
bfc00014:	00000013          	addi	zero,zero,0
bfc00018:	0ff40413          	addi	s0,s0,255
bfc0001c:	00000013          	addi	zero,zero,0
bfc00020:	00000013          	addi	zero,zero,0
bfc00024:	03238393          	addi	t2,t2,50
bfc00028:	00000013          	addi	zero,zero,0
bfc0002c:	00000013          	addi	zero,zero,0

bfc00030 <_loop> (File Offset: 0x1030):
_loop():
bfc00030:	00000013          	addi	zero,zero,0
bfc00034:	00000013          	addi	zero,zero,0
bfc00038:	00150513          	addi	a0,a0,1
bfc0003c:	00000013          	addi	zero,zero,0
bfc00040:	00000013          	addi	zero,zero,0
bfc00044:	0100036f          	jal	t1,bfc00054 <routine> (File Offset: 0x1054)
bfc00048:	00000013          	addi	zero,zero,0
bfc0004c:	00000013          	addi	zero,zero,0
bfc00050:	fe8510e3          	bne	a0,s0,bfc00030 <_loop> (File Offset: 0x1030)

bfc00054 <routine> (File Offset: 0x1054):
routine():
bfc00054:	00000013          	addi	zero,zero,0
bfc00058:	00000013          	addi	zero,zero,0
bfc0005c:	00000013          	addi	zero,zero,0
bfc00060:	00000013          	addi	zero,zero,0
bfc00064:	00000013          	addi	zero,zero,0
bfc00068:	00108093          	addi	ra,ra,1
bfc0006c:	00000013          	addi	zero,zero,0
bfc00070:	00000013          	addi	zero,zero,0
bfc00074:	fe7090e3          	bne	ra,t2,bfc00054 <routine> (File Offset: 0x1054)
bfc00078:	00000013          	addi	zero,zero,0
bfc0007c:	00000013          	addi	zero,zero,0
bfc00080:	00000367          	jalr	t1,0(zero) # 0 <main-0xbfc00000> (File Offset: 0xffffffff40401000)

Disassembly of section .riscv.attributes:

00000000 <.riscv.attributes> (File Offset: 0x1084):
   0:	1e41                	.2byte	0x1e41
   2:	0000                	.2byte	0x0
   4:	7200                	.2byte	0x7200
   6:	7369                	.2byte	0x7369
   8:	01007663          	bgeu	zero,a6,14 <main-0xbfbfffec> (File Offset: 0x1098)
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
