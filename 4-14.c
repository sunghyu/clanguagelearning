#include <stdio.h>	//ǥ��������Լ��� ���Ե� ��������� �����Ѵٴ� ���̴�
void main() {		//void�� ���ϵǴ� Ÿ���� ���� ��,��ȯ���� ������ �ǹ��ϰ� main()�� c���� ���α׷��� �����ϱ� ���� �ʿ��� �Լ��̴�
	int num, nu;    //num�� nu�� ������������ �����Ͽ���

	printf("�ݺ��� Ƚ���� �Է��ϼ���:");  //����Լ��� ""���� ���ڿ��� ����Ѵ�
	scanf("%d", &nu);					  //�Է��Լ��� 10���� ������������%d�� �Էµ� ����  nu�� �ּҰ��� �����Ѵ�
	num = 0;

	do {	//do-while���� �ѹ� ���๮�� �����ϰ� �״����� ���ǽ��� �˻��Ѵ�
		printf("do-while ���� �̿��Ͽ� �ݺ� ����˴ϴ�\n"); 
		num++;
	} while (num < nu);  //���ǽ� ������ ; �� �ٴ´�
}