#include <stdio.h>

int main(void)
{
	int j = 0;
	int i = 0;
	int n = 0;
	printf("请输入n:\n");
	scanf("%d",&n);

	for(i = 0; i < n; i += 2)
	{
		for(j = 1; j < i; j += 2)
		{
			printf(" ");
		}

		for(j = n - 1; j >= i ; j --)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
