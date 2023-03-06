#include <stdio.h>
#include <stdlib.h>
struct buddy 
{
	char name[10];
	char phone[14];
	int month;
 };


int main(void)
{
 struct buddy d;
 FILE *fp;
 long total_block, block_number;

 fp=fopen("student.bin", "rb");
 if(fp==NULL)
  {
   printf("File Open�� ���� �߻� !");
   exit(1);
  }
 fseek(fp, 0L, SEEK_END);
 total_block=ftell(fp)/sizeof(buddy);
 printf("��ü block�� ���ڴ� %d �Դϴ�.\n", total_block);
 while(1) {
   printf("���ϴ� block�� ����(1-%d)�� �Է��ϰ� Enter >", total_block);
   scanf("%ld", &block_number);
   fflush(stdin);
   if (block_number> total_block)
     break;
   fseek(fp, sizeof(buddy)*(block_number-1), SEEK_SET);
   if (fread(&d, sizeof(buddy), 1, fp) !=1) {
     printf("File read Error !");
     exit(1);
     }
   printf("\n���� block ��ġ : %d\n", block_number);
   printf("�̸�     ��ȭ��ȣ       ����\n");
   printf("%-8s %-14s %2d\n",d.name,d.phone,d.month);
   }
 fclose(fp);
 return 0;
}
