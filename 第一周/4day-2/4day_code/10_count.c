#include <stdio.h>

int main(void)
{
	int base = 0;
	int count = 0;
	printf("pls input a base_number:\n");
	scanf("%d",&base);

	while(base)
	{
		base /= 10;
		count++;
	}

	printf("count = %d\n",count);

	return 0;
}

