#include <stdio.h>
struct user
  {
   char name[20];
   char phone[14];
   int quick;
  };
int main(void)
{
  user d;
  printf("name �Է� :");
  scanf("%s", d.name);
  printf("phone �Է� :");
  scanf("%s", d.phone);
  printf("�����ȣ �Է� :");
  scanf("%d", &d.quick);
  printf("name  : %s\n", d.name);
  printf("phone : %s\n", d.phone);
  printf("quick : %d\n", d.quick);
  return 0;
}
