#include <stdio.h>

int main(void)
{
	int arr[] = {1,2,3,4,5,6};
	int i = 0;
	int temp = 0;

	int len = sizeof(arr)/sizeof(arr[0]);
	for(i = 0; i < len/2; i ++)
	{
		temp = arr[i];
		arr[i] = arr[len - 1 - i]; //注意：是len-1-i
		arr[len - 1 - i] = temp;
	}

	for(i = 0; i < len; i ++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

