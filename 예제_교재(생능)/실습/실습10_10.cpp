#include <stdio.h>
double fact(double n);
int main(void)
{
    double n;
    printf("���� �Է��� Enter>");
    scanf("%lf", &n);
    printf("1���� %.lf���� �� : %.lf\n", n, fact(n));
    return 0;
}

double fact(double n)
{
    if (n == 1.)
        return 1.;
    return n * fact(n - 1);
}