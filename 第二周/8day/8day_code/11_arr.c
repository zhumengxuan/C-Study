#include <stdio.h>

int main(void)
{
	int arr[10] = {99,2,3,4,5,6,7,8,9,0};
	//声明了一个指向arr数组的指针变量
	//指向数组的指针
	int *p = &arr[0];
	//int *p = arr;
	printf("arr[0] = %d\n", *p);
	//+1后指向下一个元素
	//实际上加了1个sizeof(int)的大小
	printf("arr[1] = %d\n", *(p + 1));

	/*
	int i;
	for (i = 0; i < 10; ++i)
	{
		printf("arr[%d] = %d\n", i,*(p + i));
	}
	*/
	return 0;
}

