#include <stdio.h>

//通过指针变量交换2个变量的值
int main(void)
{
	int m = 10;
	int n = 20;
	printf("交换前:m = %d, n = %d\n", m, n);

	int *pm = &m;
	int *pn = &n;
	int tmp = 0;

	tmp = *pm; //指针所指向的对象的值进行交换
	*pm = *pn;
	*pn = tmp;

	printf("交换后:m = %d, n = %d\n", m, n);

	return 0;
}

