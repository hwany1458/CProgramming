#include <stdio.h>
void main()
{
	int a = 1, b = 0, c = 5;
	float d = 1.2;

	// ������
	// && (�Ѵ� ���� �� ��), || (�Ѵ� �����϶��� ����)
	printf("AND ���� %d\n", a && b);
	printf("OR ���� %d\n",  a || b);
	printf("NOT ���� %d\n", !a);
	
	// ��Ʈ���� �� ����Ʈ����
	printf("left shift ���� %d\n", c << 1);
	// �ĸ�����
	printf(", ���� �� %d\n", (b++, a+=b));
	//ĳ��Ʈ����
	printf("����ȯ %d\n", (int)d);

	// ���ǿ��� (--?--:--)
	printf("���ǿ��� %d\n", ((a>b) ? (++a) : (++b)) );

}