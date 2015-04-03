#include <stdio.h>

int main(void)
{
	int n = 0;
	int sum = 0;
	int i = 0;
	int j = 0;
	int ret = 1;

	printf("请输入n值:\n");
	scanf("%d",&n);

	for(i = 1; i <= n; i ++)
	{
		for(j = 1; j <= i; j ++)
		{
			ret *= j; 
		}
		sum += ret;
	}

	printf("sum = %d\n",sum);

	return 0;
}
