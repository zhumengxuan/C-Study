#include <stdio.h>

void insert(int *arr, int n, int len)
{
	int i = 0;
	int index = 0;
    int flag = 0;


	if(arr[0]>arr[1])
	{
		flag = 0;
	}
	else if (arr[0] < arr[1])
		flag = 1;
    
	if(flag)
	{
		for(i = 0; i < len; i ++)
		{
			if(arr[i] > n)
			{
				index = i;
				break;
			}
		}
        
		for(i = len - 1; i > index; i --)
		{
			arr[i] = arr[i - 1];
		}
        
		arr[index] = n;
	}
	else if(flag == 0)
	{
		for(i = 0; i < len; i ++)
		{
			if(arr[i] < n)
			{
				index = i;
				break;
			}
		}
        
		for(i = len - 1; i > index; i --)
		{
			arr[i] = arr[i - 1];
		}
        
		arr[index] = n;
	}
}

int main(void)
{
	int arr[] = {1,3,4,7,9};
	int len = sizeof(arr)/sizeof(arr[0]);
	int n = 0;

	printf("请输入要插入的数:\n");
	scanf("%d",&n);

	insert(arr,n,len);

	for(int i = 0; i < len; i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}
