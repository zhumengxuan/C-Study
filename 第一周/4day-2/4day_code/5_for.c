#include <stdio.h>

int main(void)
{
	int i = 0;

	for(i = 1;i < 100;i += 2)
	{
		printf("%5d",i);
	}
	printf("\n");

	return 0;
}

