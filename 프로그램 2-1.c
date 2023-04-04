#include <stdio.h> //#include <stdio.h>는 내가 쓰고있는 코드에 표준입출력함수가 포함된 헤더파일을 포함한다는 뜻이다
void main() {      //void는 리턴되는 타입이 없음을 의미하고 main()은 프로그램이 실행될때 가장먼저 호출되는 함수이다
					//printf()는 모니터를 통하여 글자를 출력하는 기능을 제공하고 출력하고자 하는 문자열을""로 감싸야한다
					//\n은 줄바꿈을 하고싶을때 사용한다 
	                //sizeof()는 메모리의 크기를 확인하는 연산자이고 이때 결과에 대한 반환 값은 Byte 이다	
					//%d는 부호 있는 10진수 형태의 숫자를 입력하는 형식지정문자이다
					
	printf("char 의 크기는 %d 바이트.\n", sizeof(char));  //char는 문자형 자료로  1Byte이다
	printf("unsigned char 의 크기는 %d 바이트입니다.\n", sizeof(unsigned char)); //unsigned char는 부호를 고려하지 않는다는 문자형 자료로  1Byte이다
	printf("short 의 크기는 %d 바이트입니다.\n", sizeof(short)); //short 은 2Byte 정수형 자료이다
	printf("unsigned char 의 크기는 %d 바이트입니다.\n", sizeof(unsigned char)); //unsigned short은 2Byte 정수형자료로 음수를 사용하지 않는다
	printf("int 의 크기는 %d 바이트입니다.\n", sizeof(int)); //int는 4Byte 정수형자료이다 ,int형은 CPU의 레지스터와 동일한 크기를 가지는 타입 으로 정의되어 int형은 CPU가 가장 효율적으로 다룰 수 있는 정수형으로 정의된다 
	printf("unsigned int 의 크기는 %d 바이트입니다.\n", sizeof(unsigned int)); //unsigned int는 4Byte 정수형자료로 음수를 사용하지 않는다
	printf("long 의 크기는 %d 바이트입니다.\n", sizeof(long)); //long는 4Byte 정수형자료이고 long형은 int형과 다르게 그 크기가 4Byte로 고정되어있어 어떤 플랫폼에서나 4Byte이다
	printf("unsigned logn 의 크기는 %d 바이트입니다.\n", sizeof(unsigned long)); //unsigned는 4Byte 정수형자료로 음수를 사용하지 않는다
	printf("float 의 크기는 %d 바이트입니다.\n", sizeof(float)); //float는 실수형자료로 4Byte이다
	printf("double 의 크기는 %d 바이트입니다.\n", sizeof(double)); //double은 실수형자료로 8Byte이다
		//unsigned는 양수만 저장한다 때문에 부호에 바트를 사용하지 않아 저장 가능한 양수의 범위를 두배로 늘린다 signed보다 더 넓은 범위의 양수를 표현할 수 있지만 실제 표현 가능한 개수는 음수를 포함한 signed와 동일하다

	}