#include <stdio.h>	//ǥ��������Լ��� ���Ե� ��������� �����Ѵٴ� ���̴�
void main() {	//void�� ���ϵǴ� Ÿ���� ���� ��,��ȯ���� ������ �ǹ��ϰ� main()�� c���� ���α׷��� �����ϱ� ���� �ʿ��� �Լ��̴�
	int num1, num2, num3, min, n;

	printf("ù��° ���� �Է��ϼ���:"); 
	scanf("%d", &num1);
	printf("�ι�° ���� �Է��ϼ���:");
	scanf("%d", &num2);
	printf("����° ���� �Է��ϼ���:");
	scanf("%d", &num3);

	min = (num1 < num2) ? num1 : num2; //num1<num2 �� ���̸� min=num1, �����̸� min=num2 �̴�
	min = (min < num3) ? min : num3;  //min<num3 �� ���̸� min=min, �����̸� min=num3 �̴�

	printf("%d, %d, %d �� �ִ�������", num1, num2, num3); 

	for (n = min; n > 0; n--) { //n=min~1 �ϵ��� �ݺ�
		if ((num1 % n == 0) && (num2 % n == 0) && (num3 % n == 0)) 
			break; //���ǽ��� ���̸� ����
	}
	printf("%d �Դϴ�\n", n);
}



