#include <stdio.h> //#include <stdio.h>�� ���� �����ִ� �ڵ忡 ǥ��������Լ��� ���Ե� ��������� �����Ѵٴ� ���̴�
void main() {      //void�� ���ϵǴ� Ÿ���� ������ �ǹ��ϰ� main()�� ���α׷��� ����ɶ� ������� ȣ��Ǵ� �Լ��̴�
					//printf()�� ����͸� ���Ͽ� ���ڸ� ����ϴ� ����� �����ϰ� ����ϰ��� �ϴ� ���ڿ���""�� ���ξ��Ѵ�
					//\n�� �ٹٲ��� �ϰ������ ����Ѵ� 
	                //sizeof()�� �޸��� ũ�⸦ Ȯ���ϴ� �������̰� �̶� ����� ���� ��ȯ ���� Byte �̴�	
					//%d�� ��ȣ �ִ� 10���� ������ ���ڸ� �Է��ϴ� �������������̴�
					
	printf("char �� ũ��� %d ����Ʈ.\n", sizeof(char));  //char�� ������ �ڷ��  1Byte�̴�
	printf("unsigned char �� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof(unsigned char)); //unsigned char�� ��ȣ�� ������� �ʴ´ٴ� ������ �ڷ��  1Byte�̴�
	printf("short �� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof(short)); //short �� 2Byte ������ �ڷ��̴�
	printf("unsigned char �� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof(unsigned char)); //unsigned short�� 2Byte �������ڷ�� ������ ������� �ʴ´�
	printf("int �� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof(int)); //int�� 4Byte �������ڷ��̴� ,int���� CPU�� �������Ϳ� ������ ũ�⸦ ������ Ÿ�� ���� ���ǵǾ� int���� CPU�� ���� ȿ�������� �ٷ� �� �ִ� ���������� ���ǵȴ� 
	printf("unsigned int �� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof(unsigned int)); //unsigned int�� 4Byte �������ڷ�� ������ ������� �ʴ´�
	printf("long �� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof(long)); //long�� 4Byte �������ڷ��̰� long���� int���� �ٸ��� �� ũ�Ⱑ 4Byte�� �����Ǿ��־� � �÷��������� 4Byte�̴�
	printf("unsigned logn �� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof(unsigned long)); //unsigned�� 4Byte �������ڷ�� ������ ������� �ʴ´�
	printf("float �� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof(float)); //float�� �Ǽ����ڷ�� 4Byte�̴�
	printf("double �� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof(double)); //double�� �Ǽ����ڷ�� 8Byte�̴�
		//unsigned�� ����� �����Ѵ� ������ ��ȣ�� ��Ʈ�� ������� �ʾ� ���� ������ ����� ������ �ι�� �ø��� signed���� �� ���� ������ ����� ǥ���� �� ������ ���� ǥ�� ������ ������ ������ ������ signed�� �����ϴ�

	}