#include <stdio.h>
int main(void)
{
 int a[3]={10, 20, 30};
 int *pt;
 pt=a;
 printf("�迭 �̸�   : %u\n", a);
 printf("������ �ּ� : %u\n", &pt);
 printf("�������� �� : %u\n", pt);
 printf("*pt�� ��   : %d\n", *pt);
 pt++;
 printf("�������� �� : %u\n", pt);
 printf("*pt�� �� : %d\n", *pt);
 return 0;
}
