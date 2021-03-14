#include <stdio.h>

void main(void)
{
	int c_score, j_score, com_score;
	printf("c언어 점수를 입력하세요 : ");
	scanf("%d", &c_score);

	if (c_score >= 90 && c_score <= 100)
		printf("A\n");
	else if (c_score >= 80)
		printf("B\n");
	else if (c_score >= 70)
		printf("C\n");
	else
		printf("D\n");

	printf("java 점수를 입력하세요 : ");
	scanf("%d", &j_score);

	if (j_score >= 90 && j_score <= 100)
		printf("A\n");
	else if (j_score >= 80)
		printf("B\n");
	else if (j_score >= 70)
		printf("C\n");
	else
		printf("D\n");

	printf("컴구 점수를 입력하세요 : ");
	scanf("%d", &com_score);

	if (com_score >= 90 && com_score <= 100)
		printf("A\n");
	else if (com_score >= 80)
		printf("B\n");
	else if (com_score >= 70)
		printf("C\n");
	else
		printf("D\n");
}