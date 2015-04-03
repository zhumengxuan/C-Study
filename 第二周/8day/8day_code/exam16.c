#include <stdio.h>

void copy_arr(int *a2, int *a1,int len)
{
	int i = 0;

	for(i = 0;i < len;i ++)
	{
		a2[i] = a1[i]; //复制过去
	}
	
	printf("原始数组arr1:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",*(a1 + i));	
	}
	printf("\n");
	
	printf("复制成的数组arr2:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",*(a2 + i));	
	}
	printf("\n");

	a1[1] = 999;//这一句是用来验证a1是否会随着a2一起改变的

	printf("修改原始数组arr1后的arr1数组:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",*(a1 + i));	
	}
	printf("\n");
	
	printf("修改原始数组arr1后的arr2数组:\n");
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

	copy_arr(arr2,arr1,len);

	return 0;
}

