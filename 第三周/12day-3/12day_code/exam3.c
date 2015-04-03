#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int var = 10;
	int *p = (int *)malloc(sizeof(int));
	printf("p = %p\n", p);
	//....
	free(p);
	p = NULL;

	if (p != NULL)
	{
		free(p);	
	}

	return 0;
}

