#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  char c;
  FILE *fp;
  fp=fopen("chr.txt", "r");
  if (fp==NULL)
   {
    printf("File open�� ���� �߻�");
    exit(1);
   }
  while(!feof(fp))
  {
   c=getc(fp);
   printf("%c", c);
  }
 printf("\n");
 fclose(fp);
 return 0;
}
