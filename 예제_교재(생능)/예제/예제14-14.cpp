#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 char *str;
 str = (char *) malloc(20);
 printf("���ڿ��� �Է��ϰ� Enter>");
 scanf("%s", str);
 printf("�Էµ�  ���ڿ�  : %s \n", str);
 free(str);
 return 0;
}
