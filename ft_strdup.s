extern _ft_strlen
extern _ft_strcpy
extern _malloc

section .text
		global _ft_strdup

_ft_strdup:
		call _ft_strlen
		inc rax
		push rdi
		mov rdi, rax
		call _malloc
		cmp rax, 0
		je malloc_fail
		pop rsi
		mov rdi, rax
		call _ft_strcpy
		ret

malloc_fail:
		mov rax, 0x0
		ret