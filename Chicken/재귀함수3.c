#include <stdio.h>

int func(int num);

int func(int num) {
	for (int i = 1; i < num; i++) {
		if (num == 1) {
			return 1;
		}
		else if (i % 2 == 1) {
			return num - func(num - 1);
		}
		else if (i % 2 == 0) {
			return num + func(num - 1);
		}
	}
}

void main(void)
{
	int num;
	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	printf("%d \n", func(num));
}