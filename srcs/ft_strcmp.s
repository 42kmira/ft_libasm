section .text
	global ft_strcmp

%macro NULL_CHECK 1
	cmp %1, 0
	je exit
%endmacro

ft_strcmp:
	mov	r12, rdi
	mov r13, rsi

	NULL_CHECK(r12)
	NULL_CHECK(r13)

l1:

	mov r15b, byte [r12]
	sub r15b, byte [r13]
	cmp r15b, 0
	jnz exit

	cmp byte [r13], 0
	jz exit

	inc r12
	inc r13

	jmp l1

exit:
	movsx rax, r15b
	ret

