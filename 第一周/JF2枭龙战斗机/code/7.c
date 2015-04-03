#include <stdio.h>

int main(void)
{
	int num = 0;
	int i = 0;
	int sum = 0;
	int ret = 1;
	
	scanf("%d",&num);
	for(i = 1; i <= num; i ++)
	{
		ret = 1;
		for(int j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("sum = %d\n",sum);

	return 0;
}
