#include <stdio.h>

void fill_arr(int *a2, int *a1,int len)
{
	int i = 0;
	a2 = a1; //填写过去
	//此时a1和a2都是指针,所以可以进行直接赋值
	//此时“填写”相当于a1和a2用的是同一块内存地址，修改a1也会影响a2
	//但是"拷贝"a1给a2后，修改a1是不会影响a2的。
	//“填写”与“拷贝”是不同的
	//填写是通过指针获得了a1的地址，从而a2也有了值

	printf("原始数组arr1:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",*(a1 + i));	
	}
	printf("\n");
	
	printf("填写成的数组arr2:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",*(a2 + i));	
	}
	printf("\n");
	
	a1[1] = 999;//这一句是用来验证a1改变了，a2会不会改变的语句

	printf("修改了原始数组arr1后的arr1数组:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",*(a1 + i));	
	}
	printf("\n");
	
	printf("修改了原始数组arr1后的arr2数组:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",*(a2 + i));	
	}
	printf("\n");
}

int main(void)
{
	int len = 0;
	int  arr1[] = {0,1,2,3,4,5,6,7,8,9};
	int  *p = arr1;
	len = sizeof(arr1)/sizeof(arr1[0]);
	int  arr2[len];

	fill_arr(arr2,arr1,len);

	return 0;
}

