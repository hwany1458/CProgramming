#include <stdio.h>
#include <math.h>
void main()
{
	double x, y;
	printf("�Ǽ� x�� �Է��ϰ� Enter>");
	scanf("%lf", &x);
	printf("�Ǽ� y�� �Է��ϰ� Enter>");
	scanf("%lf", &y);
	printf("%f�� %f��=%f\n", x, y, pow(x, y));
	printf("%f�� %f��=%f\n", y, x, pow(y, x));
}


