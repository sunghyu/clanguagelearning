#include <stdio.h>	//표준입출력함수가 포함된 헤더파아일을 포함한다는 뜻이다
void main() {
	int ch1, ch2, ch3;	

	printf("세개의 글자를 입력하세요\n");
	scanf("%c%c%c", &ch1, &ch2, &ch3);
	printf("입력하신 글자는 %c와 %c와 %c입니다\n", ch1, ch2, ch3);
}