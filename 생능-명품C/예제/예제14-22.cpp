#include <stdio.h>
int main(void)
{
 char str1[5]="copy";
 const char str2[5]="text";
 const char *ptr;
 str1[0]='a';
 ptr=str1;
 *ptr='b';   //������߻�
 str2[0]='c'; //������߻�
 ptr=str2;
 *ptr='d';  //������߻�
 return 0;
}
