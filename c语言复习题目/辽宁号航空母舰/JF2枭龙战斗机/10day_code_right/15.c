//这是用数组和循环处理“约瑟夫”问题
#include <stdio.h>

int main(void)
{
	int n = 0;
	int i = 0, j = 0;
	printf("pls input the n:\n");
	scanf("%d", &n);
	int arr[n];

	for(i = 0; i < n; i ++)
	{
		arr[i] = i+1;
	}

	for(i = 0; i < n; i ++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n");

	int len = n;
	int count = 0;
	int r = 0;
	int num = n;

	i = 0;
	while(num > 1) //核心部分
	{
		if(arr[i]!=0)
		{
			count ++;
			if(count == 3)
			{
				count = 0;
				arr[i] = 0;
				num--;				
			}
		}

		if(i == len - 1)
			i = -1;
		i++;
	}

		for(i=0;i<n;i++)
		{
			if(arr[i]!=0)
				printf("%d", arr[i]);
		}
		printf("\n");
	
	return 0;
}

