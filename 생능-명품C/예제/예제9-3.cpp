#include <stdio.h>
void main()
{
 int i;
 for(i=1;i<=10;i+=2)
 {
  if (i%2==0) 
      goto next;
   printf("%d ", i);
  next:;
 }
}
