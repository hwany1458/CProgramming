#include <stdio.h>
void main()
{
	int i;
	for (i = 1; i < 14; i++) {
		if (i == 3 || i == 6 || i == 9 || i == 13) {
			printf(" �ڼ�");
			continue;
		}
		printf(" %d", i);
	}
	printf("\n \n");
}