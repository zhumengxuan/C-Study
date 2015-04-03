#include <stdio.h>

int main(void)
{
	int i = 0;
	int min = 0;
	int pos = 0;
	int len = 0;
	int temp = 0;
	int arr[] = {4,5,1,2,3};

	min = arr[0];
	pos = 0;
	len = sizeof(arr) / sizeof(arr[0]);

	printf("The array sort is:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n");

	for(i = 0;i < len;i ++)
	{
		if(min > arr[i])	
		{
			min = arr[i];
			pos = i;
		}
	}
	
	temp = arr[pos];
	arr[pos] = arr[0];
	arr[0] = temp;

	printf("Now the sort is:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n");

	return 0;
}

