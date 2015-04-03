#include <stdio.h>

int main(void)
{
	int sum = 1;
	int i = 0;

	for(i = 1; i < 10; i ++)
	{
		sum = (sum + 1) * 2;
	}

	printf("sum = %d\n",sum);

	return 0;
}
