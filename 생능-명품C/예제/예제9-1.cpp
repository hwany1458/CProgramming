#include <stdio.h>
void main()
{
 int i, n, sum=0;
 printf("1����n���� ���� ��\n");
 printf("���� n �Է� :");
 scanf("%d", &n);
 for(i=1;i<=n;i+=1)
   {
     sum+=i;
     if (sum>100) 
         break;
   }
 printf("�� : %d, i=%d\n", sum, i);
}
