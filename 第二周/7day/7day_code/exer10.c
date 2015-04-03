#include <stdio.h>

int main(void)
{
	int n = 0;
	printf("pls input n:\n");
	scanf("%d",&n);

	int i = 0;
	int j = 0;
	int num[n][n];

	for(i = 0;i < n * n;i ++)
	{
		num[0][i] = 0;
	}

	for(i = 0;i < n;i ++)
	{
		for(j = 0;j <= i;j ++) //注意：要取到i即j <= i
		{
			if(i == j || j == 0) //注意：是j == 0
				num[i][j] = 1;
			else
				num[i][j] = num[i-1][j] + num[i-1][j- 1];

			printf("%3d",num[i][j]);
		}
		printf("\n"); //换行不要忘记，否则打不出三角效果
	}

	return 0;
}

