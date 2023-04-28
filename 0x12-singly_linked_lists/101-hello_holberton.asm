;this program can prints Hello, Holberton, followed by a new line in assembly code:
global   main	; Declare main as a global function
	  extern    printf ; Declare an external reference to the printf function
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret	; Return from the main function
format: 
	db `Hello, Holberton\n`,0	; Define a null-terminated string with newline character

