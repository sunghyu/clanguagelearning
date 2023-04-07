#include <stdio.h> //표준입출력함수가 포함된 헤더파일을 가지고온다는 명령어
void main() {		//void는 리턴되는 타입이 없음을 의미하고 main()은 c언어 프로그램이 실행되기위해 필요한 함수이다
	char name[20]; //20byte짜리 문자열변수선언
	char hob[50];	//50byte짜리 문자열변수선언
	int age;

	printf("이름을 입력하세요\n");//""안의 문자열을 출력해준다
	scanf_s("%s", name);		  //문자열 벼누는 &를 쓰지않아도 된다

	printf("나이을 입력하세요\n");
	scanf_s("%d", &age);

	printf("취미를 입력하세요\n");
	scanf_s("%s", hob);

	printf("%d 살의 %s님의 취미는 %s 입니다", age, name, hob);	//""안의 형식지정문자의 수와 순서,변수의 수와 순서가 일치해야한다

}