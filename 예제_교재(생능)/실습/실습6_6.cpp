#include <stdio.h>
void main()
{
   double f, c; 
   printf("ȭ���µ��� �Է��ϰ� Enter>");
   scanf("%lf", &f);
   printf("�����µ��� �Է��ϰ� Enter>");
   scanf("%lf", &c);
   printf("ȭ���µ� %.2f�� �����µ��� %.2f\n", f, 5*(f-32)/9);
   printf("�����µ� %.2f�� ȭ���µ��� %.2f\n", c, 9*c/5+32);
}

