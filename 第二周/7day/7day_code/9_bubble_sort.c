#include <stdio.h>
//freevpn google
//code.google.com
//svn git
int main(void)
{
	int height[] = {190, 180, 177, 188, 155, 160};
	int len = sizeof(height) / sizeof(height[0]);
	int j = 0;
	int i = 0;
	int temp = 0;
	//循环开始: 0
	//循环结束: < len
	//循环增量: +1
	for (i = 0; i < len - 1; i ++) 
	//外循环比较len－1次
	//选择排序也是len-1次
	{				
		for (j = 0; j < len - 1 - i; j ++) 
		//内循环比较（len－1)-i 次
		{
			//前一个数和后一个数比较
			if (height[j] > height[j + 1]) //相邻比较
			{
				temp = height[j + 1];
				height[j + 1] = height[j];
				height[j] = temp;
			}
		}
	}

	for (i = 0; i < len;i ++)
	{
		printf("%d ", height[i]);
	}
	printf("\n");

	return 0;
}

