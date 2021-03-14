#include <stdio.h>

void main(void)
{
	int a = 10, b = 20;

	int c = a > b ? a : b;
	printf("%d \n", c);	//20

	int d;
	if (a > b)	{
		d = a;
	}else{
		d = b;//20
	}
	printf("%d \n", d);//20
}