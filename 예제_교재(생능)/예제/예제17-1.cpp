#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 FILE *fp;
 char c;
 fp=fopen("chr.txt", "w");
 if (fp==NULL)
  {
    printf("File open�� ���� �߻�");
    exit(1);
  }
 printf("Enter�� ���� ������ �������\n");
 printf("�����Է� : ");
 while ((c = getchar()) != '\n')
  {  
   printf("%c", c);
   fputc(c, fp);
  }
 fclose(fp);
 printf("\n");
 return 0;
} 
