#include <stdio.h> //표준입출력함수가 포함된 헤더파일을 포함한다는 뜻이다
void main() {		
	float a = 3.14;		//float는 4byte 실수형변수선언이다
	double b = 0.0002754; //double은 8byte 실수형변수선언이다 

	printf("a의 값은 소수형태로 %f 지수 형태로 %e\n", a, a);// %f,%e의 변수 유형은 부동소수점형으로 소수점이 있는 실수를 출력하는 형식지정문자이다
	printf("b의 값은 소수형태로 %f 지수 형태로 %e\n", b, b);
}