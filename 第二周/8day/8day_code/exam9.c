#include <stdio.h>
//offset
int main(void)
{
	int i = 0;
	int temp = 0;
	int arr[5] = {0};
	int len = sizeof(arr)/sizeof(arr[0]);

	printf("pls input %d numbers:\n",len);
	for (i = 0; i < len; i ++)
	{
		scanf("%d", (arr + i));
	}

	printf("The array is:\n");
	for (i = 0; i < len; i ++)
	{
		printf("%3d", *(arr + i));
	}
	printf("\n");

	temp = *(arr + len - 1);
	*(arr + len - 1) = *arr;
	*arr = temp;

	printf("首尾交换后:\n");
	for (i = 0; i < len; ++i)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");

	return 0;
}

