
f1.out.reloc:     file format elf32-littleriscv


Disassembly of section .text:

bfc00000 <main> (File Offset: 0x1000):
main():
bfc00000:	010000ef          	jal	ra,bfc00010 <init> (File Offset: 0x1010)
bfc00004:	018000ef          	jal	ra,bfc0001c <_loop> (File Offset: 0x101c)
bfc00008:	00000513          	addi	a0,zero,0

bfc0000c <infloop> (File Offset: 0x100c):
infloop():
bfc0000c:	000000ef          	jal	ra,bfc0000c <infloop> (File Offset: 0x100c)

bfc00010 <init> (File Offset: 0x1010):
init():
bfc00010:	00f00413          	addi	s0,zero,15
bfc00014:	00800493          	addi	s1,zero,8
bfc00018:	000080e7          	jalr	ra,0(ra)

bfc0001c <_loop> (File Offset: 0x101c):
_loop():
bfc0001c:	00151293          	slli	t0,a0,0x1
bfc00020:	00128513          	addi	a0,t0,1
bfc00024:	00000393          	addi	t2,zero,0
bfc00028:	00c0036f          	jal	t1,bfc00034 <routine> (File Offset: 0x1034)
bfc0002c:	fe8518e3          	bne	a0,s0,bfc0001c <_loop> (File Offset: 0x101c)
bfc00030:	000080e7          	jalr	ra,0(ra)

bfc00034 <routine> (File Offset: 0x1034):
routine():
bfc00034:	00138393          	addi	t2,t2,1
bfc00038:	fe939ee3          	bne	t2,s1,bfc00034 <routine> (File Offset: 0x1034)
bfc0003c:	00030367          	jalr	t1,0(t1)

Disassembly of section .riscv.attributes:

00000000 <.riscv.attributes> (File Offset: 0x1040):
   0:	1e41                	.2byte	0x1e41
   2:	0000                	.2byte	0x0
   4:	7200                	.2byte	0x7200
   6:	7369                	.2byte	0x7369
   8:	01007663          	bgeu	zero,a6,14 <main-0xbfbfffec> (File Offset: 0x1054)
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
