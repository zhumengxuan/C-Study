/*==========================
杨辉三角：
规律：
当为第一列或者是行和列相等时值为1
否则 a[i][j] = a[i - 1][j - 1] + a[i - 1][j]
===========================*/
#include <stdio.h>

int main(void)
{
	int arr[10][10] = {};
	int i, j;
	
	for(i = 0; i < 10; i ++)
	{
		for(j = 0; j <= i; j ++)
		{	
			if(j == 0 || i == j)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

