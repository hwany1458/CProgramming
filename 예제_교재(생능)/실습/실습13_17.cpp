#include <stdio.h>
int main(void)
{
	char nation[4][20];
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("�����̸��� �ѱ۷� �Է��ϰ� Enter>");
		gets(nation[i]);
	}
	for (i = 3; i >= 0; i--)
		printf("%s\n", nation[i]);
	return 0;
}

