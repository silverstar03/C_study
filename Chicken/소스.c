#include <stdio.h>

int func(int a)
{
	if (a >= 1) {
		printf("%d \n", a);
		return func(a - 1);
	}
}

void main(void)
{
	func(10);
}