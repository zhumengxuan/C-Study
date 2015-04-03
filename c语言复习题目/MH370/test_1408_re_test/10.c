#include <stdio.h>

void yanghui_tran(int N)
{
	int num[N][N];	
	int i = 0;
	int j = 0;

	for(i = 0;i < N;i ++)
	{
		for(j = 0;j <= i;j ++)
		{
			if(j ==0||i == j)
			{
				num[i][j] = 1;
			}
			else
				num[i][j] = num[i-1][j-1]+num[i-1][j];
			printf("%5d",num[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int N;
	printf("请输入N的值:\n");
	scanf("%d",&N);

	yanghui_tran(N);

	return 0;
}

