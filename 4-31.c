#include <stdio.h>	//표준입출력함수가 포함된 헤더파일을 포함한다는 뜻이다
void main() {	//void는 리턴되는 타입이 없음 즉,반환값이 없음을 의미하고 main()은 c언어에서 프로그램이 시작하기 위해 필요한 함수이다
	int num1, num2;	//num1,num2,min,n 을 정수형변수로 선언
	int min, n;

	printf("첫번째 수를 입력하세요:");	
	scanf("%d", &num1);
	printf("두번째 수를 입력하세요:");
	scanf("%d", &num2);

	min = (num1 < num2) ? num1 : num2; //3항조건으로 num1<num2 이 참이면 min=num1 , num1<num2 이 거짓이면 min=num2 이다 

	printf("%d 와 %d의 공약수는", num1, num2); //형식지정문자와 변수의 개수 및 순서가 일치하여야하다

	for (n = 1; n <= min; n++) {	//n=1~min  일동안 실행문 반복
		if ((num1 % n == 0) && (num2 % n == 0)) //조건식이 참이면 실행문을 실행시키고 거짓이면 if문을 빠져나간다
			printf("%d\t", n);
	}
	printf("입니다\n");


}