#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	int num;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++) {
		num = rand() % 46 + 25;
		printf("%d\n", num);
	}
}