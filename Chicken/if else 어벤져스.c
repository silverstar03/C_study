#include <stdio.h>

int main()
{
	int a;
	printf("��������� �ý��ϱ�?(y/n):");
	scanf_s("%d", &a);

	if (a == 'y') {
		printf("�� ���� \n");
	}else {
		printf("�������� \n");
	}
}