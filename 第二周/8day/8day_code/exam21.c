#include <stdio.h>

void print(int *s,int len)
{
	int i = 0;
	for(i = 0;i < len;i ++)
		printf("%5d",*(s + i));
	printf("\n");
}

int main(void)
{
	int i = 0;
	int len = 0;
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	len = sizeof(arr) / sizeof(arr[0]);

	print(arr,len);

	return 0;
}

