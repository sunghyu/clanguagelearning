#include <stdio.h> //ǥ��������Լ��� ���Ե� ��������� �����Ѵٴ� ���̴�
void main() {		//void�� ���ϵǴ� Ÿ���� ������ �ǹ��ϰ� main()�� ���α׷� ���۽�Ű�� �Լ��̴�
	int age, muge;	// age,muge�� ������������ ����

	printf("���̸� �Է��ϼ���\n");	//""�ȿ��ִ� ���ڿ��� ����Ϳ� ���,\n�� �ٹٲ� ���ɾ�
	scanf("%d", &age);				//%d�� ��ȣ���ִ� 10���� �������������̴�,&������ ������ �ּҸ� ����Ų��
	
	/*scanf()ǥ���Է��Լ��� ��ǻ�Ͱ� Ű���带 �̿��Ͽ� ������κ��� ������ �Է��� �޴°�
	�Է¹��� ���ڸ� �޸𸮿� �����ϱ� ���ؼ��� �ݵ�� ������ ������ �ʿ�
	*/
	printf("ü���� �Է��ϼ���\n");
	scanf("%d", &muge); //scanf()�Լ��ǻ�������� scanf("%������������",&������); �̴�

	printf("���̴� %d ó���� %d �Դϴ�\n", age, muge); //�������������� ���� �� ������ ������ ���� �� ������ ��ġ�Ͽ����Ѵ�
}