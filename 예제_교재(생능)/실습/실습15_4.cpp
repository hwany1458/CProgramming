#include <stdio.h>
struct person
{
	char name[21];
	char phone[14];
	char email[21];
	char address[41];
	int bell;
};
int main(void)
{
	person d;
	printf("name �Է� :");
	scanf("%s", d.name);
	printf("phone �Է� :");
	scanf("%s", d.phone);
	printf("email �Է� :");
	scanf("%s", d.email);
	printf("address �Է� :");
	scanf("%s", d.address);
	printf("���Ҹ� �Է� :");
	scanf("%d", &d.bell);
	printf("name    : %s\n", d.name);
	printf("phone   : %s\n", d.phone);
	printf("email   : %s\n", d.email);
	printf("address : %s\n", d.address);
	printf("bell     : %d\n", d.bell);
	return 0;
}

