#include <stdio.h>
int main()
{
	int food;
	printf("»ç°í ½ÍÀº À½½ÄÀ» °ñ¶ó¶ó\n1.¶±²¿Ä¡\n2.ÇÖµµ±×\n3.¼Ò¶±¼Ò¶±\n");
	scanf_s("%d", &food);

	if (food == 1) {
		printf("¶±²¿Ä¡ ¿©±â¿ä~");
	}
	if (food == 2) {
		printf("ÇÖµµ±× ¿©±â¿ä~");
	}
	if (food == 3) {
		printf("¼Ò¶±¼Ò¶± ¿©±â¿ä~");
	}
}