#include <stdio.h>
#include <string.h>
int main(void)
{
 char *s1="Republic of KOREA";
 char *s2="Republic of CHINA";
 int ptr;
 ptr=strcmp(s1, s2);
 if (ptr<0 || ptr>0)
   printf("���ڿ� s1�� s2�� �ٸ���.\n");
 ptr=strncmp(s1, s2, 12);
 if (ptr==0)
   printf("���ڿ� s1�� s2�� ����.\n");
 return 0; 
}
