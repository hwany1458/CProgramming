#include <stdio.h>
int main(void)
{
 int a[3]={10, 20, 30};
 int *pt;
 pt=a;
 printf("�迭 �̸�:%u\n", a);
 printf("a[1]�� �ּ�:%u\n", &a[1]);
 printf("a+1�� ��:%u\n", a+1);
 printf("pt+1�� ��:%u\n", pt+1);
 printf("a[2]�� ��:%d\n", a[2]);
 printf("*(pt+2)�� ��:%d\n", *(pt+2));
 printf("*pt+2�� ��:%d\n", *pt+2);
 return 0;
}
