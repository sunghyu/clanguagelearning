#include <stdio.h>   //ǥ��������Լ��� ���Ե� ��������� �����Ѵٴ� ��
void main() {		 //void�� ��ȯ���� ������ �ǹ��ϰ� main()�� ���α׷��� �����ϴ� �����Լ��̴�
	int i_test;      //int�� 4����Ʈ �����������̴�
	short s_test;	 //short�� 2����Ʈ �����������̴�
	char c_test;     //char�� 1����Ʈ �����������̴�
 
	//sizeof()�Լ��� Ư���� �������� ũ�⸦ Ȯ���� �� ����Ѵ�
	printf("char ���� ũ��� %d ����Ʈ\n", sizeof(char));    //sizeof(char)�� 1����Ʈ�̴�
	printf("short ���� ũ��� %d ����Ʈ\n", sizeof(short));  //sizeof(short)�� 2����Ʈ�̴�
	printf("int ���� ũ��� %d ����Ʈ\n", sizeof(int));		 //sizeof(int)�� 4����Ʈ�̴�
	printf("long ���� ũ��� %d ����Ʈ\n", sizeof(long));    //sizeof(long)�� 4����Ʈ�̴�
	printf("double ���� ũ��� %d ����Ʈ\n", sizeof(double)); //sizeof(double)�� 8����Ʈ�̴�

	printf("���� c_test ũ��� %d ����Ʈ\n", sizeof(c_test)); //sizeof(c_test)�� 1����Ʈ�̴�
	printf("���� s_test ũ��� %d ����Ʈ\n", sizeof(s_test)); //sizeof(s_test)�� 2����Ʈ�̴�
	printf("���� i_test ũ��� %d ����Ʈ\n", sizeof(i_test)); //sizeof(i_test)�� 4����Ʈ�̴�

	printf("���� 159784�� ũ��� %d ����Ʈ\n", sizeof(159784));	    //sizeof(159784)�� 4����Ʈ�̴�
	printf("�Ǽ� 3.141592�� ũ��� %d ����Ʈ\n", sizeof(3.141592)); //sizeof(30141592)�� 8����Ʈ�̴�

}