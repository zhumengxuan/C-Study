#include <stdio.h>

void print_arr(int *arr, int len)
{
	int i = 0; 
	/*不能在这里这样写，这样写是错误的
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("sizeof(arr) = %d\n",sizeof(arr));
	printf("sizeof(arr[0] = %d\n",sizeof(arr[0]));
	*/
	for (i = 0; i < len; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(void)
{
	int arr[10] = {99,2,3,4,5,6,7,8,9,0};
	int len = sizeof(arr) / sizeof(arr[0]);

	print_arr(arr,len);

	return 0;
}

