#include <stdio.h>
#include <math.h>

double expression1(double x, double y);
double expression2(double x, double y);
double expression3(double x, double y);
double expression4(double x, double y);

int main(void)
{
	double x, y;
	printf("�Ǽ� x�� �Է��ϰ� Enter>");
	scanf("%lf", &x);
	printf("�Ǽ� y�� �Է��ϰ� Enter>");
	scanf("%lf", &y);
	printf("��1 : %f\n", expression1(x, y));
	printf("��2 : %f\n", expression2(x, y));
	printf("��3 : %f\n", expression3(x, y));
	printf("��4 : %f\n", expression4(x, y));
	return 0;
}

double expression1(double x, double y)
{
	double sum;
	sum = pow(x, 2.) + pow(y, 2.);
	return sum;
}
double expression2(double x, double y)
{
	return pow((x + y), 2.);
}
double expression3(double x, double y)
{
	return pow(fabs(x) + fabs(y), 2.);
}
double expression4(double x, double y)
{
	double sum;
	sum = sqrt(pow(x, 2.) + pow(y, 2.));
	return sum;
}

