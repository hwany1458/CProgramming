#include <stdio.h>
void main()
{
	int x;
	int y;
	printf("y���� �Է��Ͻÿ� = ");
	scanf_s("%d", &y); // y=3;
	x = (y < 0) ? -y : y;
	printf("y= %d�� ��, x�� ���Ե� ���� %d�Դϴ�\n \n", y, x);
}