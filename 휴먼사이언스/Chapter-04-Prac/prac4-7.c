#include <stdio.h>
void main()
{
	char flag; //��Ʈ���� ���ǻ� char�� ���� ���
	flag = 0x50;

	printf("1�� ������ %s���ֽ��ϴ�. \n", ((flag & 0x01) != 0) ? "��" : "��");
	printf("5�� ������ %s���ֽ��ϴ�. \n", ((   ) != 0) ? "��" : "��");
	printf("7�� ������ %s���ֽ��ϴ�. \n", ((flag & 0x40) != 0) [   ]);
}