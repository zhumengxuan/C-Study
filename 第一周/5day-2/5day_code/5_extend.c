#include <stdio.h>

int main(void)
{
	char a = 0x11;
	int c = a;

	printf("c = %d\n",c);

	char a2 = -0x11;
	int d = a2;

	printf("d = %d\n",d);

	return 0;
}

