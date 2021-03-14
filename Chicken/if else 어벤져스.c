#include <stdio.h>

int main()
{
	int a;
	printf("엔드게임을 봤습니까?(y/n):");
	scanf_s("%d", &a);

	if (a == 'y') {
		printf("또 본다 \n");
	}else {
		printf("보러간다 \n");
	}
}