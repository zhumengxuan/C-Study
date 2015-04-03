#include <stdio.h>

int main(void)
{
	int a = 0;
	int n = 0;
	int sum = 0;
	int i = 0;
	int j = 0;
	int ret = 0;
	printf("请输入一个数:\n");
	scanf("%d",&a);
	getchar();
	printf("请输入相加的次数:\n");
	scanf("%d",&n);

	for(i = 0; i < n; i ++)
	{
		ret = 0;
		for(j = 0; j <= i; j ++)
		{
			ret = 10 * ret + a;
		}
		sum += ret;
	}

	printf("sum = %d\n",sum);

	return 0;
}
