#include <stdio.h>
int add(int n);
int main(void)
{
  int n;	
  printf("���� �Է� �� Enter>");
  scanf("%d",&n);
  printf("1���� %d���� �� : %d\n", n, add(n));
  return 0;
}

int add(int n)
{
  if (n==1)
     return 1;
  return n+add(n-1);
}
