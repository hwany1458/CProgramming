#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	// ���������� ����

	int user1 = 10;
	int com = 0;
	srand(time(NULL));

	// ����ڰ� 0�� �Է��� ������ �ݺ�
	while (user1 != 0)  
	{
		// ����ڴ� Ű���� �Է�
		printf("1:����, 2:����, 3:�� (0:����) --> ���� �Է� ");
		scanf_s("%d", &user1);

		// ��ǻ�ʹ� ������ ���� �̱�(1~3)
		com = (rand() % 3) + 1;

		printf("����� %d, ��ǻ�� %d\n", user1, com);
	}

}