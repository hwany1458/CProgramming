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
  struct person d={"���ȯ", "011-123-4567",
		    "hhkim@naver.com","������ ��ȱ� ���ڵ�", 3};
  printf("name    : %s\n", d.name);
  printf("phone   : %s\n", d.phone);
  printf("email   : %s\n", d.email);
  printf("address : %s\n", d.address);
  printf("bell     : %d\n", d.bell);
  return 0;
}

