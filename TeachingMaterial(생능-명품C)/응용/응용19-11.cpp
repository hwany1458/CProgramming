#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void gotoxy(int x, int y);
int main(void)
{
 int i, dan[10], num[10], dap[10];
 srand(time(NULL));
 for(i=0;i<10;i++)
 { 
   dan[i]=rand()%9+1;
   num[i]=rand()%9+1;
 }
 printf("������ ����Ǯ��\n\n");
 printf("�� ������ ���� �Է��ϰ� \n");
 printf("Enter�Ͻÿ�.\n\n");
 for(i=0;i<10;i++)
   printf("%2d: %d*%d=?\n", i+1, dan[i], num[i]);
 for(i=0;i<10;i++)
   { 
     gotoxy(10, 6+i);
     scanf("%d", &dap[i]);
   }
  
for(i=0;i<10;i++)
{
  if (dan[i]*num[i]==dap[i])
  {
       gotoxy(14, 6+i);
       printf("O");
  }
  else
  {
       gotoxy(14, 6+i);
       printf("X");
       printf("���� : %d", dan[i]*num[i]);
  }
}


 printf("\n");
 return 0;
}
void gotoxy(int x, int y)
{
   COORD Pos = {x - 1, y - 1};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
