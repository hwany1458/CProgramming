#include<time.h>
#include<stdio.h>
#include<windows.h>
int main(void)
{
 clock_t start, end;
 double pst;
 start = clock();
 printf("start!\n");
 Sleep(3500);
 end = clock();
 printf("end\n");
 pst = (double)(end-start)/CLK_TCK;
 printf("����ð�: %f\n",pst);
 return 0;
}
