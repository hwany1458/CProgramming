#include <stdio.h>
void main()
{
 char operand;
 int a=8, b=5;
 printf("������(+-*/%)�� �Է��ϰ� Enter>");
 scanf("%c", &operand);
 switch(operand)
  {
    case '+' : printf("a+b=%d", a+b);
	  break;
    case '-' : printf("a-b=%d", a-b);
	  break;
    case '/' : printf("a/b=%d", a/b);
	  break;
    case '*' : printf("a*b=%d", a*b);
	  break;
    case '%' : printf("a%%b=%d", a%b);
	  break;
    default : printf("����� �� �����ϴ�.");
   }     
}
