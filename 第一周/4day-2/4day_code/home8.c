#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int mul = 1;
	int sum = 0;

	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	for(j = 1;j <= num;j ++)
	{
		mul = 1;
		for(i = 1;i <= j;i ++)
		{
			mul *= i;
		}
		sum += mul;
	}
	printf("sum = %d\n",sum);

	return 0;
}

