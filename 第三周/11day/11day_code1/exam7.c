#include <stdio.h>

union test
{
	int a;
	char b;
};

int main(void)
{
	//00000000001
	union test test;
	test.a = 1;

	if(test.b)
		printf("是小端序!\n");
	else
		printf("是大端序!\n");

	return 0;
}

