#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch1 = '1', ch2 = 'A';
    if (isalpha(ch2))
        printf("%c�� �����Դϴ�.\n", ch2);
    if (isdigit(ch1))
        printf("%c�� �����Դϴ�.\n", ch1);
    printf("�ҹ��� %c\n", tolower(ch2));
    return 0;
}
