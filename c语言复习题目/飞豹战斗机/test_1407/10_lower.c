#include <stdio.h>

void yanghui_tran(int n)
{
	int i = 0;
	int j = 0;
	int num[n][n];

	for(i = 0;i < n;i ++)
	{
		for(j = 0;j <= i;j ++)
		{
			num[i][j] = 1; //第一次全部赋为1值
		}
	}

	printf("先打印出来看一下初步效果:\n"); //先打印出来看一下
	for(i = 0;i < n;i ++)
	{
		for(j = 0;j <= i;j ++)
		{
			printf("%5d ",num[i][j]);
		}
		printf("\n");
	}

	for(i = 2;i < n;i ++)
	{//只是这样做不好，会重复做一些工作
		for(j = 1;j <= i - 1;j ++)
		{//然后再从第二行、第一列开始进行覆盖成新值
			num[i][j] = num[i-1][j-1] + num[i-1][j];
		}
	}

	printf("杨辉三角为:\n");
	for(i = 0;i < n;i ++)
	{
		for(j = 0;j <= i;j ++)
		{
			printf("%5d ",num[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int n = 0;
	printf("pls input n:\n");
	scanf("%d",&n);

	yanghui_tran(n);

	return 0;
}

