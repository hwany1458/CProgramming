#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct buddy
{
	char name[10];
	char phone[14];
	int month;
};
void search_name(void);
int main(void)
{
	search_name();
	return 0;
}


void search_name(void)
{
	long i, total_block, check = 0;
	char name[10];

	FILE* fpr;
	struct buddy d[10];
	fpr = fopen("student.bin", "rb");
	if (fpr == NULL) {
		printf("File Open�� ���� �߻� !");
		exit(1);
	}
	fseek(fpr, 0L, SEEK_END);
	total_block = ftell(fpr) / sizeof(buddy);
	fseek(fpr, 0L, SEEK_SET);
	fread(d, sizeof(buddy), total_block, fpr);
	fclose(fpr);
	printf("�˻��� �̸��� �Է��ϰ� Enter>");
	gets(name);
	for (i = 0; i < total_block; i++)
		if (strcmp(name, d[i].name) == 0)
		{
			check = 1;
			printf("�̸�     ��ȭ��ȣ       ����\n");
			printf("%-8s %-14s %2d\n", d[i].name, d[i].phone, d[i].month);
		}
	if (check == 0) printf("��ġ�ϴ� ������ ����\n");
}

