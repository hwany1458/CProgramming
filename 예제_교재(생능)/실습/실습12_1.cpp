#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch1;
    printf("���ڸ� �Է��ϰ� Enter>");
    scanf("%c", &ch1);
    if (isdigit(ch1))
        printf("�����Դϴ�.\n");
    else if (isalpha(ch1))
        if (islower(ch1))
            printf("�빮�� : %c\n", toupper(ch1));
        else
            printf("�ҹ��� : %c\n", tolower(ch1));
}


