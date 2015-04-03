#include <stdio.h>

void printf_ch(void)
{
	int i = 0;
	int j = 0;
	char ch = 'D';

	for(i =0; i < 4; i ++)
	{
		for(j = 0; j < 4 - i; j ++)
		{
			printf("%c",ch - j);
		}
		ch --;
		printf("\n");
	}
}

int main(void)
{
	printf_ch();
	return 0;
}
