#include <stdio.h>		//표준입출력함수가 포함된 헤더파일을 포함한다는 뜻이다
void main() {			//void는 변환값이 없다는 의미고 main()은 프로그램을 시작하는 함수이다
	int a, b, max;      //a,b,max 를 정수형변수로 선언
	
	a = 10;
	b = 8;

	max = (a > b) ? a : b;  //3항조건연산자로 조건식(a>b)가 참이면 a를 실행 거짓이면 b를 실행한다

	printf("%d 과 %d 중 큰 수는 %d 입니다\n", a, b, max); //(a>b)가 참이므로 a를 실행시켜 max==10이 된다
}