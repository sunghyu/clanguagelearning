#include <stdio.h>	//ǥ��������Լ��� ���Ե� ��������� �����Ѵٴ� ���̴�
void main() {//void�� ���ϵǴ� Ÿ���� ���� ��,��ȯ���� ������ �ǹ��ϰ� main()�� c���� ���α׷��� �����ϱ� ���� �ʿ��� �Լ��̴�
	int num, n;

	printf("���� �Է��ϼ���:");
	scanf("%d", &num); //%d �� �Էµ� ���� num�� �ּҰ��� �����Ѵ�

	for (n = 2; n <= num; n++) {	//n=2~num �ϵ��� �ݺ��Ѵ�
		if (num % n == 0)  //���ǽ��� ���̸� ���๮�� �����Ű�� �����̸� ���๮�� �����Ű�� �ʴ´�
			break; //���ǽ��� ���̸� for���� �����Ų��
	}
	if (n == num) //���ǽ��� ���̸� ���๮�� �����Ų�� 
		printf("%d �� �Ҽ��Դϴ�\n", num);
	else //�������� �����̸� ���๮�� �����Ų��
		printf("%d �� �Ҽ��� �ƴմϴ�\n", num);
}