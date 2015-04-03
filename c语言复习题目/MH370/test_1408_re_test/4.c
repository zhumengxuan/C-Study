#include <stdio.h>

void move(int *arr,int n,int m)
{
	int temp = 0;
	int i = 0;
	int j = 0;
	int len = n;
	
	for(i = 0;i < m;i ++)
	{
		temp = arr[len - 1];
		for(j = len - 2;j >= 0;j --)
		{
			arr[j + 1] = arr[j];
		}
		arr[0] = temp;
	}

	printf("后移m个位置后的数组为:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");
}

int main(void)
{
	int i = 0;
	int n = 0;
	printf("请输入一个n值:\n");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("请输入%d个数:\n",n);
	for(i = 0;i < n;i ++)
	{
		scanf("%d",&arr[i]);
	}

	int m = 0;
	printf("请输入一个m值:\n");
	scanf("%d",&m);

	move(arr,n,m);

	return 0;
}

