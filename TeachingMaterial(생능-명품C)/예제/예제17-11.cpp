#include <stdio.h>
#include <stdlib.h>
typedef struct {
	char na[10];
	int vic;
	int tie;
	int def;
 } worldcup;
int main(void)
{
 FILE *fp;
 worldcup d;
 long total_block, block_number;
 fp=fopen("d-group.bin", "rb");
 if(fp==NULL)  
 {
   printf("File Open�� ���� �߻� !");
   exit(1);
 }
 fseek(fp, 0L, SEEK_END);
 total_block=ftell(fp)/sizeof(worldcup);
 printf("��ü block�� ���ڴ� %d �Դϴ�.\n", total_block);
 while(1) {
   printf("���ϴ� block�� ����(1-%d)�� �Է��ϰ� Enter >", total_block);
   scanf("%ld", &block_number);
   fflush(stdin);
   if (block_number> total_block)
     break;
   fseek(fp, sizeof(worldcup)*(block_number-1), SEEK_SET);
   if (fread(&d, sizeof(worldcup), 1, fp) !=1) {
     printf("File read Error !");
     exit(1);
     }
   printf("\n���� block ��ġ : %d\n", block_number);
   printf("�����̸� �� �� ��\n");
   printf("%-8s %2d %2d %2d\n\n",d.na,d.vic,d.tie,d.def);
  }
 fclose(fp);
 return 0;
}
