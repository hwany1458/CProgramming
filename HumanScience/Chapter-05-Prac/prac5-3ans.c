#include <stdio.h>
void main()
{
	int x, y; 
	char xy;
	printf("**** result ****\n\n");
	printf("Input x ? ");
	scanf_s("%d", &x);
	rewind(stdin);
	printf("Input xy -- operator ? ");
	scanf_s("%c", &xy, sizeof(char)); // ���ڴ� * / + - �Է�
	rewind(stdin);
	printf("Input y ? ");
	scanf_s("%d", &y);
	rewind(stdin);
	if (xy == '*')
		printf("%d * %d = %d\n", x, y, x * y);
	else if (xy == '/')
		printf("%d / %d = %d\n", x, y, x / y);
	else if (xy == '+')
		printf("%d + %d = %d\n", x, y, x + y);
	else if (xy == '-')
		printf("%d - %d = %d\n", x, y, x - y);
}