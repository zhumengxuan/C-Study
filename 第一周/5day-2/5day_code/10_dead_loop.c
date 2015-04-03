#include <stdio.h>

int main(void)
{
	unsigned char i;

	for(i = 10;i >= 0;i --)
		printf("%5u",i);

	printf("\n");

	return 0;
}
