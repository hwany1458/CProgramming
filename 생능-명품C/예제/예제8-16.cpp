#include <stdio.h>
void main()
{
 int i, n, sum=1;
 printf("1���� n������ �� ���\n");
 printf("���� n �Է� :");
 scanf("%d", &n);
 for(i=1;i<=n;i+=1)
   sum*=i;
 printf("1���� %d������ ��:%d\n", n, sum);
}
