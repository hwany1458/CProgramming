#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 char *s1="-12.5e04";
 char *s2="1100";
 char *endptr;
 double num1;
 long num2;
 num1=strtod(s1, &endptr);
 num2=strtol(s2, &endptr, 2);
 printf("���ڿ�:%s, double�� ���� :%lf\n", s1, num1);
 printf("���ڿ�:%s, long �� 10���� :%ld\n", s2, num2);
  return 0; 
}
