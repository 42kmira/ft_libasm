section .text
	global ft_strlen

ft_strlen:
	mov r13, rdi
	push rdi

	cmp r13, 0
	jz exit

l1:
	cmp byte [r13], 0
	jz exit
	inc r13
	jmp l1

exit:
	pop rdi
	sub r13, rdi
	mov rax, r13

	ret

