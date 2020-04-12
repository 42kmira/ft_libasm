section .text
	global say_hi

say_hi:
	mov edx, len	;message length
	mov rsi, msg	;message to write
	mov edi,1		;file descriptor (stdout)
	mov eax, edi	;system call number (sys_write)
	syscall			;call kernel
					; Parameters are like write (int fd, const void *buff, size_t len);

	xor edi, edi	;Return value = 0
	mov eax,60		;system call number (sys_exit)
	syscall			;call kernel
		ret

section .data
	msg db 'Hello, world!', 0xa  ;string to be printed
	len equ $ - msg	; $ gets the current stack pointer (front of the line) then it
					; is minus the location of the msg label. This in effect gives
					; the length of msg.

