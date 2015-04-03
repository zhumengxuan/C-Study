#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;

	for(i = 0;i < 3;i ++)
	{
		for(j = 0;j <= i;j ++)
		{
			printf("*");
		}
		printf("\n");	
	}

	printf("\n");

	for(i = 0;i < 3;i ++)
	{
		for(j = 0;j < 3-i;j ++)
		{
			printf("*");
		}
		printf("\n");	
	}

	return 0;
}

