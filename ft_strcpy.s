section .text
		global _ft_strcpy

_ft_strcpy:
		xor rax, rax

strcpy_loop:
		mov	
		cmp byte [rsi + rax], 0x0
		je strcpy_end
		mov byte [rdi + rax], byte [rsi + rax]
		inc rax
		jmp strcpy_loop

strcpy_end:
		mov byte [rdi + rax], 0x0
		mov rax, rdi
		ret
