//¦����
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("������ �Է��ϰ� Enter>");
    scanf("%d", &n);
    for (i = 1; i <= n; i += 1)
    {
        if (i % 2)
            continue;
        sum += i;
    }
    printf("1���� %d���� ¦����=%d\n", n, sum);
}



