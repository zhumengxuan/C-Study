#include <stdio.h>

void scanArray(int *arr,int n)
{
	int i = 0;
	printf("请输入%d个数字:\n",n);
	for(i = 0;i < n;i ++)
	{
		scanf("%d",&arr[i]);
	}
}

void sortArray(int *arr,int n)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for(i = 0;i < n-1;i ++)
	{
		for(j = 0;j < n-1-i;j ++)
		{
			if(*(arr+j) > *(arr+j+1))
			{
				temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			}
		}
	}
		
}

void printArray(int *arr,int n)
{
	int i = 0;
	printf("排序后的数组为:\n");
	for(i = 0;i < n;i ++)	
	{
		printf("%3d",*(arr+i));
	}
	printf("\n");
}

int main(void)
{
	int arr[10] = {0};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	scanArray(arr,len);	
	sortArray(arr,len);	
	printArray(arr,len);

	return 0;
}

