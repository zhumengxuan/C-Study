#include <stdio.h>

void sortarr(int *arr, int len)
{
	int min = 0;
	int i = 0;
	int j = 0;
	int temp = 0;

	for(i = 0; i < len - 1; i ++)
	{
		min = i;
		for(j = i + 1; j < len; j ++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}

		if(min != i)//不要忘记
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}


int main(void)
{
	int arr[] = {1,4,6,72,3,40,3,5,9};
	int len = sizeof(arr)/sizeof(arr[0]);
	int i = 0;

	printf("排序前:\n");
	for(i = 0 ;i < len ; i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	sortarr(arr,len);

	printf("排序后:\n");
	for(i = 0; i < len; i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}
