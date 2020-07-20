extern ___error
section .text
		global _ft_read

_ft_read:
		mov rax, 0x02000003		; read systemcall
		syscall
		jc err
		ret

err:
		push rax				; for call error function
		call ___error			; errno 변수의 메모리주소가 rax에 저장됨
		pop qword [rax]			; [rax] 메모리에 64bit 크기만큼 errno 복사
		mov rax, -1				; 에러임을 나타내기 위해 -1 반환
		ret