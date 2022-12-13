
f1.out.reloc:     file format elf32-littleriscv


Disassembly of section .text:

bfc00000 <main> (File Offset: 0x1000):
main():
bfc00000:	024000ef          	jal	ra,bfc00024 <init> (File Offset: 0x1024)
bfc00004:	00000013          	addi	zero,zero,0
bfc00008:	00000013          	addi	zero,zero,0
bfc0000c:	03c000ef          	jal	ra,bfc00048 <_loop> (File Offset: 0x1048)
bfc00010:	00000013          	addi	zero,zero,0
bfc00014:	00000013          	addi	zero,zero,0

bfc00018 <infloop> (File Offset: 0x1018):
infloop():
bfc00018:	000000ef          	jal	ra,bfc00018 <infloop> (File Offset: 0x1018)
bfc0001c:	00000013          	addi	zero,zero,0
bfc00020:	00000013          	addi	zero,zero,0

bfc00024 <init> (File Offset: 0x1024):
init():
bfc00024:	0ff40413          	addi	s0,s0,255
bfc00028:	00000013          	addi	zero,zero,0
bfc0002c:	00000013          	addi	zero,zero,0
bfc00030:	03248493          	addi	s1,s1,50
bfc00034:	00000013          	addi	zero,zero,0
bfc00038:	00000013          	addi	zero,zero,0
bfc0003c:	000080e7          	jalr	ra,0(ra)
bfc00040:	00000013          	addi	zero,zero,0
bfc00044:	00000013          	addi	zero,zero,0

bfc00048 <_loop> (File Offset: 0x1048):
_loop():
bfc00048:	00151513          	slli	a0,a0,0x1
bfc0004c:	00000013          	addi	zero,zero,0
bfc00050:	00000013          	addi	zero,zero,0
bfc00054:	00150513          	addi	a0,a0,1
bfc00058:	00000013          	addi	zero,zero,0
bfc0005c:	00000013          	addi	zero,zero,0
bfc00060:	00000393          	addi	t2,zero,0
bfc00064:	00000013          	addi	zero,zero,0
bfc00068:	00000013          	addi	zero,zero,0
bfc0006c:	0240036f          	jal	t1,bfc00090 <routine> (File Offset: 0x1090)
bfc00070:	00000013          	addi	zero,zero,0
bfc00074:	00000013          	addi	zero,zero,0
bfc00078:	fc8518e3          	bne	a0,s0,bfc00048 <_loop> (File Offset: 0x1048)
bfc0007c:	00000013          	addi	zero,zero,0
bfc00080:	00000013          	addi	zero,zero,0
bfc00084:	000080e7          	jalr	ra,0(ra)
bfc00088:	00000013          	addi	zero,zero,0
bfc0008c:	00000013          	addi	zero,zero,0

bfc00090 <routine> (File Offset: 0x1090):
routine():
bfc00090:	00000013          	addi	zero,zero,0
bfc00094:	00000013          	addi	zero,zero,0
bfc00098:	00000013          	addi	zero,zero,0
bfc0009c:	00000013          	addi	zero,zero,0
bfc000a0:	00000013          	addi	zero,zero,0
bfc000a4:	00138393          	addi	t2,t2,1
bfc000a8:	00000013          	addi	zero,zero,0
bfc000ac:	00000013          	addi	zero,zero,0
bfc000b0:	fe9390e3          	bne	t2,s1,bfc00090 <routine> (File Offset: 0x1090)
bfc000b4:	00000013          	addi	zero,zero,0
bfc000b8:	00000013          	addi	zero,zero,0
bfc000bc:	00030367          	jalr	t1,0(t1)
bfc000c0:	00000013          	addi	zero,zero,0
bfc000c4:	00000013          	addi	zero,zero,0

Disassembly of section .riscv.attributes:

00000000 <.riscv.attributes> (File Offset: 0x10c8):
   0:	1e41                	.2byte	0x1e41
   2:	0000                	.2byte	0x0
   4:	7200                	.2byte	0x7200
   6:	7369                	.2byte	0x7369
   8:	01007663          	bgeu	zero,a6,14 <main-0xbfbfffec> (File Offset: 0x10dc)
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
