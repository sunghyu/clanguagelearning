#include <stdio.h>	// 표준입출력함수가포함된헤더파일을포함한다는뜻이다
void main() {	//void는 리턴되는 타입이 없음 즉,반환값이 없음을 의미하고 main()은 c언어에서 프로그램이 시작하기 위해 필요한 함수이다
	int num;	//num을 정수형변수로 선언함

	printf("1~3 사이의 숫자를 입력하세요:");
	scanf("%d", &num);

	switch (num) {	/*switch문은:(콜론)을 이용하여 위치를 나타내고 값을 이용하여 그 위치로 간다 만일 만족하는 값이 없다면 default:로 빠져
						실행문을 실행하고 break; 문을 만나면 switch문을 끝낸다 만일 break; 문이 없다면 다음 실행문까지 실행하게된다*/
	case 1:			//값이 1일때 이위치로 이동한다 
		printf("숫자 1을 입력하였습니다.\n");	//case 1;이 실행할 실행문이다
		break;	//break;문이 없다면 다음 실행문까지 실행하게된다
	case 2:
		printf("숫자 2를 입력하였습니다.\n");
		break;
	case 3:
		printf("숫자 3을 입력하였습니다.\n");
		break;
	default:
		printf("1~3사이의 숫자가 아닌 다른 수가 입력되었습니다.\n"); 
	}
}