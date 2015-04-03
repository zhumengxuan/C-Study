#include <stdio.h>

void printf_sanjiao(int n)
{
	int i = 0;
	int j = 0;
	int arr[n][n];

	for(i = 0; i < n; i ++)
	{
		for(j = 0; j <= i; j ++)
		{
			if(j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			}
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int n = 0;
	printf("请输入行数:\n");
	scanf("%d",&n);
	printf_sanjiao(n);

	return 0;
}
