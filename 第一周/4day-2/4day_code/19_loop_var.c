#include <stdio.h>

int main(void)
{
	int i = 0;
	for (i = 1; i <= 10; ++i)
	{
		printf("i = %d ", i);
	}
	printf("循环外:i = %d\n", i);

	return 0;
}

