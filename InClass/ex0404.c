#include <stdio.h>
void main0404()
{
	// ��������
	int kor, eng, mat;  // ������ ����

	printf("���� ���� ���� ������ �Է��ϼ��� ");
	/*
	scanf_s("%d", &kor);
	scanf_s("%d", &eng);
	scanf_s("%d", &mat);
	*/

	int a; //(1)��������
	a = 100; //(2)���Ҵ�

	const int b = 200;  // �������
	//b = 300;

	// �ѹ� �Է¹���
	scanf_s("%d %d %d", &kor, &eng, &mat);
	
	// ���� kor+eng+mat
	printf("����=%d��, �������=%.2f\n", kor+eng+mat, (double)(kor+eng+mat)/3.0);
}