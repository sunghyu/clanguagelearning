#include <stdio.h>		//표준입출력함수가 포함되 헤더파일을 포함한다는 뜻이다
void main() {			//void는 반환값이 없다라는 뜻이고 main()은 프로그램을 시작하는 함수이다
	int su;
	su = 50;
	if (su > 95) {		//조건문이 참이면 실행문을 실행시키고 조건문이 거짓이면 실행문을 실행시키지 않는다
		printf("우수한 성적입니다.\n");	//조건문이 참일때 실행시킬 실행문이다

	}
	printf("당신의 점수는 %d점입니다.\n", su); //printf()함수는 ""안에있는 문자열을 출력시키는 함수이다
}