#include <stdio.h>

// �Լ�����
int func1(int a);
int func2();

int a = 100;  // ��������

int main()
{
	//int a = 100;  // ��������
	printf("%d\n", a);
	
	//printf("%d\n", func1(a));	// ���������϶�, �Լ�ȣ��
	printf("%d\n", func2());	// ���������϶�, �Լ�ȣ��

	printf("%d\n", a);


	// �迭 (������ ������Ÿ���� ��� ����)
	int x = 10;	// x��� �̸����� ������ ������ ���� 
				// �ʱⰪ���� 10�� �Ҵ�

	int y[3] = {10, 20, 30};
				// y��� �̸����� ������ �迭 ������ ���� 
				// �迭 ũ�Ⱑ 3
				// �ʱⰪ �Ҵ���??  {}
	
	printf("x=%d\n", x);
	printf("�迭y�� 2��° ������=%d\n", y[1]);

	printf("�迭 ���θ� ����Ϸ���\n");  // �ݺ���
	for (int i = 0; i < 3; i++)
	{
		printf("%d  ", y[i]);
	}

	return 0;
}


// �Լ�����
int func1(int a)  // �Ű����� (��������)
{
	printf("%d\n", a);
	a = a + 10;   // (=) a += 10;
	return a;
}

int func2()
{
	printf("%d\n", a);
	a = a + 10;
	return a;
}