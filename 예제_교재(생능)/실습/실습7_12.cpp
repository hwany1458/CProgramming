#include <stdio.h>
void main()
{
    int age;
    printf("���̸� �Է��ϰ� Enter>");
    scanf("%d", &age);
    if (19 <= age)
        printf("Ƽ�� ���� : 7,000��\n");
    else if (12 <= age)
        printf("Ƽ�� ���� : 5,000��\n");
    else
        printf("Ƽ�� ���� : ����\n");
}

