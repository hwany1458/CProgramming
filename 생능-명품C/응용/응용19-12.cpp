#include<time.h>
#include<stdio.h>
int main(void)
{
  time_t curr;
  struct tm *d;
  curr=time(NULL);
  d=localtime(&curr);
  printf("���� ��¥�� �ð� : %s\n", asctime(d));
  return 0;
}
