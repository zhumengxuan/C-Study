#include <stdio.h>

int main(void)
{
	int arr[] = {1,2,3,4,5,6,7};
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	
	//这样只是逆序输出而已
	for (i = len - 1; i >= 0; i --) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}

