#include <stdio.h>
#include <stdlib.h>

int �÷���(int x, int y);
int main(void)
{
 int (*pt)(int a, int b);
 int a=3, b=5;
 pt=�÷���;
 printf("result = %d \n", pt(a, b));
 printf("result = %d \n", �÷���(a, b));
 return 0;
}
int �÷���(int x, int y)
{
 return x+y;
}
