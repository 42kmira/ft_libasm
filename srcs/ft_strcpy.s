section .text
	global _ft_strcpy

_ft_strcpy:
	mov r10, rdi
	mov r11, rsi
	push rdi

l1:
	mov r12, [r11]
	mov [r10], r12
	cmp byte [r11], 0
	jz exit
	inc r10
	inc r11
	jmp l1

exit:
	pop rdi
	mov rax, rdi
	ret
