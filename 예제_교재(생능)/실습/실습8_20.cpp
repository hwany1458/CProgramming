#include <stdio.h>
void main()
{
	int n, i, j;
	int sum;
	printf("1���� n������ �������\n");
	printf("���� n �Է� :");
	scanf("%d", &n);
	for (j = 1; j <= n; j += 1)
	{
		sum = 0;
		for (i = 1; i <= j; i += 1)
			sum += i;
		printf("1���� %2d���� ��=%4d\n", j, sum);
	}
}
