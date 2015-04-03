#include <stdio.h>

int main(void)
{
	int i = 0;
	int num = 0;
	int arr[9] = {11,22,33,44,55,66,77,88};
	int len = sizeof(arr)/sizeof(arr[0]);
	int index = len - 1;
	//这是为了插入一个最大(或最小)的数
	//的时候直接插到末尾
	
	printf("原始数组:\n");//输出新数组
	for(i = 0;i < len;i ++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n");

	printf("请输入你想插入的数:\n");
	scanf("%d",&num);

	for(i = 0;i < len;i ++)
	{
		if(arr[i] >= num)
		{
			index = i;//求得index
			break;
		}
	}

	//注意是len-2和i>=index(注意)
	for(i = len - 2;i >= index;i --)
	{
		arr[i+1] = arr[i];//向右移动各个数字
	}
	arr[index] = num; //插入数字到index的位置
	
	printf("插入数字%d后的数组为:\n",num);//输出新数组
	for(i = 0;i < len;i ++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n");

	return 0;
}

