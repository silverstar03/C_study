#include <stdio.h>

void main(void)
{
	int a = 15;		//int = 4 byte
	char b = 'A';	//단일문자형

	printf("sizeof(a) = %d \n", sizeof(a));
	printf("sizeof(b) = %d \n", sizeof(b));
	printf("sizeof(int) = %d \n", sizeof(int));
	printf("sizeof(double) = %d \n", sizeof(double));

}