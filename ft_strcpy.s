section .text
		global _ft_strcpy

_ft_strcpy:
		xor rax, rax				; rax 레지스터를 0으로 초기화

strcpy_loop:
		mov	dl, byte [rsi + rax]	; 1byte 크기 dl 레지스터에 rsi + rax 주소를 가진 메모리안에 있는 값의 1바이트 크기만큼을 mov
		cmp dl, 0x0					; dl과 0을 비교
		je strcpy_end				; 같다면 점프
		mov byte [rdi + rax], dl	; 복사
		inc rax						; 인덱스 증가
		jmp strcpy_loop				; 루프

strcpy_end:
		mov byte [rdi + rax], 0x0
		mov rax, rdi
		ret
