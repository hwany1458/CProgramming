#include <stdio.h>
int main(void)
{
  int k=8, i=3;
  int *p;
  p=&k;
  printf("k�� ��: %u\n", k);
  printf("p�� ����Ű�� ���� ��: %u\n", *p);
  *p=i;
  printf("k�� ��: %u\n", k);
  printf("p�� ����Ű�� ���� ��: %u\n", *p);
  return 0;
}
