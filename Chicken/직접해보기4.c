#include <stdio.h>
void main(void)
{
	int a,b;
	printf("����Ʈ�� ���� �Է��Ͻÿ� (����Ʈ �Ǵ� ����� 5):");
	scanf_s("%d", &a);
	b = 5 << a;
	printf("5�� �������� %d��ŭ shift�ϸ� %d �Դϴ�.",a,b );
}