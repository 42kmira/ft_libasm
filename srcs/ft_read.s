
section .text
	global _ft_read

extern ___error

_ft_read:
	mov rax, 0
	syscall
	push rax

	cmp rax, 0
	jle error

	pop rax
	ret

error:
	call ___error
	mov r10, rax

	pop rax
	neg rax
	mov [r10], rax

	mov rax, -1
	ret
