#include <stdio.h>  //표준입출력함수가 포함된 헤더파일을 포함한다는 뜻이다
void main() {		//void는 리턴되는 타입이 없음을 의미하고 생략할 수도 있다 main()은 프로그램이 실행될때 ㄱ장 먼저 호출되는 함수이다
	int k;			//k를 정수형변수로 선언
	k = 172;

	printf("10진수 %5d의 8진수는 %5o, 16진수는 %5x 입니다\n",k, k, k);
	//%5d는 정수 데이터를 10진수 형태로 5칸에 맞추어출력한다는 의미
	//%5o은 정수 데이터를 8진수 형태로 5칸에 맞추어 출력한다는 의미
	//%5x는 정수 데이터를 16진수 형태로 5칸에 맞추어 출력한다는 의미(소문자)
}