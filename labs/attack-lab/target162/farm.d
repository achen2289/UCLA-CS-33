
farm.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <start_farm>:
   0:	55                   	push   %rbp
   1:	48 89 e5             	mov    %rsp,%rbp
   4:	b8 01 00 00 00       	mov    $0x1,%eax
   9:	5d                   	pop    %rbp
   a:	c3                   	retq   

000000000000000b <getval_444>:
   b:	55                   	push   %rbp
   c:	48 89 e5             	mov    %rsp,%rbp
   f:	b8 48 89 c7 c2       	mov    $0xc2c78948,%eax
  14:	5d                   	pop    %rbp
  15:	c3                   	retq   

0000000000000016 <getval_310>:
  16:	55                   	push   %rbp
  17:	48 89 e5             	mov    %rsp,%rbp
  1a:	b8 48 89 c7 c3       	mov    $0xc3c78948,%eax
  1f:	5d                   	pop    %rbp
  20:	c3                   	retq   

0000000000000021 <getval_133>:
  21:	55                   	push   %rbp
  22:	48 89 e5             	mov    %rsp,%rbp
  25:	b8 5c e6 58 91       	mov    $0x9158e65c,%eax
  2a:	5d                   	pop    %rbp
  2b:	c3                   	retq   

000000000000002c <addval_143>:
  2c:	55                   	push   %rbp
  2d:	48 89 e5             	mov    %rsp,%rbp
  30:	89 7d fc             	mov    %edi,-0x4(%rbp)
  33:	8b 45 fc             	mov    -0x4(%rbp),%eax
  36:	2d 88 6f 6f 3c       	sub    $0x3c6f6f88,%eax
  3b:	5d                   	pop    %rbp
  3c:	c3                   	retq   

000000000000003d <addval_406>:
  3d:	55                   	push   %rbp
  3e:	48 89 e5             	mov    %rsp,%rbp
  41:	89 7d fc             	mov    %edi,-0x4(%rbp)
  44:	8b 45 fc             	mov    -0x4(%rbp),%eax
  47:	2d b8 76 38 3c       	sub    $0x3c3876b8,%eax
  4c:	5d                   	pop    %rbp
  4d:	c3                   	retq   

000000000000004e <setval_431>:
  4e:	55                   	push   %rbp
  4f:	48 89 e5             	mov    %rsp,%rbp
  52:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  56:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  5a:	c7 00 48 89 c7 92    	movl   $0x92c78948,(%rax)
  60:	90                   	nop
  61:	5d                   	pop    %rbp
  62:	c3                   	retq   

0000000000000063 <addval_316>:
  63:	55                   	push   %rbp
  64:	48 89 e5             	mov    %rsp,%rbp
  67:	89 7d fc             	mov    %edi,-0x4(%rbp)
  6a:	8b 45 fc             	mov    -0x4(%rbp),%eax
  6d:	2d 53 a7 6f 3c       	sub    $0x3c6fa753,%eax
  72:	5d                   	pop    %rbp
  73:	c3                   	retq   

0000000000000074 <addval_264>:
  74:	55                   	push   %rbp
  75:	48 89 e5             	mov    %rsp,%rbp
  78:	89 7d fc             	mov    %edi,-0x4(%rbp)
  7b:	8b 45 fc             	mov    -0x4(%rbp),%eax
  7e:	2d 97 a7 6f 6f       	sub    $0x6f6fa797,%eax
  83:	5d                   	pop    %rbp
  84:	c3                   	retq   

0000000000000085 <mid_farm>:
  85:	55                   	push   %rbp
  86:	48 89 e5             	mov    %rsp,%rbp
  89:	b8 01 00 00 00       	mov    $0x1,%eax
  8e:	5d                   	pop    %rbp
  8f:	c3                   	retq   

0000000000000090 <add_xy>:
  90:	55                   	push   %rbp
  91:	48 89 e5             	mov    %rsp,%rbp
  94:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  98:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  9c:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  a0:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  a4:	48 01 d0             	add    %rdx,%rax
  a7:	5d                   	pop    %rbp
  a8:	c3                   	retq   

