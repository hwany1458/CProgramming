#include <stdio.h>
void main()
{
	char c;
	printf("������ �� �ڸ� ���ڸ� �����ÿ�= ");
	scanf_s("%c", &c, sizeof(c)); // 1�� ���� �Է� �� ����Ű�� ģ��.
	switch (c) {
	case 'a': printf("����'a'�� ����մϴ�.\n"); break;
	case 'b': printf("����'b'�� ����մϴ�.\n"); break;
	case 'c': printf("����'c'�� ����մϴ�.\n"); break;
	case 'd': printf("����'d'�� ����մϴ�.\n"); break;
	default: printf("����'a,b,c,d'�� ���ڰ� �ԷµǾ����ϴ�.\n");
	}
}