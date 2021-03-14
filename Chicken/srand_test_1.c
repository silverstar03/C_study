#include <stdio.h>
#include <stdlib.h>
 
void main(void) {
	int num;
	for (int i = 0; i < 10; i++) {
		num = rand();
		printf("%d", num);
	}
}
