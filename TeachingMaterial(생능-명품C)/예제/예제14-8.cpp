#include <stdio.h>
int main(void)
{
 char str1[]="copy";
 char *str2 ="text";
 printf("str1�� �ּ�: %u \n", str1);
 printf("str2�� ����� �ּ�: %u \n", str2);
 printf("str1[2]�� ����� ��: %c \n", str1[2]);
 printf("str2+2�� ��: %c \n", *(str2+2));
 printf("���ڿ� str1: %s \n", str1);
 printf("���ڿ� str2: %s \n", str2);
 return 0;
}
