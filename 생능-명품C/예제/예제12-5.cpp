#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
 div_t ix;
 ldiv_t lx;
 double num=367.568, frct, intg;
 double x1=7.0, y1=2.0;
 ix=div(10,4);
 printf("10/4�� ��� ��: %d, ������: %d\n", ix.quot, ix.rem);
 lx=ldiv(100L, 30L);
 printf("100/30�� ��� ��: %ld, ������: %ld\n", lx.quot, lx.rem);
 frct=modf(num, &intg);
 printf("%lf�� ����: %lf, �Ǽ�: %lf \n", num, intg, frct);
 printf("%lf/%lf�� ������: %lf\n", x1, y1, fmod(x1, y1));
 return 0;
}
