#include<stdio.h>
#define LEVEL 1
int main(void)
{
#if (LEVEL>1)
  printf("�������� ���α׷�\n");
#else
  printf("�ʺ��ڿ� ���α׷�\n");
#endif
}
