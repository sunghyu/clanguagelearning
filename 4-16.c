#include <stdio.h>  // 표준입출력함수가포함된헤더파일을포함한다는뜻이다
void main() {		// void는 반환값이 없음을 의미하고 main()은 프로그램 시작함수이다
	int num;

	printf("구구단 5단 입니다\n"); //""안의 문자열을 출력해주는 함수이다

	for (num = 1; num < 10; num++) {  //조건이 참일동안 즉,num=1~9일동안 반복해서 실행문을 반복한다
		printf("5 x %d = %d", num, 5 * num);  //""안의 형식지정문자와 ""뒤의 변수의 개수 및 순서가 일치되어야한다
		if (num % 3 == 0) printf("\n");  //조건이 참일때 실행할 실행문과 거짓일때 실행할 실행문이 각각 존재하는  if-else문이다
		else printf("\t");
	}
	printf("\n\n");
}