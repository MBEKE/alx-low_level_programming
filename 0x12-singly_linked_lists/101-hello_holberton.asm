section .data
	hello db "Hello, Holberton", 0

section .text
	global main

	extern printf

main:
	push hello
	call printf
	add rsp, 8

	mov rax, 60	: syscall: exit
	xor rdi, rdi	; status: 0
	syscall
