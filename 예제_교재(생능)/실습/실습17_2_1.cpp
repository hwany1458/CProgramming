//[��� nation�� ������ �迭�� ������ ���]
#include <stdio.h>
#include <stdlib.h>
struct worldcup
{
   char nation[9];
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
    printf("File open�� ���� �߻�");
    exit(1);
  }
  while(!feof(fp))
   {
    fscanf(fp, "%s %d\n", data[i].nation, data[i].goal);
    sum+=data[i].goal;
    printf("%-8s  %2d\n", data[i].nation, data[i].goal);
    i++;
  }
 fclose(fp);
 printf("���� �� : %d\n", sum); 
 return 0;
}

