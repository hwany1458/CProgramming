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
     fflush(stdin);
     scanf("%d", &dap[i]);
   }
 return 0;
}
void gotoxy(int x, int y)
{
   COORD Pos = {x - 1, y - 1};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
