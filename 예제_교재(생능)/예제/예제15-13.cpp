#include <stdio.h>
struct person
{
	char name[20];
	int id;
};
struct person input_st(void);
void display_st(struct person d);
int main(void)
{
	person d;
	d = input_st();
	display_st(d);
	return 0;
}
void display_st(struct person s)
{
	printf("name :%s\n", s.name);
	printf("id   :%d\n", s.id);
}
struct person input_st(void)
{
	person s;
	printf("�̸� �Է� �� Enter>");
	gets(s.name);
	printf("�й� 8�ڸ��Է� �� Enter>");
	scanf("%d", &s.id);
	return s;
}
