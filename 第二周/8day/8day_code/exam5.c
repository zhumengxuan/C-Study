#include <stdio.h>

int find_max(int *x, int *y, int *z)
{
	if (*x > *y)
	{
		*z = *x;
	}
	else if(*x < *y)
	{
		*z = *y;
	}
	else 
	{
		*z = *y;
		printf("*x和*y相等!\n");
	}
	*x = 0;
	*y = 0;
	return *z;
}

int main(void)
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = find_max(&a, &b, &c);
	printf("max is %d\n", c);

	return 0;
}

