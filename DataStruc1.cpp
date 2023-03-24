﻿
#include <stdio.h>
int main()
{
	char x = 'D';
	char* px = &x;
	char** ppx = &px;
	printf("%p %p\n", px, px + 1); // x의 바이트 수가 1이므로 1 증가
	printf("%p %p\n", ppx, ppx + 1); // px의 바이트 수가 4. 따라서 그의 포인터인 ppx는 +1 시 가리키고 있는 px의 주소 +4
	printf("%p %p\n", ppx, ppx + 1); // px의 바이트 수가 4. 따라서 그의 포인터인 ppx는 +1 시 4 증가
	printf("%p %p\n", &x, &x + 1); // x의 주소에 1 증가 
	printf("%p %p\n", &px, &px + 1); // px의 주소에 4 증가
	printf("%p %p\n", &ppx, &ppx + 1); //마찬가지로 포인터이므로 ppx의 주소 +4
	
	
	printf(" TAB은 현재 신규 학회원 모집 중! 관심있는 분야로 스터디를 열어 공부도, 세미나에 참여해 생소한 분야도 찍먹 가능! 다양한 분야에서 활동하는 선배들에게서 많은 정보도 얻어가실 수 있습니다! 많관부!  "); //issue : 다른 기능 추가,  학회 홍보
	return 0;
}

// issue 코드 주석 추가
//202201541 컴퓨터공학부 박지민
// issue : 변수 c -> x 로 변경 완
// issue: 출력 결과 : 
//00000081073FF874 00000081073FF875
//00000081073FF898 00000081073FF8A0
//00000081073FF874 00000081073FF875
//00000081073FF898 00000081073FF8A0
//00000081073FF8B8 00000081073FF8C0
