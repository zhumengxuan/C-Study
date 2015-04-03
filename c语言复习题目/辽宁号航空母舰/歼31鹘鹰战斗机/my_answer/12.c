#include <stdio.h>

void up_and_down(int * arr,int len)
{
	int i = 0;
	printf("递增递减序列为：\n");
	printf("%d	%d",arr[0],arr[1]);

	for(i = 2; i < len; i ++)
	{
		if(arr[i - 2] < arr[i - 1] && arr[i - 1] < arr[i])
			printf("	%d",arr[i]);
		else if(arr[i - 2] > arr[i - 1] && arr[i - 1] > arr[i])
			printf("	%d",arr[i]);
		else
			printf("\n%d	%d",arr[i - 1],arr[i]);
	}
}

int main(void)
{
	int n = 0;
	printf("请输入数组元素的个数\n");
	scanf("%d",&n);

	int arr[n];
	int i = 0;
	//int len = 0;
	char ch = '\0';


	printf("请输入数组的元素:\n");
	for(i = 0; i < n; i ++)
	{
		scanf("%d",&arr[i]);
		ch = getchar();
		//len ++;	
	}

	up_and_down(arr,n);

	return 0;
}

