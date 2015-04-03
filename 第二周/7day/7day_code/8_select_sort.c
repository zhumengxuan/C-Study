#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int index = 0;
	int temp = 0;
	int height[] = {190, 180, 177, 155, 160};
	int len = sizeof(height) / sizeof(height[0]);

	for (i = 0; i < len; i ++)
	{
		printf("%d ", height[i]);
	}
	printf("\n");
/*
    //注意：这种方法效率低
	//注意循环的次数,代表循环几轮？
	for(i = 0; i < len - 1; i ++) 
	{
		//将参照物和后面的元素进行比较
		for (j = i + 1; j < len; j ++) 
		//内循环和外循环首次循环次数相同，但错位
		{
			//如果参照物比后面的元素要大
			//将参照元素的内容和后面元素交换
			if (height[i] > height[j])
			{
				temp = height[i];
				height[i] = height[j];	
				height[j] = temp;
			}
		}
	}
*/
	int min = 0;
	for(i = 0;i < len - 1;i ++)
	{
		min = i;//每次选一个标号作为最小值的标号
		for(j = i + 1;j < len;j ++)
		{
			//if(height[i] > height[j])
			//注意这里为什么不能写成这样？
			if(height[min] > height[j])
			{
				min = j; 
				//这种处理方式效率更高
				//因为交换次数少
			}
		}

		if(min != i)
		{
			temp = height[min];
			height[min] = height[i];
			height[i] = temp;
		}
	}

	for (i = 0; i < len; i ++)
	{
		printf("%d ", height[i]);
	}
	printf("\n");

	return 0;
}

