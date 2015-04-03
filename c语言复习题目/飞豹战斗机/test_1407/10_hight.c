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
			if(j == 0)
				num[i][j] = 1;
			else if(i == j)
				num[i][j] = 1;
			else
				num[i][j] = num[i-1][j-1] + num[i-1][j];
			
			printf("%5d",num[i][j]);
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

