#include <stdio.h>

int main(void)
{
	int arr[5] = {1,2,3,4,0};
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int index = 0; //插入到数组的头部的情况
	//从倒数第二个元素开始向右移动
	for (i = len - 2; i >= index; i --)
	{
		//后一个元素的内容等于前一个元素的内容
		//第一次循环: 1,2,3,4,4  4向右移动
		//第二次循环: 1,2,3,3,4  3向右移动
		//第三次循环: 1,2,2,3,4	 2向右移动
		//第四次循环: 1,1,2,3,4	 1向右移动

		arr[i + 1] = arr[i];			
	}
	//插入一个元素到第一个元素的位置
	arr[index] = 100;

	for (i = 0; i < len; i ++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

