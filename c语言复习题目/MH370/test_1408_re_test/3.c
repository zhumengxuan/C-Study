#include <stdio.h>

void sortarr(int *arr,int len)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for(i = 0;i < len-1;i ++)
	{
		for(j = 0;j < len-1-i;j ++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];	
				arr[j+1] = temp;		
			}
		}
	}

	printf("排序后的数组为:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");
}

int main(void)
{
	int N;
	printf("请指定数组的大小N:\n");
	scanf("%d",&N);

	int num[N];
	int i = 0;
	int len = 0;
	int len1 = sizeof(num)/sizeof(num[0]);

	printf("请输入%d个数字:\n",N);
	for(i = 0;i < len1;i ++)
	{
		scanf("%d",&num[i]);
		len ++;
		if(getchar() == '\n') 
			break;
	}

	sortarr(num,len);

	return 0;
}

