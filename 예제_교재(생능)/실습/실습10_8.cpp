#include <stdio.h>
double division(double a, double b);
void main()
{
	double a, b;
	printf("�Ǽ� a�� �Է��ϰ� Enter>");
	scanf("%lf", &a);
	printf("�Ǽ� b�� �Է��ϰ� Enter>");
	scanf("%lf", &b);
	printf("a/b=%f\n", division(a, b));
}

double division(double a, double b)
{
	return a / b;
}


