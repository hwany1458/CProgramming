#include <stdio.h>
void main()
{
 char ch1, ch2;
 printf("���ڸ� �Է��ϰ� Enter>");
 scanf("%c", &ch1);
 fflush(stdin);
 printf("���ڸ� �Է��ϰ� Enter>");
 scanf("%c", &ch2);
 printf("�Էµ� ���� %c, %c\n",ch1, ch2);
}
