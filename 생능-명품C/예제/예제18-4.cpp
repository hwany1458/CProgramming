#include<stdio.h>
#include<stdlib.h>
#define EQ ==
#define PI 3.141592
#define START "���α׷��� �����մϴ�."
#define END "���α׷��� �����մϴ�."
int main(void)
{
 double radius;
 printf("%s\n", START);
 printf("0�� �ƴ� �������� ���̸� �Է��ϰ� Enter :");
 scanf("%lf", &radius);
 if (radius EQ 0)
 {
   printf("%s\n", END);
   exit(0);
 }
 printf("���� �ѷ��� %lf �Դϴ�.\n", 2*PI*radius);
 printf("%s\n", END);
 return 0;
}
