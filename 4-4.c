#include <stdio.h>   //표준입출력함수가 포함된 헤더파일을 포함한다는 뜻이다
void main() {		//void는 반환값이 없음을 의미하고 main()은 프로그램을 시작하는 함수이다
	int su;
	su = 97;

				  

	if (su > 95) {				  //조건문이 참이면 실행문을 실행하고 거짓이면 실행하지 않고 if문을 끝낸다
		printf("우수한 성적입니다.\n");  //조건이 참일때 실행시킬 실행문이다
		printf("수고하였습니다.\n");     //실행시킬 실행문이 하나라면 {}을 생략시킬 수 있다 하지만 실행문이 2개 이상이라면 {}를 생략하면 안된다
	}
	printf("당신의 점수는 %d점입니다.\n", su); //""안에있는 형식지정문자의 개수및 순서와""뒤에있는 변수의 개수및 순서가 일치하여야한다
}