#include <stdio.h>

void main(void)
{
	int a, b, c = 0;
	a = ++c;	//1
	printf("%d \n", c);//1
	b = c++;	//b�� 1�� �ְ� 2�� ��
	printf("%d \n", c);//2
	printf("%d %d %d \n", a, b, ++c);//1,1,3
}