#include <stdio.h>

void delete(int *arr,int index,int len)
{
	int i = 0;
	for(i = index;i < len - 1;i ++)	
	{
		arr[i] = arr[i + 1];
	}
	//arr[len-1] = 0;
}

int main(void)
{
	int i = 0;
	int arr[10] = {2,3,4,7,8,9,1,0,5,6};
	int len = sizeof(arr)/sizeof(arr[0]);

	printf("The array is:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	int index = 0;
	printf("pls input index:\n");
	scanf("%d",&index);

	delete(arr,index,len);	
	len --;

	printf("The deleted array is:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}

