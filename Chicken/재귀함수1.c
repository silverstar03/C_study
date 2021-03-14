#include <stdio.h>

int print(int a) {
	if (a > 0){
		printf("%d¸¦ Ãâ·Â\n", a);
		return print(a - 1);
	}
}

void main(void) {
	print(5);
}