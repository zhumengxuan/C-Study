#include <stdio.h>

int main(void)
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int i = 0;

	for (i = 0; i < 3 * 3;i ++)
	{
		printf("%p\n", &arr[0][i]);		
	}

	return 0;
}

