#include <stdio.h>

int main(void)
{
	int i = 0;//用于循环变量记数
	int count = 0;//用于报数记数
	
	int n = 0;
	printf("请输入一个n，表示一共有n个人:\n");
	scanf("%d",&n);

	int m = 0;
	printf("请输入一个m，表示报到m的人退出圈子:\n");
	scanf("%d",&m);

	int num[n];
	int len = n; //备份
	for(i = 0;i < n;i ++)
	{
		num[i] = i + 1;
	}

	i = 0; //初始化//注意：如果这里不初始化，会报段错误
	while(1)
	{
		if(num[i] != 0)
			count ++;//记数

		if(count == m)
		{
			count = 0;//记数归零
			num[i] = 0; //置0处理
			len --; //不断地删除，数组长度不断地变短	
		}

		if(len == 1)//退出的条件
			break;

		if(i == n - 1)//n-1其实就相当于len-1
			i = -1;

		i ++;
	}

	printf("最后只剩下:\n");
	for(i = 0;i < n;i ++)
	{
		if(num[i] != 0)
		{
			printf("最后剩下的是原来第%d位的那个人!\n",i+1);
			printf("%d",num[i]);	
		}
	}
	printf("\n");

	return 0;
}

