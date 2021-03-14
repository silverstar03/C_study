#include <stdio.h>
void main(void)
{
	int a,b;
	printf("쉬프트할 값을 입력하시오 (쉬프트 되는 대상은 5):");
	scanf_s("%d", &a);
	b = 5 << a;
	printf("5를 왼쪽으로 %d만큼 shift하면 %d 입니다.",a,b );
}