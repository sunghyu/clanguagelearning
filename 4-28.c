#include <stdio.h>// 표준입출력함수가포함된헤더파일을포함한다는뜻이다
void main() {//void는 리턴되는 타입이 없음 즉,반환값이 없음을 의미하고 main()은 c언어에서 프로그램이 시작하기 위해 필요한 함수이다
	int n, num, bae;	
	int count = 0;	// count를 정수형변수로 선언함과 동시에 초기값을 0으로 지정하였다

	printf("수를 입력하세요:"); 
	scanf("%d", &num);
	printf("배수를 입력하세요:");
	scanf("%d", &bae);

	printf("1부터 %d까지의 수 중 %d의 배수는\n", num, bae);
	for (n = 1; n <= num; n++) {	//n=1~num 일동안 반복된다
		if (n % bae == 0) {			//조건식이 참이면 실행문을 실행시키고 아니면 if문을 종료시킨다
			printf("%d\t", n);		//조건식이 참이면 실행할 실행문 블록이다
			count++;				//실행문을 실행한 후에 +1을 해준다
		}
	}
	printf("이며 총 %d개 입니다\n", count);
}