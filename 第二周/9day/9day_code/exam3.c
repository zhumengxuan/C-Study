#include <stdio.h>

int main(void)
{
	int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int (*p)[4] = arr; //数组和数组指针联系起来
	int len1 = sizeof(arr)/sizeof(arr[0]);//行数
	int len2 = sizeof(arr[0])/sizeof(arr[0][0]);//列数
	int len = len1 * len2;//总元素个数

	int i = 0;
	int j = 0;

	printf("The array is:\n");
	for(i = 0;i < len1; i ++)
	{
		for(j = 0;j < len2; j ++)
		{
			//printf("arr[%d][%d] = %4d\n",i,j,*(*(p+i)+j));
			printf("%4d",*(*(p + i) + j));
		}
		printf("\n");
	}

	return 0;
}