00000000000000a9 <getval_187>:
  a9:	55                   	push   %rbp
  aa:	48 89 e5             	mov    %rsp,%rbp
  ad:	b8 48 89 e0 92       	mov    $0x92e08948,%eax
  b2:	5d                   	pop    %rbp
  b3:	c3                   	retq   

00000000000000b4 <getval_421>:
  b4:	55                   	push   %rbp
  b5:	48 89 e5             	mov    %rsp,%rbp
  b8:	b8 48 89 e0 c3       	mov    $0xc3e08948,%eax
  bd:	5d                   	pop    %rbp
  be:	c3                   	retq   

00000000000000bf <getval_419>:
  bf:	55                   	push   %rbp
  c0:	48 89 e5             	mov    %rsp,%rbp
  c3:	b8 09 ce 90 c3       	mov    $0xc390ce09,%eax
  c8:	5d                   	pop    %rbp
  c9:	c3                   	retq   

00000000000000ca <setval_181>:
  ca:	55                   	push   %rbp
  cb:	48 89 e5             	mov    %rsp,%rbp
  ce:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  d2:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  d6:	c7 00 89 c2 91 90    	movl   $0x9091c289,(%rax)
  dc:	90                   	nop
  dd:	5d                   	pop    %rbp
  de:	c3                   	retq   

00000000000000df <addval_386>:
  df:	55                   	push   %rbp
  e0:	48 89 e5             	mov    %rsp,%rbp
  e3:	89 7d fc             	mov    %edi,-0x4(%rbp)
  e6:	8b 45 fc             	mov    -0x4(%rbp),%eax
  e9:	2d 0e 76 3d 6e       	sub    $0x6e3d760e,%eax
  ee:	5d                   	pop    %rbp
  ef:	c3                   	retq   

00000000000000f0 <addval_409>:
  f0:	55                   	push   %rbp
  f1:	48 89 e5             	mov    %rsp,%rbp
  f4:	89 7d fc             	mov    %edi,-0x4(%rbp)
  f7:	8b 45 fc             	mov    -0x4(%rbp),%eax
  fa:	2d 9b 76 2e 3c       	sub    $0x3c2e769b,%eax
  ff:	5d                   	pop    %rbp
 100:	c3                   	retq   

0000000000000101 <getval_261>:
 101:	55                   	push   %rbp
 102:	48 89 e5             	mov    %rsp,%rbp
 105:	b8 81 ce 90 c3       	mov    $0xc390ce81,%eax
 10a:	5d                   	pop    %rbp
 10b:	c3                   	retq   

000000000000010c <getval_495>:
 10c:	55                   	push   %rbp
 10d:	48 89 e5             	mov    %rsp,%rbp
 110:	b8 89 ce 94 db       	mov    $0xdb94ce89,%eax
 115:	5d                   	pop    %rbp
 116:	c3                   	retq   

0000000000000117 <setval_382>:
 117:	55                   	push   %rbp
 118:	48 89 e5             	mov    %rsp,%rbp
 11b:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 11f:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 123:	c7 00 7c 68 89 e0    	movl   $0xe089687c,(%rax)
 129:	90                   	nop
 12a:	5d                   	pop    %rbp
 12b:	c3                   	retq   

000000000000012c <addval_226>:
 12c:	55                   	push   %rbp
 12d:	48 89 e5             	mov    %rsp,%rbp
 130:	89 7d fc             	mov    %edi,-0x4(%rbp)
 133:	8b 45 fc             	mov    -0x4(%rbp),%eax
 136:	2d b8 76 1f 6e       	sub    $0x6e1f76b8,%eax
 13b:	5d                   	pop    %rbp
 13c:	c3                   	retq   

000000000000013d <setval_199>:
 13d:	55                   	push   %rbp
 13e:	48 89 e5             	mov    %rsp,%rbp
 141:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 145:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 149:	c7 00 89 c2 92 90    	movl   $0x9092c289,(%rax)
 14f:	90                   	nop
 150:	5d                   	pop    %rbp
 151:	c3                   	retq   

0000000000000152 <setval_354>:
 152:	55                   	push   %rbp
 153:	48 89 e5             	mov    %rsp,%rbp
 156:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 15a:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 15e:	c7 00 89 c2 94 90    	movl   $0x9094c289,(%rax)
 164:	90                   	nop
 165:	5d                   	pop    %rbp
 166:	c3                   	retq   

