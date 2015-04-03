/*=================
双重循环：
外循环确定所需求阶乘的个数
内循环求每一个数的阶乘
acc保存每一个阶乘
sum保存前i个数的阶乘之和
=================*/
#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int acc = 1;
	int sum = 0;

	for(i = 1; i <= 20; i ++)
	{
		acc = 1; //注意：这里很重要，每次必须要归1，否则错误
		for(j = 1; j <= i; j ++)
		{
			acc *= j;
		}
		sum += acc;
	}
	printf("sum = %d\n", sum);

	return 0;
}

