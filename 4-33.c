#include <stdio.h>	//표준입출력함수가 포함된 헤더파일을 포함한다는 뜻이다
void main() {	//void는 리턴되는 타입이 없음 즉,반환값이 없음을 의미하고 main()은 c언어에서 프로그램이 시작하기 위해 필요한 함수이다
	int num1, num2, num3, min, n;

	printf("첫번째 수를 입력하세요:"); 
	scanf("%d", &num1);
	printf("두번째 수를 입력하세요:");
	scanf("%d", &num2);
	printf("세번째 수를 입력하세요:");
	scanf("%d", &num3);

	min = (num1 < num2) ? num1 : num2; //num1<num2 이 참이면 min=num1, 거짓이면 min=num2 이다
	min = (min < num3) ? min : num3;  //min<num3 이 참이면 min=min, 거짓이면 min=num3 이다

	printf("%d, %d, %d 의 최대공약수는", num1, num2, num3); 

	for (n = min; n > 0; n--) { //n=min~1 일동안 반복
		if ((num1 % n == 0) && (num2 % n == 0) && (num3 % n == 0)) 
			break; //조건식이 참이면 종료
	}
	printf("%d 입니다\n", n);
}



