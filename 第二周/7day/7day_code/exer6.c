#include <stdio.h>

int main(void)
{
	int i = 0;
	int temp = 0;
	int num[10] = {0};
	int len = sizeof(num)/sizeof(num[0]);

	for(i = 0;i < len;i ++)
	{
		scanf("%d",&num[i]);
	}

	printf("原始数组为:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%3d",num[i]);	
	}
	printf("\n");

	//以下操作是逆序保存
	for(i = 0;i < len/2;i ++)
	{
		temp = num[len-1-i];
		num[len-1-i] = num[i];
		num[i] = temp;
	}

	printf("逆序保存后的数组为:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%3d",num[i]);	
	}
	printf("\n");

	return 0;
}

