#include <stdio.h>

void main(void)
{
	int i = 1;
	while (i > 0) {
		printf("양의 정수를 입력하세요:");
		scanf_s("%d", &i);
	}
	printf("잘못 입력했습니다.\n");
}