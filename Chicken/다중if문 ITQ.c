#include <stdio.h>
int main()
{
	int score;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &score);

	if (score >= 400) {
		printf("A���\n");
	}
	if (score >= 300) {
		printf("B���\n");
	}
	if (score >= 200) {
		printf("C���\n");
	}
	if (score >= 0) {
		printf("���հ�\n");
	}
}