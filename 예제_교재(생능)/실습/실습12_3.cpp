#include <stdio.h>
#include <math.h>
double round_num(double x);
int main(void)
{
    double x;
    printf("������ �Ǽ��� �Է��ϰ� Enter>");
    scanf("%lf", &x);
    printf("�ݿø� �� = %.f\n", round_num(x));
    return 0;
}

double round_num(double x)
{
    if (x < 0)
        return floor(x);
    else
        return ceil(x);
}

