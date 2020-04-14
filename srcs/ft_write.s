section .text
	global ft_write

extern __errno_location

ft_write:
	mov eax, 1
	syscall

	cmp rax, 0
	jle error

exit:
	mov rax, rdx
	ret

error:
	call __errno_location
	mov r10, rax

	pop rax
	neg rax
	mov [r10], rax

	mov rax, -1
	ret
