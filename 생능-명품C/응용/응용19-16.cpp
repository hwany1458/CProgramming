#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
  time_t now;
  struct tm *d;
  while(!kbhit())
  {
    system("cls");
    now=time(NULL);
    d=localtime(&now);
    printf("���� ��¥�� �ð� : %s\n", asctime(d));
  }
 return 0;
}
