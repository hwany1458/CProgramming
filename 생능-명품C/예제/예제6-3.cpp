#include <stdio.h>
void main()
{
 int k;
 printf("�� �ڸ� 10�� ���� �Է� �� Enter>");
 scanf("%d", &k);
 printf("  1�� �ڸ��� %d \n", k%10);
 k=k/10;
 printf(" 10�� �ڸ��� %d \n", k%10);
 k=k/10;
 printf("100�� �ڸ��� %d \n", k%10);
}
