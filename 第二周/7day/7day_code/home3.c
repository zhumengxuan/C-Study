#include <stdio.h>

int main(void)
{
	int len = 0;
	int i = 0;
	int j = 0;
	int temp = 0;

	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	len = sizeof(arr)/sizeof(arr[0]);

	printf("想进行循环的数组为:\n");
	for(i = 0;i < len;i ++)
		printf("%5d",arr[i]);
	printf("\n");

	int n = 0;
	printf("请输入想循环的次数n:\n");
	scanf("%d",&n);

	//循环n个    那就套一个外循环循环n次就可以了
	for(j = 0;j < n;j ++) 
	{
		temp = arr[len-1];
		for(i = len-2;i >= 0;i --)
		{
			arr[i+1] = arr[i];
		}
		arr[0] = temp;	
	}

	printf("循环后的数组为:\n");
	for(i = 0;i < len;i ++)
		printf("%5d",arr[i]);
	printf("\n");

	return 0;
}

