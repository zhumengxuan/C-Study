#include <stdio.h>

int main(void)
{
	int height[] = {180, 190, 220, 155, 177, 200};
	int len = sizeof(height) / sizeof(height[0]);
	int i = 0;
	int temp = 0;

	//输出逆序保存前的高度值
	printf("逆序前的数组:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%d ",height[i]);
	}
	printf("\n");

	for (i = 0; i < len / 2; i ++)
	{
		temp = height[i]; 
		height[i] = height[len - 1 - i];
		height[len - 1 - i] = temp;
	}

	//输出逆序保存后的高度值
	printf("逆序后的数组:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%d ",height[i]);
	}
	printf("\n");

	return 0;
}

