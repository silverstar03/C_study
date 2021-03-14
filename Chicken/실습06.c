#include <stdio.h>

void main(void)
{
	int a = 3;
	int b = a++;
	printf("%d \n", b);   //3
	printf("%d \n", ++a); //5
	printf("%d \n", a++); //5
}