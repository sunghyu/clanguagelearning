#include <stdio.h>	// ǥ��������Լ������Ե���������������Ѵٴ¶��̴�
void main() {		//void�� ���ϵǴ� Ÿ���� ���� ��,��ȯ���� ������ �ǹ��ϰ� main()�� c���� ���α׷��� �����ϱ� ���� �ʿ��� �Լ��̴�
	int sum, nu, num;	//sum,nu,num �� ������������ ������	

	sum = 0; //sum�� �ʱⰪ�� 0���� ����
	num = 1; //num�� �ʱⰪ�� 1�� ����	

	printf("���� �Է��ϼ���:");	//����Լ��� ""���� ���ڿ��� ����Ѵ�
	scanf("%d", & nu);	//�Է��Լ��� %�� �Էµ� ���� nu�� �ּҰ��� �����Ѵ�

	while (1) {		//while ����()���� ���ǽ��� ���ϵ��� �ݺ������Ѵ� 
					//���ǽĿ� 1(��) �� �����Ƿ� ���ѷ����� �ϰԵȴ�. ���ѷ����� ���鶧���� ���ѷ����� �� �� �ִ� ���๮�� ���� ����°� ����
		sum += num;	//sum = sum + num
		num++;		//num = num + 1 

		if (num > nu) break; //if���� ���ǽ��� ���϶� ���ѷ����� ���� ���ɹ��� ���´�
	}
	printf("1���� %d������ ���� %d�Դϴ�\n", nu, sum); //""���� �����������ڿ� ""���� �������� ���� �� ������ ��ġ���Ѿ��Ѵ�
}