
section .text
	global _ft_read
	extern ___error

_ft_read:
	mov rax, 0x2000003
	syscall
	push rax

	jc error

	pop rax
	ret

error:
	call ___error
	mov r10, rax

	pop rax
	mov [r10], rax

	mov rax, -1
	ret
