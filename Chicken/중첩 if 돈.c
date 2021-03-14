#include <stdio.h>
int main()
{
	int money;
	printf("가진 돈을 입력하시오(원):");
	scanf_s("%d", &money);

	if (money >=10000) {
		printf("부자");
	}
	else if (money >= 5000) {
		printf("보통");
	}
	else if (money >= 1000) {
		printf("거지");
	}
	else {
		printf("빈털털이");
	}

}