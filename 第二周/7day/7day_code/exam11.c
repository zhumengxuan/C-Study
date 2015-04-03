#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int arr[3][3] = {0};

	int len = sizeof(arr)/sizeof(arr[0]);
	int len1 = sizeof(arr[0])/sizeof(arr[0][0]);
/* 
    //逐个初始化的方式，比较没技术含量的方式
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
	//这种初始化的方法要掌握
	for(i = 0;i < len * len1;i ++) 
	{
		arr[0][i] = i + 1;
		//也就是把一个二维数组用一维数组的方式初始化
	}

	printf("原始数组为:\n");
	for(i = 0;i < len;i ++) //按数组的形式输出
	{
		for(j = 0;j < len1;j ++)
		{
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < len; i ++)
	{
		printf("arr[%d][%d] = %d\n",i,i,arr[i][i]);
		sum = sum + arr[i][i]; //sum += arr[i][i];
	}
	printf("sum_to_right = %d.\n",sum);
	printf("\n");	

	sum = 0;
	for (i = 0; i < len1; i ++)
	{
		printf("arr[%d][%d]=%d\n",
				i,len1-i-1,arr[i][len1-i-1]);
		sum = sum +arr[i][len1-i-1];
	}
	printf("sum_to_left = %d.\n",sum);

	return 0;
}

