#include <stdio.h>
void main()
{
    char operand;
    int a = 8, b = 5;
    printf("������(+-*/%)�� �Է��ϰ� Enter>");
    scanf("%c", &operand);
    switch (operand)
    {
    case '+': printf("a+b=%d\n", a + b);
        break;
    case '-': printf("a-b=%d\n", a - b);
        break;
    case '/': printf("a/b=%f\n", (float)a / b);
        break;
    case '*': printf("a*b=%d\n", a * b);
        break;
    case '%': printf("a%%b=%d\n", a % b);
        break;
    default: printf("����� �� �����ϴ�.\n");
    }
}

