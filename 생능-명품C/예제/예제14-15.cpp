#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int num1=68734;
 long num2=9876543;
 char s[25];
 itoa(num1, s, 10);
 printf("����:%d, ���ڿ�:%s\n", num1, s);
 ltoa(num2, s, 10);
 printf("����:%ld, ���ڿ�:%s\n", num2, s);
 return 0; 
}
