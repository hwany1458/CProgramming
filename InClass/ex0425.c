#include <stdio.h>
void main()
{
	// ������ 3�� ������ Ű����κ��� �Է� �޾�
	// (����) ���� �������� ����ϼ���.


	// ������
	int a1, b1, c1;
	scanf_s("%d %d %d", &a1, &b1, &c1);

	if (a1 <= b1 && a1 < c1)
		printf("%d\n", a1);
	else if (b1 <=  a1 && b1 < c1)
		printf("%d\n", b1);
	else
		printf("%d\n", c1);

	// ������
	int a2, b2, c2, min2;
	printf("\n������ ������ �Է��ϼ���:");
	scanf_s("%d %d %d", &a2, &b2, &c2);

	min2 = a2;
	if (b2 < min2) {
		min2 = b2;
	}
	if (c2 < min2) {
		min2 = c2;
	}
	printf("���� ���� ���� %d�Դϴ�.\n", min2);

	//������
	int a3, b3, c3;

	printf("\n�� ������ �Է��ϼ���.");
	scanf_s("%d %d %d", &a3, &b3, &c3);

	int min3 = a3;
	if (min3 > b3) min3 = b3;
	if (min3 > c3) min3 = c3;

	printf("���� ���� ���� %d�Դϴ�.\n", min3);

	// 1���� ������ �Է¹޾�, Ȧ������ ¦�������� �Ǵ��Ͽ� ���
	// if else ���� ���
	printf("\n1�� ������ �Է��ϰ� ���͸� ġ���� ");
	int x;
	scanf_s("%d", &x);

	// if ���ǿ� ����, 
	if ((x % 2) == 0) // �������� 0�� ���
	{
		printf("¦��\n");
	}
	else // �������� 0�� �ƴ� ��� (=) �������� 1�� ���
	{
		printf("Ȧ��\n");
	}

	// switch case ��
	// switch (����)���� ���� ����� case ���� ���� ��츦 ã�� ����
	switch (x % 2) 
	{
	case 0:
		printf("¦���Դϴ�\n");
		break;		// break���� (����)������ ���߰� �������´�
		                // break���� ���� ���, �Ʒ� ����� ��� �����ϱ� ������
						// (�Ʒ���) printf() ��� ���� ����� �Բ� ����
	//case 1:
	default:
		printf("Ȧ���Դϴ�\n");
		break;
	}
	
	//--- switch�� ���� (�ǽ����� ���)
	printf("\n1�� ����(1��~12��)�� �Է��ϰ� ���͸� ġ���� ");
	int y;
	scanf_s("%d", &y);
	switch (y)
	{
	case 1: printf("31��\n"); break;
	case 2: printf("28��\n"); break;
	case 3: printf("31��\n"); break;
	case 4: printf("30��\n"); break;
	case 5: printf("31��\n"); break;
	case 6: printf("30��\n"); break;
	case 7: printf("31��\n"); break;
	case 8: printf("31��\n"); break;
	case 9: printf("30��\n"); break;
	case 10:printf("31��\n"); break;
	case 11:printf("30��\n"); break;
	case 12:printf("31��\n"); break;
	default:printf("�߸��Է��߽��ϴ�\n"); break;
	}

	// break���� �����ϰ� Ȱ���Ͽ� �Ʒ��� ���� �ۼ��� �� �ִ�
	switch (y)
	{
	case 1: 
	case 3: 
	case 5: 
	case 7: 
	case 8: 
	case 10:
	case 12:printf("31��\n"); break;
	case 2: printf("28��\n"); break;
	case 4: 
	case 6: 
	case 9: 
	case 11:printf("30��\n"); break;
	default:printf("�߸��Է��߽��ϴ�\n"); break;
	}

}