#include <stdio.h>
int main(void)
{
	int i, korea[4], china[4];
	int sum1 = 0, sum2 = 0;
	for (i = 0; i < 4; i += 1)
	{
		printf("���ѹα��� %d���� ������ �Է� �� Enter>", i+1);
		scanf("%d", &korea[i]);
		printf("�߱��� %d���� ������ �Է� �� Enter>", i+1);
		scanf("%d", &china[i]);
		sum1 += korea[i];
		sum2 += china[i];
		printf("�Էµ� ������ :%d  %d\n", korea[i], china[i]);
	}
	printf("�հ� :%d  %d\n", sum1, sum2);
	return 0;
}

