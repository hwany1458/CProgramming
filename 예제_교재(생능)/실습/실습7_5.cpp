#include <stdio.h>
void main()
{
   int a, b;
   printf("�� ���� ������ �Է��ϰ� Enter>");
   scanf("%d %d", &a, &b);
   if (a>b)
     printf("a%%b =%d\n", a%b);
   else if (a<b)
     printf("b%%a =%d\n", b%a);
   else
     printf("���� ���� �Է��߽��ϴ�.\n");
}

