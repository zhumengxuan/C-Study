#include <stdio.h>

int main(void)
{
	int i = 0;
	int height[] = {180, 190, 220, 155, 177, 200};
	int len = sizeof(height) / sizeof(height[0]);
	//记录最大值,参照物
	int max = height[0];
	int index = 0;

	for (i = 0; i < len; i ++)
	{
		//将参照物和所有元素进行比较	
		if (max < height[i])
		{
			//更换参照物
			max = height[i];
			index = i;
		}
	}
	//输出最大元素
	printf("max is %d\n", max);
	printf("index = %d\n",index);

	return 0;
}

