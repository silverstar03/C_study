#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int num;
	srand(3);
	for (int i = 0; i < 6; i++)
	{
		num = rand();
		printf("%d ", num);
	}
}