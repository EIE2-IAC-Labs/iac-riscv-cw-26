
counter.out.reloc:     file format elf32-littleriscv


Disassembly of section .text:

bfc00000 <main> (File Offset: 0x1000):
main():
bfc00000:	010000ef          	jal	ra,bfc00010 <init> (File Offset: 0x1010)
bfc00004:	00000013          	addi	zero,zero,0
bfc00008:	00000013          	addi	zero,zero,0
bfc0000c:	038000ef          	jal	ra,bfc00044 <_loop> (File Offset: 0x1044)

bfc00010 <init> (File Offset: 0x1010):
init():
bfc00010:	0ff00413          	addi	s0,zero,255
bfc00014:	00000013          	addi	zero,zero,0
bfc00018:	00000013          	addi	zero,zero,0
bfc0001c:	00100493          	addi	s1,zero,1
bfc00020:	00000013          	addi	zero,zero,0
bfc00024:	00000013          	addi	zero,zero,0
bfc00028:	10902023          	sw	s1,256(zero) # 100 <base_data> (File Offset: 0xffffffff40401100)
bfc0002c:	00000013          	addi	zero,zero,0
bfc00030:	00000013          	addi	zero,zero,0

bfc00034 <reset> (File Offset: 0x1034):
reset():
bfc00034:	10002503          	lw	a0,256(zero) # 100 <base_data> (File Offset: 0xffffffff40401100)
bfc00038:	00000013          	addi	zero,zero,0
bfc0003c:	00000013          	addi	zero,zero,0
bfc00040:	004000ef          	jal	ra,bfc00044 <_loop> (File Offset: 0x1044)

bfc00044 <_loop> (File Offset: 0x1044):
_loop():
bfc00044:	00150513          	addi	a0,a0,1
bfc00048:	00000013          	addi	zero,zero,0
bfc0004c:	00000013          	addi	zero,zero,0
bfc00050:	fe851ae3          	bne	a0,s0,bfc00044 <_loop> (File Offset: 0x1044)
bfc00054:	00000013          	addi	zero,zero,0
bfc00058:	00000013          	addi	zero,zero,0
bfc0005c:	fd9ff0ef          	jal	ra,bfc00034 <reset> (File Offset: 0x1034)

Disassembly of section .riscv.attributes:

00000000 <.riscv.attributes> (File Offset: 0x1060):
   0:	1e41                	.2byte	0x1e41
   2:	0000                	.2byte	0x0
   4:	7200                	.2byte	0x7200
   6:	7369                	.2byte	0x7369
   8:	01007663          	bgeu	zero,a6,14 <base_data-0xec> (File Offset: 0x1074)
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
