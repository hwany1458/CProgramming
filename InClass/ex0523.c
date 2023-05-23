#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define PI 3.14159265
double rad2deg(double radian);
double deg2rad(double degree);

void main0523()
{
	const double p = 3.14159265;
	double res1, res2;
	res1 = sin(90.0);
	res2 = sin(deg2rad(90.0));
	printf("%f  %f\n", res1, res2);


	printf("\n\n");
	for (double i = 0.0; i <= 360.0; i += 45.0)
	{
		printf("%f�� (%f����) sin����%f\n", i, deg2rad(i), sin(deg2rad(i)));
	}

	printf("\n%f\n", sin(1.570796));
	printf("---------------\n\n");

	// ����(������ ��) �̴´�

	int resInt;
	srand(time(NULL));

	// �ζǹ�ȣ �̱� --- ���߿� ���� ���� (�ߺ���ȣ�� ������ �ʰ�)
	for (int i = 1; i < 7; i++)
	{
		resInt = rand();
		printf("%d��° ���� ���� %d\n", i, (resInt%45)+1);
	}

	// �ֻ��� 2�� ������
	int dice1, dice2;
	dice1 = (rand() % 6) + 1;  // ù��° �ֻ���
	dice2 = (rand() % 6) + 1;  // �ι�° �ֻ���
	
	printf("\n1st=%d, 2nd=%d, ���ؼ� %dĭ ����\n", dice1, dice2, dice1 + dice2);
}


// ����� ���� �Լ� (user defined function)
// ���� �ȹ����
double rad2deg(double radian)
{
	return radian * 180 / PI;
}
double deg2rad(double degree)
{
	return degree * PI / 180;
}