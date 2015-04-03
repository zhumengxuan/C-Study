#include <stdio.h>

void insert(int *arr,int index,int len)
{
	int i = 0;
	int num = 0;
	printf("pls input the number which you will insert:\n");
	scanf("%d",&num);

	for(i = len-2;i >=index;i --)
	{
		arr[i+1] = arr[i];
	}	
	arr[index] = num;
}

int main(void)
{
	int i = 0;
	int N;
	printf("请输入数组的大小:\n");
	scanf("%d",&N);

	int arr[N];
	int len = 0;
	int len1 = sizeof(arr)/sizeof(arr[0]);

	printf("请输入%d个数字:\n",N);
	for(i = 0; i < len1;i ++)
	{
		scanf("%d",&arr[i]);
		len ++;
		if(getchar() == '\n')
			break;
	}

	int index = 0;
	printf("pls input index:\n");
	scanf("%d",&index);

	insert(arr,index,len);

	printf("The array is:\n");
	for(i = 0;i < len;i ++)
		printf("%d ",arr[i]);
	printf("\n");

	return 0;
}

