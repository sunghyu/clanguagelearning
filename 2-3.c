#include <stdio.h> //표준출력함수가 포함된 헤더파일을 포함한다는 뜻
void main() {  //voids는 리턴되는 타입이 없음음 의미,main()은 프로그램을 시작하는 함수이다
	double a, b, c; //실수형변수 선언으로 a,b,c를 실수형변수로 선언
	a = 3.14;
	b = 0.82;
	c = a * b;
	
	printf("%f 곱하기 %f 은 %f 입니다\n", a, b, c);//printf()는 ""로감싸진 문자열을 모니터에 출력하는 기능을한다
}													//%f는 소수점이 있는 실수의 형식지정문자이다