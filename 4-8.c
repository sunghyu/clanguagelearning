#include <stdio.h>	//표준입출력함수가 포함된 헤더파일을 포함한다는 뜻이다
void main() {		//void는 리턴되는 타입이 없음 즉,반환값이 없음을 의미하고 main()은 c언어에서 프로그램이 시작하기 위해 필요한 함수이다
	int muge;

	printf("체중을 입력하세요:");
	scanf("%d", &muge);

	if (muge > 100)  //if 조건이 참이라면 실행문을 실행하고 거짓이면 다음조건으로 넘어간다
		printf("고도비만입니다\n");  //조건이 참일때 실행할 실행문이다
	else if (muge > 80)  //if 조건이 참이라면 실행문을 실행하고 거짓이면 다음조건으로 넘어간다
		printf("비만입니다\n");		//조건이 참일때 실행할 실행문이다
	else if (muge > 60)  //if 조건이 참이라면 실행문을 실행하고 거짓이면 거짓일때 실행할 실행문을 실행시킨다
		printf("표준입니다\n");		//조건이 참일때 실행할 실행문이다
	else 
		printf("미달입니다\n");   //모든조건이 거짓일때 실행할 실행문이다

	printf("당신의 체중은 %d키로입니다.\n", muge); //다중 if-else문이 끝나고 출력된다

}