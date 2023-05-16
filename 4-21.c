#include <stdio.h>	//표준입출력함수가 포함된 헤더파일을 포함한다는 뜻이다	
void main() {		//void는 리턴되는 타입이 없음 즉,반환값이 없음을 의미하고 main()은 c언어에서 프로그램이 시작하기 위해 필요한 함수이다
	int n, sum, nu;		//n,sum,nu를 정수형 변수로 선언하였다

	printf("수를 입력하세요:");	//printf는 ""안의 문자열을 출력해준다
	scanf("%d", &nu);			//scanf는 입력함수로 %d에 입력된 수를 nu의 주소값에 저장한다
	
	sum = 0;		//sum의 초기값을 0으로 지정

	for (n = 1; n <= nu; n++) {	//n=1~nu 일동안 반복한다
		sum = sum + n;			//sum + n 을 sum에 대입한다
	}
	printf("1부터 %d까지의 합은 %d입니다\n", nu, sum);	//""안의 문자열을 출력한다 
}