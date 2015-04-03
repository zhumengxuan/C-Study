#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
void func(void);

int main(void)
{
	add(1, 2);
	//没有实现的函数不能调用
	//func();

	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	if(y == 0)
		return 0;

	return x / y;
}

