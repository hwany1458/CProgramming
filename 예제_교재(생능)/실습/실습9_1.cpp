#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("1����n���� ���� ��\n");
    printf("���� n �Է� :");
    scanf("%d", &n);
    for (i = 1; i <= n; i += 1)
    {
        if (sum < 100)
            sum += i;
        else
            break;
    }
    printf("�� : %d, i=%d\n", sum, i-1);
}

