#include <stdio.h>

int factorial(int a);
int factorial2(int a);

 void main(void)
{
	 printf("%d \n", factorial(4));
	 printf("%d \n", factorial2(4));
}

 int factorial(int a)
 {
	 // if���� �Ǻθ� �κ��� ������
	 // �ٲ�� �ȴٸ�?
	 if (a == 0)
		 return 1;

	 return a * factorial(a - 1);
 }

 int factorial2(int a)
 {
	 int pi = 1;
	 while (a > 1)
	 {
		 pi *= a;
		 a--;
	 }
	 return pi;
 }