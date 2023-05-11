#include <stdio.h>	//표준입출력함수가포함된헤더파일을포함한다는뜻이다
void main() {		// void는 복귀되는 유형이 없음을 의미하고 main()은 c언어 프로그램이 실행되기 위해 필요한 c언어 시작함수다
	int num;		// num과dan을 정수형변수로선언하였다
	int dan;

	for (dan = 2; dan <= 9; dan++) {  //dan 이 2~9까지 실행된다
		 printf("\n구구단 %d단 입니다\n", dan); // 수행할 실행문으로 ""안의 문자열을 출력한다
		for (num = 1; num < 10; num++) {	//for문 안에 for문 으로 dan이2일때 num1~9 ...dan이9일때 num1~9이 실행된다 
			printf("%d x %d = %d", dan, num, dan * num); //num이 1~9일때 수행할 실행문이다
			if (num % 3 == 0) printf("\n");  //num이 1~9일동안 조건식이 참이면 수행할 실행문
			else printf("\t");				 //num이 1~9일동안 조건식이 거짓이면 수행할 실행문
		}
		printf("\n");
	}
}