#include <stdio.h>
#include <math.h>
void main()
{
	double x, y;
	printf("�Ǽ� x�� �Է��ϰ� Enter>");
	scanf("%lf", &x);
	printf("�Ǽ� y�� �Է��ϰ� Enter>");
	scanf("%lf", &y);
	printf("��1 : %f\n", pow(x, 2.) + pow(y, 2.));
	printf("��2 : %f\n", pow((x + y), 2.));
	printf("��3 : %f\n", pow(fabs(x)+fabs(y), 2.));
	printf("��4 : %f\n", sqrt(pow(x, 2.) + pow(y, 2.)));
}

