#include <stdio.h>

void print(void)
{
	int i;
	char j;
	for(i = 0;i <= 3;i ++)
	{
		for(j = 'D'- i;j >= 'A';j --)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
//for(i = 'D';i >= 'A';i --)
	//for(j = i;j >= 'A';j --)
int main(void)
{
	print();	

	return 0;
}

