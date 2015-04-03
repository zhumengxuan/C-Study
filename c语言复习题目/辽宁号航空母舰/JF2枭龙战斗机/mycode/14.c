#include <stdio.h>

int main(void)
{
	int arr[] = {1,2,3,4,5,6,7};
	int m = 0;
	printf("请输入要移动几位\n");
	scanf("%d",&m);
	int i = 0;
	int j = 0;
	int len = sizeof(arr)/sizeof(arr[0]);
	int temp = 0;
	for(i = 0; i < m; i ++)
	{
		temp = arr[len - 1];
		for(j = len - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}

	for(i = 0; i <len; i++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");

	return 0;
}

