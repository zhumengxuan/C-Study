#include <stdio.h>

void josefu(int n)
{
	int i = 0;
	int count = 0;
	int num[n];

	for(i = 0;i < n;i ++)
	{
		num[i] = i + 1;
		printf("%3d",num[i]);
	}
	printf("\n");
	
	i = 0;
	int len = n;
	while(n > 1)	
	{
		if(num[i] != 0)
		{
			count ++;
		}

		if(count == 3)
		{
			num[i] = 0;
			count = 0;
			n --;
		}

		if(i == len - 1)
			i = -1;

		i ++;
	}

	printf("最后留下的是原来的:\n");
	for(i = 0;i < len;i ++)
	{
		if(num[i] != 0)
			printf("%d",num[i]);
	}
	printf("\n");
}

int main(void)
{
	int n = 0;
	printf("请输入围圈报数的人数:\n");
	scanf("%d",&n);

	josefu(n);

	return 0;
}

