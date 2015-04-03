/*=================
递归函数func
func()：求得每一个数的阶乘
通过for循环将前i个数的阶乘
进行累加
==================*/
#include <stdio.h>

int func(int num) //求阶乘的递归函数
{
	int ret = 0;

	if(num == 0 || num == 1)
		ret = 1;
	else
		ret = num * func(num - 1);

	return ret;
}

int main(void)
{
	int i = 0;
	int sum = 0;

	for(i = 1; i <= 20; i ++)
	{
		sum += func(i);
	}
	printf("sum = %d\n", sum);

	return 0;
}

