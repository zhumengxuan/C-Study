#include <stdio.h>

int max_second(int *p,int count)
{
	int max = 0;
	int max_sec = 0;
	int i = 0;
	int max_i = 0;//最大值所在的下标
	int max_sec_i = 0;//次大值所在的下标

	max = p[0]; //假设的最大值
	for(i = 0;i < count;i ++)	
	{
		if(max < p[i])
		{
			max = p[i]; //记录最大值
			max_i = i; //记录最大值所在的下标
		}
	}

	if(p[0] == max) //特殊情况:p[0]就是最大值
		max_sec = p[1];//那么换成p[1]赋给max_sec 
	else
		max_sec = p[0];
	//如果p[0]不是最大值,那么仍把p[0]赋给max_sec

	for(i = 0;i < count;i ++)
	{
		if(i == max_i) //遇到真正的最大值的时候要跳过
			continue;//不和这个最大值比较
		if(max_sec < p[i])//剩下的再比较，我们要的是次大值
		{
			max_sec = p[i];//记录次大值
			max_sec_i = i;//记录次大值所在的下标
		}
	}

	return max_sec; //返回次大值
}

int main(void)
{
	int len = 0;
	printf("请输入一个数组长度len:\n");
	scanf("%d",&len);

	int i = 0;
	int num[len];
	int count = 0;
	int max_2 = 0;
	char ch = '\0';

	printf("请输入数组各元素的值:\n");
	for(i = 0;i < len;i ++)
	{
		scanf("%d",&num[i]);
		count ++; //记录到底输入了几个数字

		ch = getchar();
		if(ch == '\n')
			break;
	}

	max_2 = max_second(num,count);
	printf("次大值max_2 = %d\n",max_2);

	return 0;
}

