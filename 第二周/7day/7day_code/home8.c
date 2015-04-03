#include <stdio.h>

int main(void)
{
	int n = 0;
	printf("pls input n:\n");
	scanf("%d",&n);

	int num[n][n];
	int i = 0;
	int j = 0;
	int temp = 0;

	for(i = 0;i < n*n;i ++)
	{
		num[0][i] = i + 1;
	}

	printf("原始数组为:\n");
	for(i = 0;i < n;i ++)
	{
		for(j = 0;j < n;j ++)
		{
			printf("%3d",num[i][j]);
		}
		printf("\n");
	}

	for(i = 0;i < n;i ++)	
	{
		//错误写法:for(j = 1;j < n;j ++)	
		//不好写法:for(j = i;j < n;j ++)
		//正确写法:
		for(j = i + 1;j < n;j ++)
		{
			temp = num[i][j];//交换转置
			num[i][j] = num[j][i];
			num[j][i] = temp;
		}
	}

	printf("转置后的数组为:\n");
	for(i = 0;i < n;i ++)
	{
		for(j = 0;j < n;j ++)
		{
			printf("%3d",num[i][j]);
		}
		printf("\n");
	}

	return 0;
}

