/*===================
利用循环
循环开始: i = 9 
循环结束: i >= 1
循环增量: i --
给num赋初值为1，即第10天的
桃子个数为1
那么往上每一天的桃子个数为
后一天的个数加1  再乘以2
=====================*/

#include <stdio.h>

int main(void)
{
	int i = 0;
	int num = 1;

	for(i = 9; i >= 1; i--)
	{
		num = (num + 1) * 2;
	}
	printf("num = %d\n", num);

	return 0;
}

