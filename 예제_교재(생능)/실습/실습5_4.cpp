#include <stdio.h>
void main()
{
 int age, height;
 char blood;
 printf("���̸� �Է��ϰ� Enter>");
 scanf("%d", &age);
 printf("Ű(cm)�� �Է��ϰ� Enter>");
 scanf("%d", &height);
 getchar();
 printf("������(A,B,O)�� �Է��ϰ� Enter>");
 scanf("%c", &blood);
 printf("���� : %d\n",age);
 printf("Ű(cm) : %d\n",height);
 printf("������ : %c\n",blood);
}
