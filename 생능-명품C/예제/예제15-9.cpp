#include <stdio.h>
struct user
  {
   char name[20];
   char phone[14];
   int quick;
  };
int main(void)
{
 user d[2]={{"���ȯ", "011-123-4567",1},
              {"������", "010-120-5638",5}};
 user *pt;
 pt=d;
 printf("pt�� �ּ� : %u\n", &pt);
 printf("pt�� �� : %u\n", pt);
 printf("d[1]�� �ּ� : %u\n", &d[1]);
 return 0;
}
