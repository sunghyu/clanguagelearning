#include <stdio.h>		//표준입출력함수가 포함된 헤더파일을 포함한다는 뜻이다
void main() {			//void는 반환값이 없음을 의미하고 main()은 c언어에서 프로그램을 시작시키기 위해 필요한 시작함수이다
	int a, b, c;		//a,b,c 를 정수형변수로 선언

	a = 6;
	b = 8;
	printf("a는 %d b는 %d입니다\n",a, b);  //""안의 형식지정문자와 ""뒤의 변수의 개수 및 순서가 일치하여야한다

	c = a > b; //a가 b보다 크다
	printf("a>b 의 결과는 %d 입니다\n", c);
	c = a >= b; //a가 b보다 크거나 같다
	printf("a>=b 의 결과는 %d 입니다\n", c);
	c = a < b;  //a가 b보다 작다
	printf("a<b 의 결과는 %d 입니다\n", c);
	c = a <= b;  //a가 b보다 작거나 같다
	printf("a<=b 의 결과는 %d 입니다\n", c);
	c = a == b;  //a와b가 같다
	printf("a==b 의 결과는 %d 입니다\n", c);
	c = a != b; //a와 b가 같지않다
	printf("a!=b 의 결과는 %d 입니다\n", c);

}