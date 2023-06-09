#include <stdio.h>	// 표준입출력함수가포함된헤더파일을포함한다는뜻이다
void main() {		//void는 리턴되는 타입이 없음 즉,반환값이 없음을 의미하고 main()은 c언어에서 프로그램이 시작하기 위해 필요한 함수이다
	int sum, nu, num;	//sum,nu,num을 정수형변수로 선언

	sum = 0;	//sum의 초기값을 0으로 지정
	num = 1;	//num의 초기값을 1로 지정
	
	printf("수를 입력하세요:");
	scanf("%d", &nu);

loop:	//goto가 이동시킬 수 있는 지정된 레이블이다 레이블은 변수명과 동일한 형식의 이름으로 작성하고,이름 뒤에는 :을 붙여야한다 
	if (num > nu) //단순 if문으로 조건이 참이면 실행하고 거짓이면 if문을 끝낸다
		goto end;	//지정된 레이블로 무조건 이동하라는 분기문이다

	sum += num;	
	num++;

	goto loop; //지정된 레이블로 무조건 이동하라는 분기문이고 loop레이블로 이동시킨다

end://goto가 이동시킬 수 있는 지정된 레이블이다
	printf("1부터 %d까지의 합은 %d 입니다\n", nu, sum);
}