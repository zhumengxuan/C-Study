#include <stdio.h>

int main(void)
{
	int i = 0;
	int index = 0;
	int num = 100;
	int arr[] = {11,22,33,44,55,66,77,88,0};
	int len = sizeof(arr)/sizeof(arr[0]);

	printf("pls input the value of index:\n");
	scanf("%d",&index);

	for(i = len - 2;i >= index;i --)
	{
		arr[i + 1] = arr[i];
	}
	arr[index] = num;

	printf("Now the arr[] is:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n");

	return 0;
}

