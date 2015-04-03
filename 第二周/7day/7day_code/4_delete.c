#include <stdio.h>

int main(void)
{
	int arr[] = {1,2,3,4,5,6};
	// 1 2 3 4 5 6
	// 中间过程：2 3 4 5 0 6
	// 2 3 4 5 6 0
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int index = 1; //删除第1个元素

	//实现数组的左移操作
	for (i = index; i < len; i ++)
	{
		//将当前元素向左移动
		arr[i - 1] = arr[i];	
		//将当前元素设置为0
		arr[i] = 0; //这里是把最后一个元素设置为0
	}
//	len--; //总的个数减1

	for (i = 0; i < len; i ++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

