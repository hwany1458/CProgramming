#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch[10];
	int i;
	for (i = 0; i < 10; i += 1)
	{
		printf("%d��° ���� �Է� �� Enter>", i+1);
		scanf("%c", &ch[i]);
		getchar();
	}
	for (i = 0; i < 10; i += 1)
		printf("%c", toupper(ch[i]));
	return 0;
}


