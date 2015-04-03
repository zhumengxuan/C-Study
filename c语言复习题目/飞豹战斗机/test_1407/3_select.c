#include <stdio.h>

void sortarr(int *arr,int len)
{
	int temp = 0;
	int i = 0;
	int j = 0;
	int min = 0;

	for(i = 0;i < len - 1;i ++)
	{
		min = i;
		for(j = i + 1;j < len;j ++)
		{
			if(arr[min] > arr[j])	
				min = j;
		}
		if(min != i) 
		//判断一下，如果相等是不用交换的，即便交换也是自己和自己交换
		{
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}

int main(void)
{
	int i = 0;
	int arr[] = {2,4,6,8,0,1,3,5,7,9};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	printf("The array is;\n");
	for(i = 0;i < len;i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	sortarr(arr,len);

	printf("The sortedarray is;\n");
	for(i = 0;i < len;i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}

