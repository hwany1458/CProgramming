#include <stdio.h>
int main(void)
{
  char i=3;
  int k=8;
  printf("���� i�� �ּ�(10����)>%u\n", &i);
  printf("���� k�� �ּ�(10����)>%u\n", &k);
  printf("���� i�� �ּ�(16����)>%p\n", &i);
  printf("���� k�� �ּ�(16����)>%p\n", &k);
  return 0;
}
