#include <stdio.h>

int add(int x,int y)
{
	int ret;
	ret = x + y;
	return ret;
}

int sub(int x,int y)
{
	int ret;
	ret = x - y;
	return ret;
}

int mul(int x,int y)
{
	int ret;
	ret = x * y;
	return ret;
}

int div(int x,int y)
{
	int ret;

	if(y == 0)
		return 0;

	ret = x / y;
	return ret;
}

int main(void)
{
	int re_sum,re_sub,re_mul,re_div;
	re_sum = add(10,5);
	re_sub = sub(10,5);
	re_mul = mul(10,5);
	re_div = div(10,5);
	
	printf("re_sum=%d\n",re_sum);
	printf("re_sub=%d\n",re_sub);
	printf("re_mul=%d\n",re_mul);
	printf("re_div=%d\n",re_div);

	return 0;//结束一个进程
}

