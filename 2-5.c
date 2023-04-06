#include <stdio.h> //표준출력함수가 포함된 헤더파일을 포함한다는뜻이다
void main() {		//void는 리턴되는 타입이 없음을 의미 main()은 프로그램을 시작하는 함수이다
	int age, height, muge; //age,height,muge를 정수형변수로 선언
	double j, k;			// j,k를 실수형변수로 선언
	char p = 'A';			//p를 A라고 선언

	age = 20;
	height = 180;
	muge = 70;
	
	j = 3.5;
	k = 0.72825;
	//printf()함수는 형식지정문자의 개수 및 순서와 ""뒤에 지정된 변수의 개수 및 순서가 정확히 일치하여야한다
	printf("나이는 %d 키는 %d 몸무게는 %d 입니다\n", age, height, muge);
	//printf()는 ""안의 문자열을 출력해주는 역할을 한다,%d는 부호가있는10진수 형식지정문자이다
	printf("실수형 데이터 %f와 %f 그리고 문자 %c\n", j, k, p);
	//%f는 소수점이있는 실수 형식지정문자이고 %c는 단일문자 형식지정문자이다
}