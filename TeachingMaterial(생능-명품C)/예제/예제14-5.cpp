#include <stdio.h>
int main(void)
{
 int a[3]={10, 20, 30};
 int *pt;
 pt=a;
 printf("�迭 �̸�    : %u\n", a);
 printf("a[0]�� �ּ� : %u\n", &a[0]);
 printf("a[1]�� �ּ� : %u\n", &a[1]);
 printf("a[2]�� �ּ� : %u\n", &a[2]);
 printf("a[0]�� ��   : %d\n", a[0]);
 printf("pt�� ����Ű�� ���� ��: %d\n", *pt);
 return 0;
}
