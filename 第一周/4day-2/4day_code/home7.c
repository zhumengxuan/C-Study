#include <stdio.h>

int main(void)
{
	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	int i = 0;
	int j = 0;
	for(i = 0;i < num;i ++)
	{
		for(j = 2*(num-i-1);j > 0;j --)
		{
			printf(" ");
		}

		for(j = 0;j <= i;j ++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

