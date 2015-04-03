#include <stdio.h>

int main(void)
{
	int a = 2;
	int b = 8;
	int c;

	c = a > b ? a : b;
	printf("c=%d\n",c);

	return 0;
}
