#include <stdio.h>
void main()
{
    int grade;
    printf("���� ������ �Է��ϰ� Enter>");
    scanf("%d", &grade);
    if (grade > 60)
    {
        printf("����: %d\n", grade);
        printf("�հ�! �����մϴ�.\n");
    }
    else
    {
        printf("���� ���հ�!\n");
        printf("�ٽ� �õ��� ������.\n");
    }
}
