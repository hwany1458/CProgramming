#include<stdio.h>
int dectobin(int n);
int main(void)
{
  int n;
  printf("������ �Է��ϰ� Enter>");
  scanf("%d", &n);
  dectobin(n);
  printf("\n");
  return 0;
}

int dectobin(int n)
{ 
  if (n<1)
       return n;
  else
   {
      dectobin(n/2);
      printf("%d",n%2);
    }
}
