#include <stdio.h>
#include <stdlib.h>
#define filename "grade01.txt"
int main(void)
{
  char names[20];
  int score;
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
    scanf("%s %d", names, &score);
    fprintf(fp, "%s %d\n", names, score);
    getchar();
   }
 fclose(fp);
 return 0;
}
