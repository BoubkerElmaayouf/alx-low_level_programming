;this program prints Hello, Holberton, followed by a new line. in assebly code
section .text
	global main
	extern    printf
main:
	mov edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 4
	int 0x80

	mov eax, 1
	int 0x80
section .data
	msg db "Hello, Holberton", 0xa
	len equ $ -msg
