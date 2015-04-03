#include <stdio.h>

int main(void)
{
	int arr[10] = {99,2,3,4,5,6,7,8,9,0};
	int *p = arr;
	int i = 0;

	for (i = 0; i < 10; i ++)
	{
		printf("%d ", p[i]); //下标形式
					 //*(p + i)//指针形式
	}
	printf("\n");

	return 0;
}

