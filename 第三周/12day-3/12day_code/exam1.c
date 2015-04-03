#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	void *p = malloc(1 * sizeof(double));
	
	if (p != NULL)
	{
		double *tmp = (double *)p;
		*tmp = 99.89;
		printf("tmp = %lf\n", *tmp);
	}

	return 0;
}

