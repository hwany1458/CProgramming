#include <stdio.h>
int multiply(int a, int b);
void main()
{
	int a, b;
	printf("���� a�� �Է��ϰ� Enter>");
	scanf("%d", &a);
	printf("���� b�� �Է��ϰ� Enter>");
	scanf("%d", &b);
	printf("a*b=%d\n", multiply(a, b));
}

int multiply(int a, int b)
{
	return a * b;
}
