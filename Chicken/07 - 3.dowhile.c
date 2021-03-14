#include <stdio.h>

void main(void)
{
	int n = 10;
	do
	{
		if (n % 5 == 0) 
		{
			printf("%d \n", n);
		}
		n++;
	} while (n < 20);	//19±îÁö
}
