#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
	int i;
	for (i = 1; i <= 9; i++)
	{
		system("cls");
		printf("%d*%d=%d\n", 1, i, 1 * i);
		printf("�ƹ�Ű�� �����ÿ�.\n");
		getch();
	}
	return 0;
}
