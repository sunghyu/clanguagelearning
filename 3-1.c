#include <stdio.h>	//표준입출력함수가 포함된 헤더파일을 포함한다는 뜻이다
void main() {		//void는 리턴되는 타입이 없음을 의미하고 main()은 c언어 프로그램이 실행되기위해 필요한 c언어 시작함수다
	int a;			//int는 4byte 정수형변수 선언이다
	char ch;		//char는 1byte 문자형변수 선언이다
	char str[50] = "단순 대입연산자입니다.\n"; //char [50]는 1byte 문자형변수를 50개 모아두었다라는 의미로 50byte문자열이다 c언어에서는 문자열변수가 따로없어 char[]로 문자열을 표현한다

	a = 150;
	ch = 'A';		//''안에는 단일문자 ""안에는 문자열을 넣어 쓴다

	printf("변수 a의 값은 %d ch 의 값은 %c 입니다\n", a, ch); //""안의 문자열을 출력한다,%d는 부호가있는 10진수형태의 형식지정문자이다
	printf("배열 str의 값은 %s", str);						  //%c는 단일문자의 형식지정문자이다,%s는 문자열의 형식지정문자이다
}															  //""안의 형식지정문자와 변수는 개수 및 순서를 일치시켜주어야한다