0000000000000167 <addval_124>:
 167:	55                   	push   %rbp
 168:	48 89 e5             	mov    %rsp,%rbp
 16b:	89 7d fc             	mov    %edi,-0x4(%rbp)
 16e:	8b 45 fc             	mov    -0x4(%rbp),%eax
 171:	2d 75 3d df 24       	sub    $0x24df3d75,%eax
 176:	5d                   	pop    %rbp
 177:	c3                   	retq   

0000000000000178 <addval_327>:
 178:	55                   	push   %rbp
 179:	48 89 e5             	mov    %rsp,%rbp
 17c:	89 7d fc             	mov    %edi,-0x4(%rbp)
 17f:	8b 45 fc             	mov    -0x4(%rbp),%eax
 182:	2d f7 31 f7 2d       	sub    $0x2df731f7,%eax
 187:	5d                   	pop    %rbp
 188:	c3                   	retq   

0000000000000189 <getval_241>:
 189:	55                   	push   %rbp
 18a:	48 89 e5             	mov    %rsp,%rbp
 18d:	b8 a9 d1 84 c9       	mov    $0xc984d1a9,%eax
 192:	5d                   	pop    %rbp
 193:	c3                   	retq   

0000000000000194 <setval_413>:
 194:	55                   	push   %rbp
 195:	48 89 e5             	mov    %rsp,%rbp
 198:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 19c:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 1a0:	c7 00 89 d1 18 c9    	movl   $0xc918d189,(%rax)
 1a6:	90                   	nop
 1a7:	5d                   	pop    %rbp
 1a8:	c3                   	retq   

00000000000001a9 <getval_198>:
 1a9:	55                   	push   %rbp
 1aa:	48 89 e5             	mov    %rsp,%rbp
 1ad:	b8 89 d1 90 c2       	mov    $0xc290d189,%eax
 1b2:	5d                   	pop    %rbp
 1b3:	c3                   	retq   

00000000000001b4 <getval_389>:
 1b4:	55                   	push   %rbp
 1b5:	48 89 e5             	mov    %rsp,%rbp
 1b8:	b8 48 89 e0 94       	mov    $0x94e08948,%eax
 1bd:	5d                   	pop    %rbp
 1be:	c3                   	retq   

00000000000001bf <setval_259>:
 1bf:	55                   	push   %rbp
 1c0:	48 89 e5             	mov    %rsp,%rbp
 1c3:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 1c7:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 1cb:	c7 00 89 ce a4 d2    	movl   $0xd2a4ce89,(%rax)
 1d1:	90                   	nop
 1d2:	5d                   	pop    %rbp
 1d3:	c3                   	retq   

00000000000001d4 <setval_480>:
 1d4:	55                   	push   %rbp
 1d5:	48 89 e5             	mov    %rsp,%rbp
 1d8:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 1dc:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 1e0:	c7 00 89 d1 c4 c9    	movl   $0xc9c4d189,(%rax)
 1e6:	90                   	nop
 1e7:	5d                   	pop    %rbp
 1e8:	c3                   	retq   

00000000000001e9 <addval_377>:
 1e9:	55                   	push   %rbp
 1ea:	48 89 e5             	mov    %rsp,%rbp
 1ed:	89 7d fc             	mov    %edi,-0x4(%rbp)
 1f0:	8b 45 fc             	mov    -0x4(%rbp),%eax
 1f3:	2d 77 31 c7 3f       	sub    $0x3fc73177,%eax
 1f8:	5d                   	pop    %rbp
 1f9:	c3                   	retq   

00000000000001fa <getval_293>:
 1fa:	55                   	push   %rbp
 1fb:	48 89 e5             	mov    %rsp,%rbp
 1fe:	b8 89 ce 00 db       	mov    $0xdb00ce89,%eax
 203:	5d                   	pop    %rbp
 204:	c3                   	retq   

0000000000000205 <setval_112>:
 205:	55                   	push   %rbp
 206:	48 89 e5             	mov    %rsp,%rbp
 209:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 20d:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 211:	c7 00 30 48 89 e0    	movl   $0xe0894830,(%rax)
 217:	90                   	nop
 218:	5d                   	pop    %rbp
 219:	c3                   	retq   

