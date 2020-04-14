section .text
	global ft_write


ft_write:
	mov eax, 1
	syscall

exit:
	mov rax, rdx
	ret
