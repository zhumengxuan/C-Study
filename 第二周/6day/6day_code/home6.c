#include <stdio.h>

int main(void)
{
	int n = 0;
	printf("pls input n:\n");
	scanf("%d",&n);

	int i = 0;
	int j = 0;
	int k = 0;

	for(i = 0;i < n;i += 2,k ++)
	{
		for(j = 0;j < k;j ++)
		{
			printf(" ");
		}

		for(j = 0;j < n-i;j ++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

