#include <stdio.h>
void main()
{
 double i, n; 
 double sum=1.;
 printf("1���� n������ �� ���\n");
 printf("���� n �Է� :");
 scanf("%lf", &n);
 for(i=1.;i<=n;i+=1.)
   sum*=i;
 printf("1���� %.f������ ��:%.f\n", n, sum);
}



