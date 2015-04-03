#include <stdio.h>

void insert(int *arr, int n, int len)
{
	int i = 0;
	int index = len - 1;
	int flag = 2;//0表示降序，1表示升序，2表示其他

	if(arr[0] < arr[1])
		flag = 1;
	else if(arr[0] > arr[1])
		flag = 0;

	if(flag == 1)
	{
		for(i = 0; i <len; i ++)
		{
			if(arr[i] > n)
			{
				index = i;
				break;
			}
		}

	}

	else if(flag == 0)
	{
		for(i = 0; i <len; i ++)
		{
			if(arr[i] < n)
			{
				index = i;
				break;
			}
		}	
	}

	for(i = len - 1; i > index; i --)
	{
		arr[i] = arr[i - 1];
	}
	arr[index] = n;
}

int main(void)
{
	int i = 0;
	int arr[] = {1,2,3,4,5,6,7};
	int len = sizeof(arr)/sizeof(arr[0]);
	int n = 0;


	printf("插入前：\n");
	for(i = 0; i < len; i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	printf("请输入要插入的数:\n");
	scanf("%d",&n);

	insert(arr,n,len);

	printf("插入后：\n");
	for(i = 0; i < len; i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	return 0;
}
