#include<stdio.h>
#define LEVEL 1
int main(void)
{
 #ifdef LEVEL
   printf("�������� ���α׷�\n");
 #else
   printf("�ʺ��ڿ� ���α׷�\n");
 #endif
 return 0;
}
