#include <stdio.h>
void main(void)
{
	int a;
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &a);
	if (a < 10) {
		printf("����%d(��)�� 10���� �۽��ϴ�.",a);
	}
	else if (a > 10) {
		printf("����%d(��)�� 10���� Ů�ϴ�.",a);
	}
	else if (a = 10) {
		printf("����%d(��)�� 10�Դϴ�.", a);
	}
}