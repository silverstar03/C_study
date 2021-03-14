#include <stdio.h>
int main()
{
	int score;
	printf("점수를 입력하시오:");
	scanf_s("%d", &score);

	if (score >= 400) {
		printf("A등급\n");
	}
	if (score >= 300) {
		printf("B등급\n");
	}
	if (score >= 200) {
		printf("C등급\n");
	}
	if (score >= 0) {
		printf("불합격\n");
	}
}