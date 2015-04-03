#include <stdio.h>

//冒泡排序函数
void sort(int *s,int len)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for(i = 0;i < len - 1;i ++)
	{
		for(j = 0;j < len - 1 - i;j ++)
		{
			if(*(s + j) > *(s + j + 1))	
			{
				temp = *(s + j);
				*(s + j) = *(s + j + 1);
				*(s + j + 1) = temp;
			}
		}
	}
}

int main(void)
{
	int i = 0;
	int len = 0;
	int arr[] = {9,4,7,3,2,0,1,5,8,6};
	len = sizeof(arr) / sizeof(arr[0]);
	
	printf("排序前的数组:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",*(arr+i));
	}
	printf("\n");

	sort(arr,len); //冒泡排序函数

	printf("排序后的数组:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",*(arr + i));
	}
	printf("\n");

	return 0;
}

