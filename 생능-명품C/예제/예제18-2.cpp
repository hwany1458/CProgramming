#include<stdio.h>
#include<stdlib.h>
struct person
{
    char *name;
    char *phone_num;
    int bell_num;
};
int main(void)
{
 struct person p; 
 p.name=(char*)malloc(sizeof(char) * 20);
 p.phone_num=(char*)malloc(sizeof(char) * 14);
 printf("�̸� �Է� >");
 scanf("%s", p.name);
 printf("�޴��� �Է� >");
 scanf("%s", p.phone_num);
 printf("���Ҹ� �Է�>");
 scanf("%d", &p.bell_num);
 printf("�̸�  : %s\n", p.name);
 printf("�޴���: %s\n", p.phone_num);
 printf("���Ҹ�: %d\n", p.bell_num);
 return 0;
}
