#include<stdio.h>
int dec2octal(int n);
int main(void)
{
  int n;
  printf("������ �Է��ϰ� Enter>");
  scanf("%d", &n);
  dec2octal(n);
  printf("\n");
  return 0;
}

int dec2octal(int n)
{ 
  if (n<1)
       return n;
  else
   {
      dec2octal(n/8);
      printf("%d",n%8);
    }
}
