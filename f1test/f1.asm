
f1.out.reloc:     file format elf32-littleriscv


Disassembly of section .text:

bfc00000 <main> (File Offset: 0x1000):
main():
bfc00000:	028000ef          	jal	ra,bfc00028 <init> (File Offset: 0x1028)
bfc00004:	00000013          	addi	zero,zero,0
bfc00008:	00000013          	addi	zero,zero,0
bfc0000c:	030000ef          	jal	ra,bfc0003c <_loop> (File Offset: 0x103c)
bfc00010:	00000013          	addi	zero,zero,0
bfc00014:	00000013          	addi	zero,zero,0
bfc00018:	00000513          	addi	a0,zero,0

bfc0001c <infloop> (File Offset: 0x101c):
infloop():
bfc0001c:	000000ef          	jal	ra,bfc0001c <infloop> (File Offset: 0x101c)
bfc00020:	00000013          	addi	zero,zero,0
bfc00024:	00000013          	addi	zero,zero,0

bfc00028 <init> (File Offset: 0x1028):
init():
bfc00028:	0ff00413          	addi	s0,zero,255
bfc0002c:	00800493          	addi	s1,zero,8
bfc00030:	000080e7          	jalr	ra,0(ra)
bfc00034:	00000013          	addi	zero,zero,0
bfc00038:	00000013          	addi	zero,zero,0

bfc0003c <_loop> (File Offset: 0x103c):
_loop():
bfc0003c:	00151293          	slli	t0,a0,0x1
bfc00040:	00000013          	addi	zero,zero,0
bfc00044:	00000013          	addi	zero,zero,0
bfc00048:	00128513          	addi	a0,t0,1
bfc0004c:	00000393          	addi	t2,zero,0
bfc00050:	0240036f          	jal	t1,bfc00074 <routine> (File Offset: 0x1074)
bfc00054:	00000013          	addi	zero,zero,0
bfc00058:	00000013          	addi	zero,zero,0
bfc0005c:	fe8510e3          	bne	a0,s0,bfc0003c <_loop> (File Offset: 0x103c)
bfc00060:	00000013          	addi	zero,zero,0
bfc00064:	00000013          	addi	zero,zero,0
bfc00068:	000080e7          	jalr	ra,0(ra)
bfc0006c:	00000013          	addi	zero,zero,0
bfc00070:	00000013          	addi	zero,zero,0

bfc00074 <routine> (File Offset: 0x1074):
routine():
bfc00074:	00138393          	addi	t2,t2,1
bfc00078:	00000013          	addi	zero,zero,0
bfc0007c:	00000013          	addi	zero,zero,0
bfc00080:	fe939ae3          	bne	t2,s1,bfc00074 <routine> (File Offset: 0x1074)
bfc00084:	00000013          	addi	zero,zero,0
bfc00088:	00000013          	addi	zero,zero,0
bfc0008c:	00030367          	jalr	t1,0(t1)
bfc00090:	00000013          	addi	zero,zero,0
bfc00094:	00000013          	addi	zero,zero,0

Disassembly of section .riscv.attributes:

00000000 <.riscv.attributes> (File Offset: 0x1098):
   0:	1e41                	.2byte	0x1e41
   2:	0000                	.2byte	0x0
   4:	7200                	.2byte	0x7200
   6:	7369                	.2byte	0x7369
   8:	01007663          	bgeu	zero,a6,14 <main-0xbfbfffec> (File Offset: 0x10ac)
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
