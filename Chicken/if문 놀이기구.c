#include <stdio.h>

void main(void)
{
	int t;
	printf("키를 입력하시오(단위cm):");
	scanf_s("%d", &t);

	if (t >= 150) {
		printf("놀이기구를 탈 수 있음");
	}
}