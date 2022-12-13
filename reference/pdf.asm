
pdf.out.reloc:     file format elf32-littleriscv


Disassembly of section .text:

bfc00000 <main> (File Offset: 0x1000):
main():
bfc00000:	030000ef          	jal	ra,bfc00030 <init> (File Offset: 0x1030)
bfc00004:	00000013          	addi	zero,zero,0
bfc00008:	00000013          	addi	zero,zero,0
bfc0000c:	060000ef          	jal	ra,bfc0006c <build> (File Offset: 0x106c)
bfc00010:	00000013          	addi	zero,zero,0
bfc00014:	00000013          	addi	zero,zero,0

bfc00018 <forever> (File Offset: 0x1018):
forever():
bfc00018:	0f0000ef          	jal	ra,bfc00108 <display> (File Offset: 0x1108)
bfc0001c:	00000013          	addi	zero,zero,0
bfc00020:	00000013          	addi	zero,zero,0
bfc00024:	ff5ff06f          	jal	zero,bfc00018 <forever> (File Offset: 0x1018)
bfc00028:	00000013          	addi	zero,zero,0
bfc0002c:	00000013          	addi	zero,zero,0

bfc00030 <init> (File Offset: 0x1030):
init():
bfc00030:	10000593          	addi	a1,zero,256
bfc00034:	00000013          	addi	zero,zero,0
bfc00038:	00000013          	addi	zero,zero,0

bfc0003c <_loop1> (File Offset: 0x103c):
_loop1():
bfc0003c:	fff58593          	addi	a1,a1,-1
bfc00040:	00000013          	addi	zero,zero,0
bfc00044:	00000013          	addi	zero,zero,0
bfc00048:	10058023          	sb	zero,256(a1)
bfc0004c:	00000013          	addi	zero,zero,0
bfc00050:	00000013          	addi	zero,zero,0
bfc00054:	fe0594e3          	bne	a1,zero,bfc0003c <_loop1> (File Offset: 0x103c)
bfc00058:	00000013          	addi	zero,zero,0
bfc0005c:	00000013          	addi	zero,zero,0
bfc00060:	00008067          	jalr	zero,0(ra)
bfc00064:	00000013          	addi	zero,zero,0
bfc00068:	00000013          	addi	zero,zero,0

bfc0006c <build> (File Offset: 0x106c):
build():
bfc0006c:	000105b7          	lui	a1,0x10
bfc00070:	00000013          	addi	zero,zero,0
bfc00074:	00000013          	addi	zero,zero,0
bfc00078:	00000613          	addi	a2,zero,0
bfc0007c:	00000013          	addi	zero,zero,0
bfc00080:	00000013          	addi	zero,zero,0
bfc00084:	10000693          	addi	a3,zero,256
bfc00088:	00000013          	addi	zero,zero,0
bfc0008c:	00000013          	addi	zero,zero,0
bfc00090:	0c800713          	addi	a4,zero,200
bfc00094:	00000013          	addi	zero,zero,0
bfc00098:	00000013          	addi	zero,zero,0

bfc0009c <_loop2> (File Offset: 0x109c):
_loop2():
bfc0009c:	00c587b3          	add	a5,a1,a2
bfc000a0:	00000013          	addi	zero,zero,0
bfc000a4:	00000013          	addi	zero,zero,0
bfc000a8:	0007c283          	lbu	t0,0(a5)
bfc000ac:	00000013          	addi	zero,zero,0
bfc000b0:	00000013          	addi	zero,zero,0
bfc000b4:	00d28833          	add	a6,t0,a3
bfc000b8:	00000013          	addi	zero,zero,0
bfc000bc:	00000013          	addi	zero,zero,0
bfc000c0:	00084303          	lbu	t1,0(a6)
bfc000c4:	00000013          	addi	zero,zero,0
bfc000c8:	00000013          	addi	zero,zero,0
bfc000cc:	00130313          	addi	t1,t1,1
bfc000d0:	00000013          	addi	zero,zero,0
bfc000d4:	00000013          	addi	zero,zero,0
bfc000d8:	00680023          	sb	t1,0(a6)
bfc000dc:	00000013          	addi	zero,zero,0
bfc000e0:	00000013          	addi	zero,zero,0
bfc000e4:	00160613          	addi	a2,a2,1
bfc000e8:	00000013          	addi	zero,zero,0
bfc000ec:	00000013          	addi	zero,zero,0
bfc000f0:	fae316e3          	bne	t1,a4,bfc0009c <_loop2> (File Offset: 0x109c)
bfc000f4:	00000013          	addi	zero,zero,0
bfc000f8:	00000013          	addi	zero,zero,0
bfc000fc:	00008067          	jalr	zero,0(ra)
bfc00100:	00000013          	addi	zero,zero,0
bfc00104:	00000013          	addi	zero,zero,0

bfc00108 <display> (File Offset: 0x1108):
display():
bfc00108:	00000593          	addi	a1,zero,0
bfc0010c:	00000013          	addi	zero,zero,0
bfc00110:	00000013          	addi	zero,zero,0
bfc00114:	0ff00613          	addi	a2,zero,255
bfc00118:	00000013          	addi	zero,zero,0
bfc0011c:	00000013          	addi	zero,zero,0

bfc00120 <_loop3> (File Offset: 0x1120):
_loop3():
bfc00120:	1005c503          	lbu	a0,256(a1) # 10100 <base_data+0x100> (File Offset: 0xffffffff40411100)
bfc00124:	00000013          	addi	zero,zero,0
bfc00128:	00000013          	addi	zero,zero,0
bfc0012c:	00158593          	addi	a1,a1,1
bfc00130:	00000013          	addi	zero,zero,0
bfc00134:	00000013          	addi	zero,zero,0
bfc00138:	fec594e3          	bne	a1,a2,bfc00120 <_loop3> (File Offset: 0x1120)
bfc0013c:	00000013          	addi	zero,zero,0
bfc00140:	00000013          	addi	zero,zero,0
bfc00144:	00008067          	jalr	zero,0(ra)
bfc00148:	00000013          	addi	zero,zero,0
bfc0014c:	00000013          	addi	zero,zero,0

Disassembly of section .riscv.attributes:

00000000 <.riscv.attributes> (File Offset: 0x1150):
   0:	1e41                	.2byte	0x1e41
   2:	0000                	.2byte	0x0
   4:	7200                	.2byte	0x7200
   6:	7369                	.2byte	0x7369
   8:	01007663          	bgeu	zero,a6,14 <max_count-0xb4> (File Offset: 0x1164)
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
