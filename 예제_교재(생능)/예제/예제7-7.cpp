#include <stdio.h>
void main()
{
	int grade1, grade2;
	printf("�ΰ��� ���������� �Է��ϰ� Enter>");
	scanf("%d %d", &grade1, &grade2);
	if (grade1 >= 60 && grade2 >= 60)
		printf("���� �հ�!\n");
	else
		printf("���� ���հ�!\n");
}
