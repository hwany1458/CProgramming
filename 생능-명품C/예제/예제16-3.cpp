#include <stdio.h>
enum prod {engine=3, battery, filter, fuse};
int main(void)
{
 enum prod v;
 v=battery;
 printf("��ġ��ȣ : %d\n", v);
 printf("engine ��ȣ : %d\n", engine);
 v=fuse;
 printf("��ġ��ȣ : %d\n", v);
 return 0;
}
