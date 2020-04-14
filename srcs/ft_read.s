section .text
	global ft_read

extern __errno_location

ft_read:
	mov eax, 0
	syscall
	push rax

	cmp rax, 0
	jle error

	pop rax
	ret

error:
	call __errno_location
	mov r10, rax

	pop rax
	neg rax
	mov [r10], rax

	mov rax, -1
	ret
