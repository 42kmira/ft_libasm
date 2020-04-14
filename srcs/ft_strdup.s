section .text
	global ft_strdup

extern malloc
extern ft_strlen
extern ft_strcpy

ft_strdup:
	push rdi
	call ft_strlen

	mov rdi, rax
	call malloc
	push rax

	pop rdi
	mov rsi, rdi
	mov rdi, rax

	call ft_strcpy

	pop rax
	ret

