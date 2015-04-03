#include <stdio.h>

void print_arr(const int *arr, int len)
{
}

int main(void)
{
	//表示指针变量本身不变
	//所指向的内容也不变
	const int * const pp;
	int var = 10;
	int const  *p = &var;
	//const int *p;
	//int * const p;
//	*p = 9;

	return 0;
}

