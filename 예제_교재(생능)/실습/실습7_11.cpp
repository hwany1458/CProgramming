#include <stdio.h>
void main()
{
   int y, month, day;
   printf("�⵵�� �Է��ϰ� Enter>");
   scanf("%d", &y);
   printf("���� �Է��ϰ� Enter>");
   scanf("%d", &month);
   switch(month)
   {
    case 1 : day=31; break;
    case 2 : day=28; break;
    case 3 : day=31; break;
    case 4 : day=30; break;
    case 5 : day=31; break;
    case 6 : day=30; break;
    case 7 : day=31; break;
    case 8 : day=31; break;
    case 9 : day=30; break;
    case 10 : day=31; break;
    case 11 : day=30; break;
    case 12 : day=31; break;
  }
  if ((y % 4 ==0 && y %100 !=0) || y % 400 == 0)
	day=29;
 printf("%d���� %d������ ��¥���� %d�Դϴ�.\n", y,month, day);
}

