
pdf.out.reloc:     file format elf32-littleriscv


Disassembly of section .text:

bfc00000 <main> (File Offset: 0x1000):
main():
bfc00000:	020000ef          	jal	ra,bfc00020 <init> (File Offset: 0x1020)
bfc00004:	00000013          	addi	zero,zero,0
bfc00008:	044000ef          	jal	ra,bfc0004c <build> (File Offset: 0x104c)
bfc0000c:	00000013          	addi	zero,zero,0

bfc00010 <forever> (File Offset: 0x1010):
forever():
bfc00010:	0a0000ef          	jal	ra,bfc000b0 <display> (File Offset: 0x10b0)
bfc00014:	00000013          	addi	zero,zero,0
bfc00018:	ff9ff06f          	jal	zero,bfc00010 <forever> (File Offset: 0x1010)
bfc0001c:	00000013          	addi	zero,zero,0

bfc00020 <init> (File Offset: 0x1020):
init():
bfc00020:	10000593          	addi	a1,zero,256
bfc00024:	00000013          	addi	zero,zero,0
bfc00028:	00000013          	addi	zero,zero,0

bfc0002c <_loop1> (File Offset: 0x102c):
_loop1():
bfc0002c:	fff58593          	addi	a1,a1,-1
bfc00030:	00000013          	addi	zero,zero,0
bfc00034:	00000013          	addi	zero,zero,0
bfc00038:	10058023          	sb	zero,256(a1)
bfc0003c:	fe0598e3          	bne	a1,zero,bfc0002c <_loop1> (File Offset: 0x102c)
bfc00040:	00000013          	addi	zero,zero,0
bfc00044:	00008067          	jalr	zero,0(ra)
bfc00048:	00000013          	addi	zero,zero,0

bfc0004c <build> (File Offset: 0x104c):
build():
bfc0004c:	000105b7          	lui	a1,0x10
bfc00050:	00000613          	addi	a2,zero,0
bfc00054:	10000693          	addi	a3,zero,256
bfc00058:	0c800713          	addi	a4,zero,200

bfc0005c <_loop2> (File Offset: 0x105c):
_loop2():
bfc0005c:	00c587b3          	add	a5,a1,a2
bfc00060:	00000013          	addi	zero,zero,0
bfc00064:	00000013          	addi	zero,zero,0
bfc00068:	0007c283          	lbu	t0,0(a5)
bfc0006c:	00000013          	addi	zero,zero,0
bfc00070:	00000013          	addi	zero,zero,0
bfc00074:	00d28833          	add	a6,t0,a3
bfc00078:	00000013          	addi	zero,zero,0
bfc0007c:	00000013          	addi	zero,zero,0
bfc00080:	00084303          	lbu	t1,0(a6)
bfc00084:	00000013          	addi	zero,zero,0
bfc00088:	00000013          	addi	zero,zero,0
bfc0008c:	00130313          	addi	t1,t1,1
bfc00090:	00000013          	addi	zero,zero,0
bfc00094:	00000013          	addi	zero,zero,0
bfc00098:	00680023          	sb	t1,0(a6)
bfc0009c:	00160613          	addi	a2,a2,1
bfc000a0:	fae31ee3          	bne	t1,a4,bfc0005c <_loop2> (File Offset: 0x105c)
bfc000a4:	00000013          	addi	zero,zero,0
bfc000a8:	00008067          	jalr	zero,0(ra)
bfc000ac:	00000013          	addi	zero,zero,0

bfc000b0 <display> (File Offset: 0x10b0):
display():
bfc000b0:	00000593          	addi	a1,zero,0
bfc000b4:	0ff00613          	addi	a2,zero,255
bfc000b8:	00000013          	addi	zero,zero,0

bfc000bc <_loop3> (File Offset: 0x10bc):
_loop3():
bfc000bc:	1005c503          	lbu	a0,256(a1) # 10100 <base_data+0x100> (File Offset: 0xffffffff40411100)
bfc000c0:	00158593          	addi	a1,a1,1
bfc000c4:	00000013          	addi	zero,zero,0
bfc000c8:	00000013          	addi	zero,zero,0
bfc000cc:	fec598e3          	bne	a1,a2,bfc000bc <_loop3> (File Offset: 0x10bc)
bfc000d0:	00000013          	addi	zero,zero,0
bfc000d4:	00008067          	jalr	zero,0(ra)
bfc000d8:	00000013          	addi	zero,zero,0

Disassembly of section .riscv.attributes:

00000000 <.riscv.attributes> (File Offset: 0x10dc):
   0:	1e41                	.2byte	0x1e41
   2:	0000                	.2byte	0x0
   4:	7200                	.2byte	0x7200
   6:	7369                	.2byte	0x7369
   8:	01007663          	bgeu	zero,a6,14 <max_count-0xb4> (File Offset: 0x10f0)
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
