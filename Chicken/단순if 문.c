#include <stdio.h>

int main() {
	
	int score;
	printf("성적을 입력하라:\n");
	scanf_s("%d", &score);
	
	if (score >= 200) {
		printf("합격입니다!!");
	}
}