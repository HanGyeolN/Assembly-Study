section	.text
		global _ft_strlen			; 함수 이름 설정

_ft_strlen:
		xor rax, rax				; rax를 0으로 초기화

strlen_loop:
		cmp byte [rdi + rax], 0x0	; 같나? rdi 에 rax만큼 더한 위치의 바이트값이 0과, 메모리 참조 기호[]
		je strlen_end				; 같다면 점프, strlen_end로
		inc rax						; 1 증가시킨다, rax를
		jmp strlen_loop				; 점프, strlen_loop로

strlen_end:
		ret							; 반환, 항상 rax값을 반환한다.