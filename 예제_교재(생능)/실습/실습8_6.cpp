#include <stdio.h>
void main()
{
    for (double f = 100; f >= 80; f -= 2.5)
        printf("ȭ���µ� %.2f�� �����µ��� %.2f\n", f, 5 * (f - 32) / 9);
    printf("\n");
    for (double c = 15; c <= 35; c += 2.5)
        printf("�����µ� %.2f�� ȭ���µ��� %.2f\n", c, 9 * c / 5 + 32);
}

