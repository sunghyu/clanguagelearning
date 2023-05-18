#include <stdio.h>	//표준입출력함수가 포함된 헤더파일을 포함한다는 뜻이다
void main() {	//void는 리턴되는 타입이 없음 즉,반환값이 없음을 의미하고 main()은 c언어에서 프로그램이 시작하기 위해 필요한 함수이다
	int num1, num2, num3, min, n;

	printf("첫번째 수를 입력하세요:"); //""안의 문자열을 출력시킨다
	scanf("%d", &num1);	//%d에 입력된 수를 num1의 주소값에 저장한다
	printf("두번째 수를 입력하세요:");
	scanf("%d", &num2);	//%d에 입력된 수를 num2의 주소값에 저장한다
	printf("세번째 수를 입력하세요:");
	scanf("%d", &num3);	//%d에 입력된 수를 num3의 주소값에 저장한다

	min = (num1 < num2) ? num1 : num2; //num1<num2가 참이면 min=num1, 거짓이면 min=num2 이다
	min = (min < num3) ? min : num3; //min<num3가 참이면 min=min, 거짓이면 min=num3 이다
	 
	printf("%d, %d, %d 의 공약수는", num1, num2, num3);	//형식지정문자와 변수의 개수및 순서가 일치하여야 한다

	for (n = 1; n <= min; n++) {	//n=1~min 일동안 실행문을 반복
		if ((num1 % n == 0) && (num2 % n == 0) && (num3 % n == 0)) //조건식이 참이면 실행문을 실행시키고 거짓이면 if문을 끝낸다
			printf("%d\t", n);
	}
	printf("입니다\n");
}