#include <stdio.h>

int main(void)
{
	int arr[] = {1,2,3,4,5,6};
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int temp = 0;

	printf("交换前の数组:\n");
	for (i = 0; i < len; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	//实现数组的逆序保存
//	for (i = 0; i < len / 2; ++i)
	//{
		//依次交换首尾两数
		temp = arr[len-1];
		arr[len-1] = arr[0];	
		arr[0] = temp;
	//}

	printf("交换后の数组:\n");
	for (i = 0; i < len; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

