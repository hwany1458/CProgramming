#include<stdio.h>
#include<stdlib.h>
int main(void)
{
 char *ptr;
 int size;
 printf("�Է��� ���ڿ��� ���̸�\n");
 printf("byte���� �Է��ϰ� Enter>");
 scanf("%d",&size);
 ptr=(char *)malloc(size+1);
 printf("%d���� ���ڿ���\n", size);
 printf("������� �Է��ϰ� Enter>");
 scanf("%s", ptr);
 printf("�Էµ� ���ڿ� : %s\n",ptr);
 free(ptr);
 return 0;
}

