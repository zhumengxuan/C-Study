#include <stdio.h>

void insert(int *arr,int n,int len)
{
	int i = 0;
	int index = len-1;
	int flag = 0;//默认为递增数组(或全相等数组)

	for(i = 0;i < len-1;i ++)
	{
		if(arr[i] < arr[i+1])	
		{
			flag = 0;//表示数组是递增数组
			break;
		}
		else if(arr[i] > arr[i+1])
		{
			flag = 1;//表示数组是递减数组
			break;
		}
	}
/*
	for(i = 0;i < len;i ++)
	{
		if(0 == flag)
		{
			if(n <= arr[i])
			{
				index = i;
				break;
			}	
		}
		else if(1 == flag)
		{
			if(n >= arr[i])
			{
				index = i;
				break;
			}	
		}
	}
*/
	
	printf("flag=%d\n",flag);//调试没通，待调
	for(i = 0;i < len;i ++)
	{
		#if  !flag  //flag == 0即递增就执行
			if(n <= arr[i])
//		#endif
//		#if  flag //flag == 1即递减就执行
		#else
			if(n >= arr[i])
		#endif
			{
				index = i;
				break;
			}	
	}

	for(i = len-2;i >= index;i --)
	{
		arr[i+1] = arr[i];
	}
	arr[index] = n;
}
//1 3 5 7 9
//9 7 5 3 1
int main(void)
{
	int i = 0;
	//int num[] = {1,3,5,7,9};
	int num[] = {9,7,5,3,1};
	int len = sizeof(num)/sizeof(num[0]);

	printf("The old_array is:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%3d",num[i]);
	}
	printf("\n");
	
	int n = 0;
	printf("pls input n(要插入的数):\n");
	scanf("%d",&n);
	
	insert(num,n,len);

	printf("The inserted_array is:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%3d",num[i]);
	}
	printf("\n");

	return 0;
}

