#include <stdio.h>
int main()
{
	int score;
	printf("ITQ점수를 입력하시오:");
	scanf_s("%d", &score);
	
	if (score >= 400) {
		printf("A등급");
	}
	else if (score >= 300) {
		printf("B등급");
	}
	else if (score >= 200) {
		printf("C등급");
	}
	else {
		printf("불합격");
	}

}