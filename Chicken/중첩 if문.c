#include <stdio.h>
int main()
{
	int score;
	printf("ITQ������ �Է��Ͻÿ�:");
	scanf_s("%d", &score);
	
	if (score >= 400) {
		printf("A���");
	}
	else if (score >= 300) {
		printf("B���");
	}
	else if (score >= 200) {
		printf("C���");
	}
	else {
		printf("���հ�");
	}

}