#include <stdio.h>
int fact(int n);
void main()
{
  int n;	
  printf("���� �Է��� Enter>");
  scanf("%d",&n);
  printf("1���� %d���� �� : %d\n", n, fact(n));
}

int fact(int n)
{
  if (n==1)
    return 1;
  return n*fact(n-1);
}
