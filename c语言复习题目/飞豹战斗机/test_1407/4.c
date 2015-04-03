#include <stdio.h>

void insert(int *arr,int n,int len)
{
	int i = 0;
	int index = len - 1;//插入最大的数.默认插入到末尾
	int flag = 2; //0标记递减数组,1标记递增数组,2表示其他情况

	if(arr[0] > arr[1])
		flag = 0;//递减序列
	else if(arr[0] < arr[1])
		flag = 1;//递增序列

	if(1 == flag)
	{
		for(i = 0;i < len;i ++)
		{
			if(n <= arr[i])
			{
			   index = i;
			   break;
			}
		}
	}
	else if(0 == flag)
	{
		for(i = 0;i < len;i ++)
		{
			if(n >= arr[i])
			{
			   index = i;
			   break;
			}
		}
	}

	for(i = len - 2;i >= index;i --)
	{
		arr[i + 1] = arr[i];
	}
	arr[index] = n;
}

int main(void)
{
	int i = 0;
	int arr[] = {2,4,6,8,10,12,0};
	//int arr[] = {12,10,8,6,4,2,0};
	int len = sizeof(arr)/sizeof(arr[0]);

	printf("The array is:\n");
	for(i = 0;i < len;i ++)
		printf("%d ",arr[i]);
	printf("\n");
	
	int n = 0;
	printf("I will insert n:\n");
	scanf("%d",&n);

	insert(arr,n,len);

	printf("The array is:\n");
	for(i = 0;i < len;i ++)
		printf("%d ",arr[i]);
	printf("\n");

	return 0;
}

