#include <stdio.h>

void select_sort(int *p,int len)
{
	int i = 0;
	int j = 0;
	int min = 0; //min是个下标
	int temp = 0;//temp中间变量

	for(i = 0;i < len-1;i ++)	
	{
		min = i;
		for(j = i + 1;j < len;j ++)
		{
			if(*(p + min) > *(p + j))
			{
				min = j; //记录下标
			}
		}

		//每轮交换一次
		temp = *(p + min);
		*(p + min) = *(p + i);
		*(p + i) = temp;
	}
}

int main(void)
{
	int i = 0;
	int num[] = {2,4,6,8,0,1,3,5,7,9};
	int len = sizeof(num) / sizeof(num[0]);
	
	printf("排序前的数组为:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%3d",num[i]);
	}
	printf("\n");

	select_sort(num,len); //选择排序函数

	printf("排序后的数组为:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%3d",num[i]);
	}
	printf("\n");

	return 0;
}

