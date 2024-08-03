section .data
	format: db "Hello, %s", 10, 0
	user:	db "Holberton", 0

section .text
	global main
	extern printf

   main:
	; printf(format, user)
	mov rdi, format
	mov rsi, user
	; no XMM registers
	mov rax, 0
	call printf
	; return 0
	mov rax, 0
	ret
