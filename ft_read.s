extern ___error
section .text
		global _ft_read

_ft_read:
		mov rax, 0x02000003		; read systemcall
		syscall
		jc err
		ret

err:
		push rax
		call ___error
		pop qword [rax]
		mov rax, -1
		ret