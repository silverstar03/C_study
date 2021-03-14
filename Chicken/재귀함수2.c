#include <stdio.h>
int func(int num);

int func(int num) {
	if (num == 1) {
		return 1;
	}
	else {
		return num + func(num - 1);
	}
}
void main(void)
{
	int num;
	printf("값을 입력하시오 : ");
	scanf("%d", &num);
	printf("%d\n", func(num));
}