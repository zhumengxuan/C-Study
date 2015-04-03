#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;//比较大的空桶

	for(i = 1;i < 11;i ++)
	{
		sum = sum + i; //sum += i;
	}

	printf("%d\n",sum);

	return 0;
}

