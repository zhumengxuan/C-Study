#include <stdio.h>

void print(void)
{
	int i = 0;
	int j = 0;
	char ch = 'A';

	for(i = 0; i < 3; i ++)
	{
		ch = 'A';
		for(j = 0 ;j <= i; j ++)
		{
			printf("%c",ch + j);
		}
		printf("\n");
	}
	
}

int main(void)
{
	print();

	return 0;
}
