#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  char chr[10];
  int marks, sum=0;
  FILE *fp;
  fp=fopen("2018cup.txt", "r");
  if (fp==NULL)
   {
     printf("File open�� ���� �߻�");
     exit(1);
   }
  while(!feof(fp))
   {
    fscanf(fp, "%s %d\n", chr, &marks);
    sum+=marks;
    printf("%-8s  %2d\n", chr, marks);
  }
 printf("���� �� : %d\n", sum); 
 fclose(fp);
 return 0;
}
