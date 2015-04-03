#include <stdio.h>
#include <math.h>

int main(void)
{
	int i = 0;
	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	for(i = 2;i <= sqrt(num);i ++)
	{
		if(num % i == 0)
		{
			printf("%d不是素数!\n",num);
			return 0;
		}
	}

	if(num != 1)
		printf("%d是素数!\n",num);

	return 0;
}

