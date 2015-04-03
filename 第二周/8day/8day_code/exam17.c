#include <stdio.h>

int main(void)
{
	int i = 0;
	int len = 0;
	int  arr1[] = {0,1,2,3,4,5,6,7,8,9};
	int  *p = arr1;
	len = sizeof(arr1)/sizeof(arr1[0]);
	int  arr2[len];


	//这样是正确的数组之间赋值的方法
	for(i = 0;i < len;i ++)
	{
		//正确的方法是统一定义，分开使用
		arr2[i] = arr1[i];
	}

	//这样是错误的数组之间赋值的方法
	//arr2 = arr1;

	//原因：arr2和arr1都是数组名,数组名是地址常量
	//地址常量是不能赋值的，所以会报错

	printf("原始数组arr1:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",*(arr1 + i));	
	}
	printf("\n");
	
	printf("复制成的数组arr2:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",*(arr2 + i));	
	}
	printf("\n");

	return 0;
}

