#include <stdio.h>
void main(void)
{
	int i, s;
	s = 0;
	i = 1;
	while (i <= 50) {
		s += i;
		++i;
	}
	printf("Sum from 1 to 50 = %d\n", s);
}