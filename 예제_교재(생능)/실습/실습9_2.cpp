#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("1����n���� ���� ��\n");
    printf("���� n �Է� :");
    scanf("%d", &n);
    for (i = 1; sum <=100; i += 1)
        sum += i;
    printf("�� : %d, i=%d\n", sum, i - 1);
}





