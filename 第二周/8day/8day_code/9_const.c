#include <stdio.h>

int main(void)
{
	//只读变量var
	const int var = 10;
	int n = 30;
	int m = 20;

	//var  = 9;
	//表示p变量不允许修改
	//int * const p = &m;
	//表示p所指向的内容不能改变
	const int *p = &m;
	//p = &n;
	*p = 100;

	return 0;
}

