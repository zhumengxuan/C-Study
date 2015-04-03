#include <stdio.h>

int main(void)
{
	int var = 1;
	int sum = 0;
	sum = var++;

	printf("sum = %d\n", sum);
	printf("var = %d\n", var);
	//cpu --> memory --> var --> +1

	var = 1;
	sum = ++var;
	//cpu --> +1 --> memory --> var
	printf("sum = %d\n", sum);

	int m = 1;
	sum = m++ + ++m;
	printf("sum = %d\n", sum);
	printf("m = %d\n", m);

	//sum = ++1;

	return 0;
}

