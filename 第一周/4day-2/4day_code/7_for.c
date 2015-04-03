#include <stdio.h>

int main(void)
{
	int row = 0;
	int col = 0;

	for(row = 1;row <= 4;row ++)	
	{
		for(col = 1;col <= row;col ++)
		{
			printf("%d * %d= %d\t",col,row,col*row);
		}
		printf("\n");
	}

	return 0;
}

