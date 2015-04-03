#include <stdio.h>

int main(void)
{
	int row = 0;
	int col = 0;
	int arr[30][20] = {0};
	//int a[3];
	//求一行有多少列 / 其中一个元素
	col = sizeof(arr[0]) / sizeof(arr[0][0]); 
	// == sizeof(a)
	//求一共有多少行
	row = sizeof(arr) / sizeof(arr[0]);

	printf("row:%d\n", row);
	printf("col:%d\n", col);

	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;

	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;

	arr[2][0] = 7;
	arr[2][1] = 8;
	arr[2][2] = 9;

	//数组的维数 == 循环的个数
	for (row = 0; row < 3;row ++)
	{
		for (col = 0; col < 3;col ++)
		{
			printf("%5d", arr[row][col]);
		}
		printf("\n");
	}

	return 0;
}

