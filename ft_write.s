extern ___error
section .text
		global _ft_write

_ft_write:
		xor rax, rax
		mov rax, 0x02000004		; write systemcall
		syscall
		jc err
		ret

err:
		push rax
		call ___error
		pop qword [rax]
		mov rax, -1
		ret