#include <stdio.h>
#include <stdlib.h>
#define filename "grade01.txt"
struct student
{
  char names[20];
  int score;
};

int main(void)
{
 struct student data;
  int  i;
  FILE *fp;
  if ((fp=fopen(filename, "w"))==NULL)
   {
    printf("File open�� ���� �߻�");
    exit(1);
   }
  printf("�̸��� ������ �Է��ϰ� Enter\n");
  for(i=0;i<=2;i++)
   {
    scanf("%s %d", data.names, &data.score);
    fprintf(fp, "%s %d\n", data.names, data.score);
    fflush(stdin);
   }
 fclose(fp);
 return 0;
}


