#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int num1=14;
 long num2=512;
 char s[25];
 itoa(num1, s, 2);
 printf("����:%d, 2�������ڿ�:%s\n", num1, s);
 ltoa(num2, s, 16);
 printf("����:%ld, 16�������ڿ�:%s\n",num2, s);
 return 0; 
}
