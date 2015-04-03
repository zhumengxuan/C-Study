#include <stdio.h>

int main(void)
{
	int i = 0;
	int temp = 0;
	int arr[] = {1,2,3,4,5,6};
	int len = sizeof(arr) / sizeof(arr[0]);

	//实现数组的逆序保存
	for (i = 0; i < len / 2; i ++)
	{
		//依次交换首尾两数
		temp = arr[i];
		arr[i] = arr[len - i - 1];	
		arr[len - i - 1] = temp;
	}

	for (i = 0; i < len; i ++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

