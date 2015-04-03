#include <stdio.h>

void yanghui_tran()
{
	int i = 0;
	int j = 0;
	int row = 0;
	printf("pls input row:\n");
	scanf("%d",&row);
	int num[row][row];
	
	for(i = 0;i < row;i ++)
	{
		for(j = 0;j <= i;j ++)
		{
			if(j == 0||i == j)
			{
				num[i][j] = 1;
			}
			else
				num[i][j] = num[i-1][j-1]+num[i-1][j];
			printf("%4d",num[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	yanghui_tran();

	return 0;
}

