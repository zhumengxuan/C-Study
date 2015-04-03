#include <stdio.h>

void add(int *x, int *y, int *z)
{
	int sum = *x + *y + *z;
	printf("sum = %d\n", sum);
	*x = -1;
	*y = -1;
	*z = -1;
}

int main(void)
{
	int a = 10;
	int b = 20;
	int c = 30;
	printf("请输入三个整数:\n");
	add(&a, &b, &c);
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	return 0;
}

