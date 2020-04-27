section .text
	global _ft_strdup

extern _malloc
extern _ft_strlen
extern _ft_strcpy

_ft_strdup:
	push rdi
	call _ft_strlen

	mov rdi, rax
	call _malloc
	push rax

	pop rdi
	mov rsi, rdi
	mov rdi, rax

	call _ft_strcpy

	pop rax
	ret

