#include <stdio.h>
//offset
int main(void)
{
	int arr[5] = {0};
	int i = 0;
	int temp = 0;

	printf("pls input 5 numbers:\n");
	for (i = 0; i < 5; ++i)
	{
		scanf("%d", (arr + i));
	}

	printf("The array is:\n");
	for (i = 0; i < 5; ++i)
	{
		printf("%3d", *(arr + i));
	}
	printf("\n");

	temp = *(arr+4);
	*(arr+4) = *arr;
	*arr = temp;

	printf("首尾交换后:\n");
	for (i = 0; i < 5; ++i)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");

	return 0;
}

