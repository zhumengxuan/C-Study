#include <stdio.h>

int main(void)
{
	int var = 10;
	var = var * 8;
	printf("var=%d\n",var);

	var = 10;
	var *= 8;
	printf("var=%d\n",var);
	
	var = 10;
	var *= 10 + 3;
	printf("var=%d\n",var);

	var = 10;
	var *= (10 + 3);
	printf("var=%d\n", var);
	
	return 0;
}

