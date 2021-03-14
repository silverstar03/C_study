#include <stdio.h>

void print_rank(int score)
{
	if (score >= 90 && score <= 100) {
		printf("A \n");
	}
	else if (score >= 80) {
		printf("B \n");
	}
	else if (score >= 70) {
		printf("C \n");
	}
	else {
		printf("D \n");
	}
}

void main(void)
{
	int c_score;
	int j_score;
	int com_score;

	printf("C언어 점수입력:");
	scanf("%d", &c_score);
	print_rank(c_score);
	
	printf("자바 점수입력:");
	scanf("%d", &j_score);
	print_rank(j_score);
	
	printf("컴구 점수입력:");
	scanf("%d", &com_score);
	print_rank(com_score);
	
}