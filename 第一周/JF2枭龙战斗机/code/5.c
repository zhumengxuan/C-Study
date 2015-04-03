#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int num = 0;
	printf("请输入一个数字:\n");
	scanf("%d",&num);

	for(i = 0; i < num; i ++)
	{
		//int index = i;//记录这是第几行
		//打印空格
		for(j = 0; j < num - i; j++)
		{
			printf(" ");
		}

		//打印@符
		for(k = i; k >= 0; k --)
		{
			printf("@");
		}

		for(m = 0; m < num - i; m++)
		{
			printf("￥");
		}	

		printf("\n");
	}

	return 0;
}
