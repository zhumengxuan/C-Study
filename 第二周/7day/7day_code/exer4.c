#include <stdio.h>

int main(void)
{
	int max = 0;
	int maxi = 0;
	int num[10] = {0};
	int len = sizeof(num)/sizeof(num[0]);

	int i = 0;
	for(i = 0;i < len;i ++)
	{
		scanf("%d",&num[i]);
	}

	max = num[0];
	for(i = 0;i < len;i ++)
	{
		if(max < num[i])
		{
			max = num[i];
			maxi = i;
		}
	}

	printf("最大值为:%d\n",max);
	printf("最大值的下标为:%d\n",maxi);

	return 0;
}

