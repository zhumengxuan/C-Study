#include <stdio.h>

int main(void)
{
	int n = 0;
	int i, j;
	int temp = 0;
	
	printf("pls input n:\n");
	scanf("%d", &n);
	int arr[n][n];

	printf("pls input n*n numbers:\n");
	for(i = 0; i < n; i ++)
	{
		for(j = 0; j < n; j ++)
		{
			scanf("%d", &arr[i][j]);//输入矩阵
		}
	}

	printf("The juzhen is:\n");
	for(i = 0; i < n; i ++)
	{
		for(j = 0; j < n; j ++)
		{
			printf("%d", arr[i][j]);//输出矩阵
		}
		printf("\n");
	}
	//这是根据右上侧的内容来控制循环的
	for(i = 0; i < n; i ++)//外循环从0到n，因为有n阶
	{
		for(j = i+1; j < n; j ++)//内循环从i＋1开始，因为对角线不用交换
		{
			temp = arr[i][j];
			arr[i][j] = arr[j][i];//交换，实现转置的目的
			arr[j][i] = temp;
		}
	}

	/*
	//这样也是可以的，这是根据左下侧的内容来控制循环的
	for(i = 0; i < n; i ++)
	{
		for(j = 0; j < i; j ++)//i为0的时候不循环，i为1的时候循环1次，i为2
		//的时候循环2次，以此类推。
		{
			temp = arr[i][j];
			arr[i][j] = arr[j][i];//交换，实现转置的目的
			arr[j][i] = temp;
		}
	}
	*/

	printf("Now the new juzhen is:\n");
	for(i = 0; i < n; i ++)
	{
		for(j = 0; j < n; j ++)
		{
			printf("%d", arr[i][j]);//输出新矩阵
		}
		printf("\n");
	}
	
	return 0;
}

