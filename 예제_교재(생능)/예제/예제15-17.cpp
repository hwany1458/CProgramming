#include <stdio.h>
struct person
{
	char name[10];
	int age;
	struct phone
	{
		char home_num[14];
		char mobile_num[14];
	} number;
};
int main(void)
{
	struct person man[3];
	printf("�̸��� �Է��ϰ� Enter :");
	scanf("%s", man[0].name);
	printf("���̸� �Է��ϰ� Enter :");
	scanf("%d", &man[0].age);
	printf("����ȭ�� �Է��ϰ� Enter :");
	scanf("%s", man[0].number.home_num);
	printf("�޴�����ȣ�� �Է��ϰ� Enter :");
	scanf("%s", man[0].number.mobile_num);
	printf("\n");
	printf("name   : %s\n", man[0].name);
	printf("age    : %d\n", man[0].age);
	printf("home   : %s\n", man[0].number.home_num);
	printf("mobile : %s\n", man[0].number.mobile_num);
	return 0;
}
