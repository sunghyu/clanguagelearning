#include <stdio.h>	// 표준입출력함수가포함된헤더파일을포함한다는뜻이다
void main() {		//void는 리턴되는 타입이 없음 즉,반환값이 없음을 의미하고 main()은 c언어에서 프로그램이 시작하기 위해 필요한 함수이다
	int n, sum, nu1, nu2;	//n,sum,nu1,nu2를 정수형변수로 선언하였다

	printf("첫번째 수를 입력하세요:");
	scanf("%d", &nu1);
	printf("두번째 수를 입력하세요:");
	scanf("%d", &nu2);

	sum = 0;	//sum의 초기값을 0으로 선언
	for (n = nu1; n <= nu2; n++) //n= nu1~nu2 일동안 반복수행한다
		sum += n;	//sum = sum + n 이라는 뜻이다

	printf("%d부터 %d까지의 합은 %d입니다\n", nu1, nu2, sum);	//""안의 형식지정문자와 ""뒤의 변수들의 개수 및 순서가 일치하여야한다
}