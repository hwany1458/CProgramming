#include <stdio.h>
struct person
{
   char name[21];
   char phone[14];
   char email[21];
   char address[41];
   int bell;
};
void display_st(struct person *d, int n);
int main(void)
{
  person d[3]={{"���ȯ","011-123-4567","hhkim@naver.com", 
                   "������ ��ȱ� ���ڵ�", 3},
                   {"������","010-120-5638","jylee@daum.net", 
                   "����� ���빮�� ȸ�⵿", 4},
                   {"�ڵ���","010-0120-2386","dcpark@seoul.net", 
                   "����� ���α� �λ絿", 4}};
 display_st(d, 3);
 return 0;
}


void display_st(struct person *d, int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("name    : %s\n", d[i].name);
  printf("phone   : %s\n", d[i].phone);
  printf("email   : %s\n", d[i].email);
  printf("address : %s\n", d[i].address);
  printf("bell     : %d\n", d[i].bell);
 }
}

