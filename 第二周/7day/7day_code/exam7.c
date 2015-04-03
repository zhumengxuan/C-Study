#include <stdio.h>

int main(void)
{
	int i = 0;
	int num = 0;
	int flag = 0;//标记是否有相同数据
	int flag1 = 0;//标记递增或递减序列
	int arr[] = {11,22,33,44,55,66,77,88,0};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	//插入一个最大的数(或最小的数)的情况
	int index = len - 1;

	printf("原始数组:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n");

	printf("请输入你想删除的数字:\n");
	scanf("%d",&num);

	//这里应把最后一个0排除掉
//	for(i = 0;i < len - 2;i ++)
//	{
		if(arr[i] > arr[i + 1])
		{
			flag1 = 0; //标记递减序列
		}
		else
		{
			flag1 = 2;//表示不确定的状态
			break;
		}
//	}

	for(i = 0;i < len - 2;i ++)
	{
		if(flag1 == 2 && arr[i] < arr[i + 1])
		{
			flag1 = 1;//标记递增序列
		}
	}

	if(flag1 == 0)
		printf("这是一个递减序列!\n");
	else if(flag1 == 1)
		printf("这是一个递增序列!\n");

	for(i = 0;i < len;i ++)
	{
		if(arr[i] == num)
		{
			flag = 1; //有相同数据
			break;
		}
		else if(flag1 == 1 && arr[i] > num)
		{
			index = i;
			break;
		}
		else if(flag1 == 0 && arr[i] < num)
		{
			index = i;
			break;
		}
	//	else //这种情况已经在index的初始值处考虑到了
	//		index = len-1;//特别注意这种情况
	}

	if(1 == flag)
		printf("%d在数组中!\n",num);
	else if(0 == flag)
	{
		printf("%d不在数组中,插入数字%d.\n",num,num);
		
		for(i = len - 2;i >= index;i --)
		{
			arr[i+1] = arr[i];
		}
		arr[index] = num;
	}

	printf("处理后的数组为:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n");

	return 0;
}

