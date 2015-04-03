#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	int num[10] = {0};
	int len = sizeof(num)/sizeof(num[0]);

	for(i = 0;i < len;i ++)
	{
		scanf("%d",&num[i]);
	}

	printf("原始数组:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%3d",num[i]);
	}
	printf("\n");

	//冒泡排序
	for(i = 0;i < len-1;i ++)
	{
		for(j = 0;j < len-1-i;j ++)	
		{
			if(num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}

	printf("从小到大排列后的数组:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%3d",num[i]);
	}
	printf("\n");

	return 0;
}

