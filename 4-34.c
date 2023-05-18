#include <stdio.h>	//표준입출력함수가 포함된 헤더파일을 포함한다는 뜻이다
void main() { //void는 리턴되는 타입이 없음 즉,반환값이 없음을 의미하고 main()은 c언어에서 프로그램이 시작하기 위해 필요한 함수이다
	int num, n;

	printf("수를 입력하세요:");
	scanf("%d", &num);	//입력함수로 %d에 입려된 수를 num의 주소값에 저장한다

	for (n = 2; n <= num; n++){ //n=2~num 일동안 반복수행	
		if (num % n == 0)	
			break;	//조건식이 참이면 for문 종료
	}
	if (n < num) printf("%d는 소수가 아닙니다\n", num);	//조건식이 참이면 실행할 실행문
	else printf("%d는 소수입니다\n", num);	//거짓이면 실행할 실행문
}