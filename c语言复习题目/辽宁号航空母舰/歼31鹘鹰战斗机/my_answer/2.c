#include <stdio.h>

void delete(int *arr, int index,int len)
{
	int i = 0;
	for(i = index; i < len - 1; i ++)
	{
		arr[i] = arr[i + 1];
	}
	arr[len -1] = 0;

}

int main(void)
{
	int arr[] = {1,2,3,4,5,6};
	int len = sizeof(arr)/sizeof(arr[0]);
	int index = 0;
	int i = 0;

	printf("删除前的数组:\n");
	for(i = 0; i< len; i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("请输入要删除的位置:\n");
	scanf("%d",&index);
	delete(arr,index,len);

	printf("删除后的数组:\n");
	for(i = 0; i < len - 1; i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}
