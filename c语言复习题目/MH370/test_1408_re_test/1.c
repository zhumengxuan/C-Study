#include <stdio.h>

void print(void)
{
	char i,j;
	for(i = 'A';i <= 'D';i ++)
	{
		for(j = 'A';j <= i;j ++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}

int main(void)
{
	print();

	return 0;
}

