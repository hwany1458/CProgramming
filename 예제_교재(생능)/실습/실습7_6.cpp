#include <stdio.h>
void main()
{
   int a, b;
   printf("�� ���� ������ �Է��ϰ� Enter>");
   scanf("%d %d", &a, &b);
   if (a-b>0)
     printf("���� a�� Ů�ϴ�.\n");
   else if (a-b<0)
     printf("���� b�� Ů�ϴ�.\n");
   else
     printf("���� ���� �Է��߽��ϴ�.\n");
}

