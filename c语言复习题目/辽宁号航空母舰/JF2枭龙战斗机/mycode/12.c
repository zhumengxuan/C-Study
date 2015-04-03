#include <stdio.h>

int main(void)
{
	int arr[] = {1,2,3,4,5,6};
	int i = 0;
	int len = sizeof(arr)/sizeof(arr[0]);
	int temp = 0;

	printf("逆序前的数组:\n");
	for(i = 0; i < len; i++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");

	for(i = 0; i < len/2; i ++)
	{
		temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}

	printf("逆序后的数组:\n");
	for(i = 0; i <len ; i ++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");


	return 0;
}
