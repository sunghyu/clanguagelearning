#include <stdio.h>   // 표준입출력함수가포함된헤더파일을포함한다는뜻이다
void main() {		 //void는 리턴되는 타입이 없음 즉,반환값이 없음을 의미하고 main()은 c언어에서 프로그램이 시작하기 위해 필요한 함수이다
	int num;		// num 과 nu 를 정수형변수로 선언함
	int nu;

	printf("반복할 횟수를 입력하세요:");  //""안의 문자열을 출력해주는 함수이다
	scanf("%d", &nu);   //scanf함수가 구동되는 방식상 변수의 주소가 필요하므로 변수의 주소를 알려주는 &를 변수 앞에 써준다
	num = 0;  //num의 초기값을 0으로 설정하였다

	for (num = 0; num < nu; num++)  //조건식이 참이면 실행문을 반복수행한다 
		printf("for문을 이용하여 반복 실행됩니다\n"); //num=0~nu-1 일동안 수행할 실행문이다
}