#include <stdio.h>
void main()
{
   int y;
   printf("�⵵�� �Է��ϰ� Enter>");
   scanf("%d", &y);
  if ((y % 4 ==0 && y %100 !=0) || y % 400 == 0)
	printf("%d���� �����Դϴ�.\n", y);
  else
	printf("%d���� ����Դϴ�.\n", y);
}

