//[멤버 nation을 문자형 포인터로 선언한 경우]
#include <stdio.h>
#include <stdlib.h>
struct worldcup
{
   const char *nation;
   char goal;
};

int main(void)
{
 struct worldcup data[4];
 int  i=0, sum=0;
 FILE *fp;
 fp=fopen("2018cup.txt", "r");
 if (fp==NULL)
  {
    printf("File open에 오류 발생");
    exit(1);
  }
  while(!feof(fp))
   {
	data[i].nation = (char *)malloc(7);
    fscanf(fp, "%s %d\n", data[i].nation, &data[i].goal);
    sum+=data[i].goal;
    printf("%-8s  %2d\n", data[i].nation, data[i].goal);
    i++;
  }
 fclose(fp);
 printf("득점 합 : %d\n", sum); 
 return 0;
}


