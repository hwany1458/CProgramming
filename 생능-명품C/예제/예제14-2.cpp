#include <stdio.h>
int main(void)
{
  int k=8;
  int *p;
  p=&k;
  printf("k�� �ּ�: %u\n", &k);
  printf("p�� �ּ�: %u\n", &p);
  printf("p�� ��  : %u\n", p);
  printf("p�� ����Ű�� ���� ��: %d\n", *p);
  return 0;
}
