#include <stdio.h>

void main()
{
	// Ű����κ��� ������ �Է¹޾�, ������(���)�� ���
	printf("(����� ���ϴ� ��������) ����(1~9)�� �Է��ϼ��� ");
	int num;
	scanf_s("%d", &num);

	//for(�ʱ��; ���ǽ�; ������) { .. }
	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", num, i, num*i);
	}

	// ���丮�� ���ϱ�
	int fac = 1;
	for (int i = num; i > 0; i--)
	{
		fac = fac * i;  // (=) fac *= i;
	}
	printf("%d ���丮���� %d �Դϴ�\n", num, fac);

	// �Է¹��� ������ �������� ���ϼ���  n*(n-1)/2
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		sum = sum + i;  // (=) sum += i;
	}
	printf("%d������ �������� %d�Դϴ�\n", num, sum);

	// �Է¹��� ������ Ȧ������ �������� ���ϼ���  
	// (1) ���ǹ��Ἥ (2) 2�� ���Ѵ�
	// (1���)
	int oddsum = 0;
	for (int i = 1; i <= num; i++)
	{
		if ((i%2) == 1) {
			oddsum = oddsum + i;  // (=) oddsum += i;
		}
	}
	printf("1��° ���]%d������ Ȧ�� �������� %d�Դϴ�\n", num, oddsum);

	// (2���)
	int oddsum2 = 0;
	for (int i = 1; i <= num; i+=2)
	{
		oddsum2 = oddsum2 + i;  // (=) oddsum2 += i;
	}
	printf("2��° ���] %d������ �Ǽ� �������� %d�Դϴ�\n", num, oddsum2);

	// 2���� ����(a, b)�� �Է� �޾�, �� �� ������ �������� ���ϼ���
	// ����� ���� ( a>b, a<b )
	int a, b;
	printf("2�� ������ �Է��ϼ��� ");
	scanf_s("%d %d", &a, &b);
	//(1���) 
	// a<b : a���� b���� ������������ �ݺ�
	// a>b : a���� b���� ������������ �ݺ�
	// a=b :
	int s1 = 0;
	if (a <= b)  // a<b �Ǵ� a=b �϶�
	{
		for (int i = a; i <= b; i++)
		{
			s1 = s1 + i;
		}
	}
	else  // a>b �϶�
	{ 
		for (int i = a; i >= b; i--)
		{
			s1 = s1 + i;
		}
	}
	printf("(1�����) %d���� %d������ �������� %d�Դϴ�\n", a, b, s1);


	// (2��° ���)
	// a<b : �״��
	// a>b : a�� b�� �ٲ㼭, �����
	int s2 = 0;
	/*
	if (a <= b) {}
	else 
	*/
	if (a > b)
	{
		int temp;
		temp = b;
		b = a;
		a = temp;
	}
	for (int i = a; i <= b; i++)
	{
		s2 = s2 + i;
	}
	printf("(2�����) %d���� %d������ �������� %d�Դϴ�\n", a, b, s2);
}