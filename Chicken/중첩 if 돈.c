#include <stdio.h>
int main()
{
	int money;
	printf("���� ���� �Է��Ͻÿ�(��):");
	scanf_s("%d", &money);

	if (money >=10000) {
		printf("����");
	}
	else if (money >= 5000) {
		printf("����");
	}
	else if (money >= 1000) {
		printf("����");
	}
	else {
		printf("��������");
	}

}