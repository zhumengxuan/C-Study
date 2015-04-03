#include <stdio.h>

int main(void)
{
	int i = 0;
	for (i = 1; i <= 200; ++ i)
	{
		printf("%-5d", i);
		if ((i % 7 == 0) && (i % 17 == 0))	
		{
			break;
		}
	}
	printf("\ni = %d\n", i);

	return 0;
}

