#include <stdio.h>
#include <math.h>
void main()
{
	int i = 1;
	while (i != 0)
	{
		printf("0�� �Է��ϸ� �ݺ��� �ߴܵ�\n");
		printf("���� �Է� �� Enter>");
		scanf("%d", &i);
		printf("%d�� ����=%d\n", i, abs(i));
	}
}


