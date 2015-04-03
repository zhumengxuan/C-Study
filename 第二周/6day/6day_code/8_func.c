#include <stdio.h>

//f(n) = n + f(n - 1)
//1 + 2 + 3 + 4＋5 ＋ 6
//递归函数法
int func(int n) //前n个数之和（1+2+3+4+5+......）
{
	if (n == 1)
	{
		return 1;	
	}
	return n + func(n - 1);
}

int main(void)
{
	int i = 0;
	int ret = func(6);
	printf("ret = %d\n", ret);

	return 0;
}

