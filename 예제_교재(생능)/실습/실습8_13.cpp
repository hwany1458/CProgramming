#include <stdio.h>
void main()
{
 int i, a, b, sum=0;
 printf("a���� b������ �� ���\n");
 printf("���� a �Է� �� Enter>");
 scanf("%d", &a);
 printf("���� b �Է� �� Enter>");
 scanf("%d", &b);
 if (a<b)
 {
   for(i=a;i<=b;i+=1)
      sum+=i;
   printf("%d���� %d������ ��=%d\n", a, b, sum);
 }
 else if (a>b)
 {
   for(i=b;i<=a;i+=1)
      sum+=i;
   printf("%d���� %d������ ��=%d\n", b, a, sum);
 }
}



