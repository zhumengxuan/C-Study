#include <stdio.h>

int main(void)
{
	float f = 1.23456744;
	double d = 1.234567890123456;

	printf("f = %f\n", f);
	printf("d = %.16lf\n", d);

	return 0;
}
