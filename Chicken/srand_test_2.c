#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mian(void)
{
	int num;
	for (int i = 0; i < 10; i++) {
		srand((unsigned int)time(NULL));
		num = rand();
		printf("%d", num);
	}
}