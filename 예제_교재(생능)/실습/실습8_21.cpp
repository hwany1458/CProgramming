#include <stdio.h>
void main()
{
	double n, i, j;
	double sum;
	printf("1���� n������ n!���\n");
	printf("���� n �Է� :");
	scanf("%lf", &n);
	for (j = 1.; j <= n; j += 1.)
	{
		sum = 1.;
		for (i = 1.; i <= j; i += 1.)
			sum *= i;
		printf("%2.f!=%14.f\n", j, sum);
	}
}

