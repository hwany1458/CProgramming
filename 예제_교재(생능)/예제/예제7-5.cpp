#include <stdio.h>
void main()
{
    int button;
    printf("����(1-3)�� �Է��ϰ� Enter>");
    scanf("%d", &button);
    switch (button)
    {
    case 1: printf("��ũĿ��\n");
        break;
    case 2: printf("����Ŀ��\n");
        break;
    case 3: printf("��Ŀ��\n");
        break;
    }
}
