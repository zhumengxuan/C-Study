#include <stdio.h>

int main(void)
{
	char i = 0;
	char j = 0;
	for(i = 'A';i <= 'C';i ++)
	{
		for(j = 'A';j <= i;j ++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	return 0;
}

