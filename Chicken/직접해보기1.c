#include <stdio.h>
void main(void)
{

	int a;
	printf("숫자를 입력하세요:");
	scanf_s("%d", &a);
	if (a > 10 && a < 20) {
		printf("숫자 %d는 10보다 크고 20보다 작습니다.", a);
	}
	else {
		printf("숫자 %d는 조건에 부합하지 않습니다.", a);
	}
}