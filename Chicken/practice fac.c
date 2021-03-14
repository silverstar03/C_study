#include <stdio.h>

int fac(int a);

void main(void)
{
	printf("5의 factorial은 %d 입니다. \n", fac(5));
}

int fac(int a) {
	if (a == 0) {
		return 1;
	}
	return a * fac(a - 1);
}