#include <stdio.h>

int main(void)
{
	int i = 0;
 	for(i = 1;i <= 20;i ++)
	{
		if(i == 10||i == 11)
			continue;
		printf("%5d",i);
	}
	printf("\n");

	return 0;
}

