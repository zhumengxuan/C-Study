#include <stdio.h>

int main(void)
{
	int n = 0; //输入一个n值
	printf("请确定数组的阶数n:\n");
	scanf("%d",&n);

	int arr[n][n];
	int i = 0;
	int j = 0;
	int sum = 0;
/* 
    //逐个初始化的方式，比较没技术含量的方式
	//但是特殊数组只能这样初始化
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;

	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;

	arr[2][0] = 7;
	arr[2][1] = 8;
	arr[2][2] = 9;
*/
	for(i = 0;i < n * n;i ++) //这种初始化的方法要掌握
	{
		arr[0][i] = i + 1;
		//也就是把一个二维数组用一维数组的方式初始化
	}

	printf("The array is:\n");
	for(i = 0;i < n;i ++) //按数组的形式输出
	{
		for(j = 0;j < n;j ++)
		{
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < n; i ++)
	{
		printf("arr[%d][%d]=%d\n",i,i,arr[i][i]);
		sum = sum + arr[i][i];
	}
	printf("sum_to_right = %d.\n",sum);

	sum = 0;
	for (i = 0; i < n; i ++)
	{
		printf("arr[%d][%d]=%d\n",
				i,n-i-1,arr[i][n-i-1]);
		sum = sum + arr[i][n-i-1];
	}
	printf("sum_to_left = %d.\n",sum);

	return 0;
}

