#include <stdio.h>
int main()
{
	int food;
	printf("��� ���� ������ ����\n1.����ġ\n2.�ֵ���\n3.�Ҷ��Ҷ�\n");
	scanf_s("%d", &food);

	if (food == 1) {
		printf("����ġ �����~");
	}
	if (food == 2) {
		printf("�ֵ��� �����~");
	}
	if (food == 3) {
		printf("�Ҷ��Ҷ� �����~");
	}
}