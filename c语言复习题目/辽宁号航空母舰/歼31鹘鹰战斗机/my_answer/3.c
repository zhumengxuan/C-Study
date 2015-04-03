#include <stdio.h>

void sortarr(int *arr, int len)
{
	int i = 0;
	int j = 0;
	int min = 0;
	int temp = 0;

	for(i = 0; i < len - 1; i ++)
	{
		min = i;
		for(j = min + 1; j < len; j ++)
		{
			if(arr[min] > arr[j])
				min = j;
		}

		if(min != i)
		{
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}

int main(void)
{
	int arr[] = {10,9,8,7,6,5,4,3,2,1};
	int len = sizeof(arr)/sizeof(arr[0]);
	int i = 0;

	sortarr(arr,len);
	for(i = 0; i < len; i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}