000000000000021a <addval_145>:
 21a:	55                   	push   %rbp
 21b:	48 89 e5             	mov    %rsp,%rbp
 21e:	89 7d fc             	mov    %edi,-0x4(%rbp)
 221:	8b 45 fc             	mov    -0x4(%rbp),%eax
 224:	2d 77 3d f7 36       	sub    $0x36f73d77,%eax
 229:	5d                   	pop    %rbp
 22a:	c3                   	retq   

000000000000022b <addval_234>:
 22b:	55                   	push   %rbp
 22c:	48 89 e5             	mov    %rsp,%rbp
 22f:	89 7d fc             	mov    %edi,-0x4(%rbp)
 232:	8b 45 fc             	mov    -0x4(%rbp),%eax
 235:	2d 77 3d 6e 6f       	sub    $0x6f6e3d77,%eax
 23a:	5d                   	pop    %rbp
 23b:	c3                   	retq   

000000000000023c <addval_175>:
 23c:	55                   	push   %rbp
 23d:	48 89 e5             	mov    %rsp,%rbp
 240:	89 7d fc             	mov    %edi,-0x4(%rbp)
 243:	8b 45 fc             	mov    -0x4(%rbp),%eax
 246:	2d 77 2e b7 2d       	sub    $0x2db72e77,%eax
 24b:	5d                   	pop    %rbp
 24c:	c3                   	retq   

000000000000024d <setval_278>:
 24d:	55                   	push   %rbp
 24e:	48 89 e5             	mov    %rsp,%rbp
 251:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 255:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 259:	c7 00 89 c2 08 d2    	movl   $0xd208c289,(%rax)
 25f:	90                   	nop
 260:	5d                   	pop    %rbp
 261:	c3                   	retq   

0000000000000262 <addval_438>:
 262:	55                   	push   %rbp
 263:	48 89 e5             	mov    %rsp,%rbp
 266:	89 7d fc             	mov    %edi,-0x4(%rbp)
 269:	8b 45 fc             	mov    -0x4(%rbp),%eax
 26c:	2d 37 2e c7 2d       	sub    $0x2dc72e37,%eax
 271:	5d                   	pop    %rbp
 272:	c3                   	retq   

0000000000000273 <setval_331>:
 273:	55                   	push   %rbp
 274:	48 89 e5             	mov    %rsp,%rbp
 277:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 27b:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 27f:	c7 00 48 89 e0 94    	movl   $0x94e08948,(%rax)
 285:	90                   	nop
 286:	5d                   	pop    %rbp
 287:	c3                   	retq   

0000000000000288 <setval_333>:
 288:	55                   	push   %rbp
 289:	48 89 e5             	mov    %rsp,%rbp
 28c:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 290:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 294:	c7 00 97 48 c9 e0    	movl   $0xe0c94897,(%rax)
 29a:	90                   	nop
 29b:	5d                   	pop    %rbp
 29c:	c3                   	retq   

000000000000029d <getval_129>:
 29d:	55                   	push   %rbp
 29e:	48 89 e5             	mov    %rsp,%rbp
 2a1:	b8 89 ce 38 d2       	mov    $0xd238ce89,%eax
 2a6:	5d                   	pop    %rbp
 2a7:	c3                   	retq   

00000000000002a8 <addval_110>:
 2a8:	55                   	push   %rbp
 2a9:	48 89 e5             	mov    %rsp,%rbp
 2ac:	89 7d fc             	mov    %edi,-0x4(%rbp)
 2af:	8b 45 fc             	mov    -0x4(%rbp),%eax
 2b2:	2d 77 2e f7 3f       	sub    $0x3ff72e77,%eax
 2b7:	5d                   	pop    %rbp
 2b8:	c3                   	retq   

00000000000002b9 <end_farm>:
 2b9:	55                   	push   %rbp
 2ba:	48 89 e5             	mov    %rsp,%rbp
 2bd:	b8 01 00 00 00       	mov    $0x1,%eax
 2c2:	5d                   	pop    %rbp
 2c3:	c3                   	retq   
