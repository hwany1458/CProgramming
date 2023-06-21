#include <stdio.h>
#include <math.h>

// �Լ����� ���� 
// ������Ÿ�� �Լ���(�Ű�����);
int YongHwan(int a);
int TaeHee(int i);
int GunHee(int a, int b);

// �Լ�����, �Լ�����, �Լ�ȣ���� �ϼ���
// 4���� ������ �Է¹޾�, ���� ����ϰ� ��ȯ(A,B,C,D,F)�ϴ� �Լ�
// �Է� : �߰�, �⸻, �⼮, ���� ���� (���� 4��)
// ��� : ���� char

void main()
{
	printf("2�� �Ǽ��� �Է��ϼ��� ");
	double x, y;

	scanf_s("%lf %lf", &x, &y);

	// ��1
	printf("%lf, %lf\n", x, y);
	printf("��1 =  %lf\n", pow(x, 2.0) + pow(y, 2.0));
	printf("��2 =  %lf\n", pow((x+y), 2.0));
	// ��3
	// ��4

	printf("������ �Է��ϼ��� ");
	int f;
	scanf_s("%d", &f);

	printf("����� %d�Դϴ�\n", YongHwan(f));
	printf("���밪 ����� %d�Դϴ�\n", TaeHee(f));

	// �ݺ����� �Ἥ, 1~100 ������ ������ ����ϼ���.
	for (int i = 1; i <= 100; i++)
	{
		printf("%d�� ������ %d�Դϴ�\n", i, YongHwan(i));
	}

	// ���� ȣ��
	
	printf("���� ����� %d�Դϴ�\n", GunHee(100, 200)	);
}

// �Լ�����
// ������Ÿ�� �Լ���(�Ű�����) { ó���ϴ� ���� }
// �Լ��� �Է�, ó���κ�, ����� ���µ�
// �Է��� �Ű����� ��ġ��,
// ó���κ��� ó���ϴ� ���� ��ġ��,
// ����� ������Ÿ�� ��ġ��
int YongHwan(int a)
{
	// (1) ������ ���
	int res;
	res = a * a;

	// (2) ����� ��ȯ
	return res; // ��ȯ�ϴ� ���
}

int TaeHee(int i)
{
	// ���밪�� ���
	int res;
	if (i >= 0)
	{
		res = i;
	}
	else
	{
		res = -i;
	}

	// ��� ��ȯ
	return res;
}

int GunHee(int a, int b)
{
	return (a + b);
}