#include<time.h>
#include<stdio.h>
int main(void)
{
  time_t curr;
  struct tm *d;
  curr=time(NULL);
  d=localtime(&curr);
  printf("���糯¥\n");
  printf("%d��%d��%d��\n",d->tm_year+1900, d->tm_mon+1, d->tm_mday);
  printf("����ð�\n");
  printf("%d��%d��%d��\n",d->tm_hour, d->tm_min, d->tm_sec);
  return 0;
}
