#include<stdio.h>
#include<stdlib.h> //�Լ� abs, srand, rand ȣ��
#include<time.h>  //�Լ� time ȣ��
int main(void)
{
 int i=0, k,m, diff;
 srand(time(NULL));
 k=rand()%99+1;
 printf("���� �˾� ���߱� ����\n\n");
 printf("1���� 99������ ���ڸ� �Է��ϼ���.\n");
 printf("0�� �Է��ϸ� ����\n\n");
 while(1)
 {  
    i++;
    printf("�õ��� Ƚ�� : %d, ",i);
    printf("���� �Է��� Enter>");
    scanf("%d",&m);
    if(m==0)
	break;
    printf("�Է��� ���ڰ� ");
    if(k==m)
     { printf("�¾���\n");
       break;
     }
    diff=k-m;
    if (abs(diff)<25)
      printf("���� ");
    else
      printf("���� ");
    if (diff<0)
      printf("����\n\n");
    else
      printf("����\n\n");
  }
 printf("��ǻ���� ���� : %d \n", k);
 return 0;
}
