#include <stdio.h> //표준 입출력 함수가 포함된 헤더파일을 포함한다는 뜻이다
void main() {		//void는 리턴되는 타입이 없음을 의미하고 main()은 프로그램 시작함수이다
	int k1, k2;		//k1,k2를 정수형변수로 선언

	printf("두개의 숫자를 입력하세요\n");	//""안에있는 문자열을 출력
	scanf("%d%d", &k1, &k2); //숫자를 입력 받아 변수 k1,k2에 저장
	//scanf()함수는 값을 입력하려면 주소가 필요하기때문에 해당 변수의 주소를 가리키는 역할을 하는&를 붙여주어야한다
	printf("입력하신 숫자는 %d 와%d 입니다 \n", k1, k2);//%d는 부호가있는 10진수 형식지정문자이다
}