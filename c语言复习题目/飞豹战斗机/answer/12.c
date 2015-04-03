#include <stdio.h>

void up_and_down(int *arr, int len)
{
	int count = 0;
	int i = 0;
	printf("递增递减子序列为:\n");
	printf("%d	%d",arr[0],arr[1]);

	for(i = 2;i < len; i ++)
	{
		if(arr[i - 2] < arr[i - 1] && arr[i - 1] < arr[i])
		{
			printf("	%d",arr[i]);
		}
		else if(arr[i - 2] > arr[i - 1] && arr[i - 1] > arr[i])
		{
			printf("	%d",arr[i]);
		}
		else
		{
			printf("\n%d	%d",arr[i - 1],arr[i]);
			count ++;
		}
	}

	printf("\n");
	printf("序列个数为%d个\n",count + 1);
}

int main(void)
{
	int i = 0;
	char ch = '\0';
	int arr[10] = {0};
	int len = sizeof(arr)/sizeof(arr[0]);

	printf("请输入10个数\n");
	for(i = 0; i < 10; i ++)
	{
		scanf("%d",&arr[i]);
		ch = getchar();
		if(ch == '\n')
			break;
	}

	for(i = 0; i < len; i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	up_and_down(arr,len);
	
	return 0;
}
