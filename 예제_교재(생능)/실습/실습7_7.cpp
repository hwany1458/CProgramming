#include <stdio.h>
void main()
{
    int a;
    double x;
    printf("������ ���ڸ� �Է��ϰ� Enter>");
    scanf("%lf", &x);
    a = x;
    if (x - a > 0)
        printf("�Ҽ����� : %f\n", x - (int)x);
    else if (a % 2)
        printf("�����̰� Ȧ���Դϴ�.\n");
    else
        printf("�����̰� ¦���Դϴ�.\n");
}
