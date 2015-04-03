#include <stdio.h>

int main(void)
{
	int pice = 1;
	int day = 0;

	for(day = 9; day >= 1; day --)
	{
		pice = (pice + 1) * 2;
	}

	printf("pice = %d\n",pice);

	return 0;
}
