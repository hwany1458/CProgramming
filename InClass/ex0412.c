#include <stdio.h>
void main()
{
	//int a = 10;
	int a;
	printf("������ �Է��ϼ��� ");
	scanf_s("%d", &a);

	// if()���� �Ἥ ������ üũ
	if ((a % 2) == 0)  // ������ ���� ���� ����
	{
		printf("����a ���� ¦���Դϴ�\n");
	}
	else  // ������ �����϶� ����
	{
		printf("�Է¹��� a�� Ȧ���Դϴ�\n");
	}

	// ���ǿ����ڸ� �Ἥ �����ϰ� �ٲټ���
	((a % 2) == 0) ? printf("¦��\n") : printf("Ȧ��\n");


	// Ű����κ��� ������ �Է¹޾�, 
	// ������� ���������� �Ǻ��ϰ� ����ϼ���
	if (a>0)
	{
		printf("����Դϴ�\n");
	}
	else if (a<0)
	{
		printf("�����Դϴ�\n");
	}
	else
	{
		printf("0�Դϴ�\n");
	}

	// Ű����κ��� ����(0~100)�� �޾Ƽ�, ������ ����ϼ���
	int score;
	printf("�ް���� ������ �Է��ϼ��� ");
	scanf_s("%d, &score");

	// ChatGPT�� �̷��� §��
	if (score >= 90) { printf("A\n"); }
	else if (score >= 80) { printf("B\n"); }
	else if (score >= 70) { printf("C\n"); }
	else if (score >= 60) { printf("D\n"); }
	else { printf("F\n"); }

	// ��ȯ�̽�Ÿ��
	// 100�ʰ�, �Ǵ� 0�̸� �� �Է¹����� �����޽���
	if ((100 <= score) && (score >= 90)) { printf("A\n"); }
	else if ((score < 90) && (score >= 80)) { printf("B\n"); }
	else if ((score < 80) && (score >= 70)) { printf("C\n"); }
	else if ((score < 70) && (score >= 60)) { printf("D\n"); }
	else { printf("F\n"); }

}