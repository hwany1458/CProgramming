#include <stdio.h>
int main(void)
{
 int korea[4], i, sum=0;
 for(i=0;i<4;i+=1)
 { 
   printf("%d��° ������ �Է� :", i);
   scanf("%d", &korea[i] );
   sum+=korea[i];
   printf("�Էµ� ������ :%d\n", korea[i]);
 }
 printf("�հ� :%d\n", sum);
 return 0;
}
