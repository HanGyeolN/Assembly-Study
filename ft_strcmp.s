section .text
		global _ft_strcmp

_ft_strcmp:
		xor rax, rax

strcmp_loop:
		mov cl, byte [rdi + rax]
		mov dl, byte [rsi + rax]
		cmp cl, 0x0
		je strcmp_end
		cmp dl, 0x0
		je strcmp_end
		cmp cl, dl
		jne strcmp_end
		inc rax
		jmp strcmp_loop

strcmp_end:
		cmp cl, dl
		ja strcmp_return_one;
		jb strcmp_return_minus;
		mov rax, 0x0
		ret

strcmp_return_one:
		mov rax, 0x1
		ret

strcmp_return_minus:
		mov rax, -0x1
		ret
