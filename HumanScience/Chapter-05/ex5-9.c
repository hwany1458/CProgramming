#include <stdio.h>
void main()
{
	int n = 1;
	int i, j, k;
	for (i = 0; i < 3; i++) {
		printf("\n i-���\n");
		for (j = 0; j < 26; j++) {
			printf("j-���\n");
			for (k = 0; k < 2; k++) {
				printf("k-���");
				printf(" ȸ��= %d\n", n++);
			}
		}
	}
}