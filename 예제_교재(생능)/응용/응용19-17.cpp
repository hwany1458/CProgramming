#include<stdio.h>
long totalday(int y, int m, int d);
int main(void)
{
 int fy, fm, fd, sy, sm, sd;
 long dates;
 printf("\nƯ���� ������ ��¥�� ���\n\n");
 printf("ù��° ��¥�� �ι�° ��¥��\n");
 printf("�Է��ϰ� Enter�Ͻÿ�.\n");
 printf("ù��° ��¥�� �ι�° ��¥����\n");
 printf("���ſ��� �մϴ�.\n\n");
 printf("ù��° ����� �Է�\n");
 printf("����: 1983 5 21) >");
 scanf("%d %d %d", &fy, &fm, &fd);
 printf("�ι�° ����� �Է�\n");
 printf("����: 2004 11, 17) >");
 scanf("%d %d %d", &sy, &sm, &sd);
 dates=totalday(sy, sm, sd)-totalday(fy, fm, fd);
 printf("\n\n%d�� %d�� %d�ϰ�\n",fy, fm, fd);
 printf("%d�� %d�� %d�� ������\n",sy, sm, sd);
 printf("�� ��¥ ��: %ld��\n", dates);
 return 0;
}

long totalday(int y, int m, int d)
{
 int months[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 int i;
 long total=0L;
 total=(y-1)*365L+(y-1)/4-(y-1)/100+(y-1)/400;
 if(!(y%4) && y%100 || !(y%400))
	  months[1]++;
 for(i=0; i<m-1; i++)
	total += months[i];
 total+=d;
 return total;
}
