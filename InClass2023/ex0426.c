#include <stdio.h>
void main04261()
{
	// 1���� ����(����)�� �Է¹޾�, ����(A,B,C,D,F)�� ����ϼ���
	// [��Ʈ] switch�� ���
	printf("����(����)�� �Է��ϼ��� ");
	//���� ����� (1)��������, (2)�����Ҵ�
	int score;  //1
	//score = 100; //2
	scanf_s("%d", &score); //2

	// if else if���� ����� ��� (���� ����)
	if ((100 <= score) && (score >= 90)) { printf("A\n"); }
	else if ((score < 90) && (score >= 80)) { printf("B\n"); }
	else if ((score < 80) && (score >= 70)) { printf("C\n"); }
	else if ((score < 70) && (score >= 60)) { printf("D\n"); }
	else { printf("F\n"); }

	// switch��
	switch (score/10)  // ������(��)�� ����ؼ� 10���� ���� ���
	{
	case 10: //printf("������ A\n"); break;
	case 9: printf("������ A\n"); break;
	case 8: printf("������ B\n"); break;
	case 7: printf("������ C\n"); break;
	case 6: printf("������ D\n"); break;
	default : printf("������ F\n"); break;
	}



}