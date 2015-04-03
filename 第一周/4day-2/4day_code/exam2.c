#include <stdio.h>

int main(void)
{
	int i = 0;
  	long int sum = 1;

	for(i = 1;i < 11;i ++)
	{
		sum = sum * i; //sum *= i;
	}

	printf("%ld\n",sum);

	return 0;
}

