#include <stdio.h>

int main(void)
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int *p1 = arr;
	int *p2 = &arr[3];

	int ret = p1 - p2;
	printf("ret = %d\n", ret);

	return 0;
}

