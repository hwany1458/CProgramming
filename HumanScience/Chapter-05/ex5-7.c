#include <stdio.h>
void main()
{
	char a = '0';
	int i = 0;
	while (a) {
		if (a < '9') {
			printf("\'0\' = ASCII ���� %d ���� %c", a, a);
			printf(" �ݺ��� %d \n", ++i);
		}
		else break;
	}
}