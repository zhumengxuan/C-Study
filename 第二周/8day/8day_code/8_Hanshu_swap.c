#include <stdio.h>

void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(void)
{
	int m = 10;
	int n = 20;
	printf("交换前m = %d, n = %d\n", m, n);
	//将指针传递给swap函数的
	//int *x和int *y
	//x = &m, y = &n;
	swap(&m, &n);
	printf("交换后m = %d, n = %d\n", m, n);

	return 0;
}

