#include<stdio.h>
void dectobin(int n);
int main(void)
{
  int n;
  printf("������ �Է��ϰ� Enter>");
  scanf("%d", &n);
  dectobin(n);
  printf("\n");
  return 0;
}

void dectobin(int n)
{
  int bin[20], i=0; 
  while(n>0)
  {
     bin[i]=n%2;
     n=n/2; 
     i++;
  }      
  for(int j=i-1;j>=0;j--)
    printf("%d", bin[j]);
}
