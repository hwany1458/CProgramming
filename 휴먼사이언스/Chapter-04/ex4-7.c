#include<stdio.h>
#define SECPERMIN 60
void main()
{
	int sec, min, left;
	printf("Convert second to minutes and second!\n");
	printf("Enter to number of the seconds ==>");
	scanf_s("%d", &sec);
	min = sec / SECPERMIN; /* �ʸ� 60���� ���� ��� ���� ���̵ȴ� */
	left = sec % SECPERMIN; /* �������� �ʰ� �ȴ� */
	printf("\n%d seconds is %d minutes, %d seconds. \n", sec, min, left);
}