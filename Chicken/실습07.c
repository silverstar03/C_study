#include <stdio.h>

void main(void)
{
	char a = 127;
	printf("a�� %d \n", a);
	a = a + 1;
	printf("a�� %d \n", a); //-128
}