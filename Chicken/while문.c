#include <stdio.h>

void main(void)
{
	int i = 1;

	while (i > 0)
	{
		printf("양의 정수 입력:");
		scanf_s("%d", &i);
	}
	printf(" ");
	printf("잘못 입력하셨습니다.");
}