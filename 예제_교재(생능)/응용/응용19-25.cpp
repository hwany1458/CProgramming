#include<stdio.h>
#include<stdlib.h>

int menu_display(void);
void guguall(void);
void gugusel(void);
void presskey(void);

int main(void)
{
 int c;
 while((c=menu_display()) != 3)
 {
  switch(c)
   {
    case 1 : guguall();
  	break;
    case 2 : gugusel();
	break;
    default : break;
   }
 }
 return 0;
}

int menu_display(void)
{
 int select;
 system("cls");
 printf("������ ���α׷�\n\n");
 printf("1. ������ ��ü ���\n");
 printf("2. ���ϴ� �ܸ� ���\n");
 printf("3. ���α׷� ����\n\n");
 printf("�޴���ȣ �Է��� Enter>");
 scanf("%d", &select);
 return select;
}
void guguall(void)
{
 int i, j;
 system("cls");
 printf("������ ��ü ���\n\n");
 for(i=1; i<=9; i++)
  {
   for(j=1; j<=9; j++)
    printf("%d*%d=%2d ", j,i,j*i);
   printf("\n");
  }
 presskey();
}

void gugusel(void)
{
 int i, dan;
 system("cls");
 printf("���ϴ� �ܸ� ��� \n\n");
 printf("����� ���� �Է��ϰ� Enter>");
 scanf("%d", &dan);
 for(i=1; i<=9; i++)
  printf("%d*%d=%2d \n",dan,i,dan*i);
 presskey();
}

void presskey(void)
{
 char c;
 fflush(stdin);
 printf("\n\n");
 printf("Enter�� ������ ���� �޴���...");
 scanf("%c",&c);
 getchar();
}

