#include <stdio.h>
void main()
{
 int n;
 double x, y, z;
 printf("1:�ﰢ��, 2:�簢��, 3:��ٸ����� ���\n");
 printf("��ȣ�� �Է��ϰ� Enter>");
 scanf("%d", &n);
 switch(n)
  {
    case 1 :
	printf("�ﰢ���� ���� ���\n");
	printf("�غ��� ���̸� �Է��ϰ� Enter>");
	scanf("%lf",&x);
	printf("������ ���̸� �Է��ϰ� Enter>");
	scanf("%lf",&y);
	printf("�ﰢ���� ���̴� %f\n", x*y/2);
	break;
    case 2 : 
	printf("�簢���� ���� ���\n");
	printf("�غ��� ���̸� �Է��ϰ� Enter>");
	scanf("%lf",&x);
	printf("������ ���̸� �Է��ϰ� Enter>");
	scanf("%lf",&y);
	printf("�簢���� ���̴� %f\n", x*y);
	break;
    case 3 : 
	printf("��ٸ����� ���� ���\n");
	printf("�غ��� ���̸� �Է��ϰ� Enter>");
	scanf("%lf",&x);
	printf("������ ���̸� �Է��ϰ� Enter>");
	scanf("%lf",&y);
	printf("������ ���̸� �Է��ϰ� Enter>");
	scanf("%lf",&z);
	printf("��ٸ����� ���̴� %f\n", (z+x)*y/2);
    default : printf("����� �� �����ϴ�.\n");
   }     
}
