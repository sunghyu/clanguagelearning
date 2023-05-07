#include <stdio.h>   //표준입출력함수가 포함된 헤더파일을 포함한다는 뜻
void main() {		 //void는 반환값이 없음을 의미하고 main()은 프로그램을 시작하는 시작함수이다
	int i_test;      //int는 4바이트 정수형변수이다
	short s_test;	 //short는 2바이트 정수형변수이다
	char c_test;     //char는 1바이트 문자형변수이다
 
	//sizeof()함수는 특정한 변수형의 크기를 확인할 때 사용한다
	printf("char 형의 크기는 %d 바이트\n", sizeof(char));    //sizeof(char)는 1바이트이다
	printf("short 형의 크기는 %d 바이트\n", sizeof(short));  //sizeof(short)는 2바이트이다
	printf("int 형의 크기는 %d 바이트\n", sizeof(int));		 //sizeof(int)는 4바이트이다
	printf("long 형의 크기는 %d 바이트\n", sizeof(long));    //sizeof(long)는 4바이트이다
	printf("double 형의 크기는 %d 바이트\n", sizeof(double)); //sizeof(double)는 8바이트이다

	printf("변수 c_test 크기는 %d 바이트\n", sizeof(c_test)); //sizeof(c_test)는 1바이트이다
	printf("변수 s_test 크기는 %d 바이트\n", sizeof(s_test)); //sizeof(s_test)는 2바이트이다
	printf("변수 i_test 크기는 %d 바이트\n", sizeof(i_test)); //sizeof(i_test)는 4바이트이다

	printf("정수 159784의 크기는 %d 바이트\n", sizeof(159784));	    //sizeof(159784)는 4바이트이다
	printf("실수 3.141592의 크기는 %d 바이트\n", sizeof(3.141592)); //sizeof(30141592)는 8바이트이다

}