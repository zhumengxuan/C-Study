#include <stdio.h>
//通过指针变量交换2个变量的值
int main(void)
{
	int m = 10;
	int n = 20;
	int *pm = &m;
	int *pn = &n;
	
	printf("交换前:m = %d, n = %d\n", m, n);
	printf("交换前*pm = %d, *pn = %d\n", *pm, *pn);

	//交换了指针变量本身所指向的变量而已
	//并没有改变所指向变量的值
	int *tmp = pm;
	pm = pn;
	pn = tmp;
	printf("交换后:m = %d, n = %d\n", m, n);
	printf("交换后*pm = %d, *pn = %d\n", *pm, *pn);

	return 0;
}

