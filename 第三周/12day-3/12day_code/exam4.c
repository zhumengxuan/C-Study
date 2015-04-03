#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	void *ptr = NULL;
	  ptr = malloc(30);	

	if(ptr == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	printf("ptr=%p=%ld\n",ptr,(long)ptr);

	void *ptr1 = NULL;
	ptr1 = realloc(ptr,40);

	if(ptr1 == NULL)
	{
		perror("realloc");
		exit(-1);
	}
	printf("ptr1=%p=%ld\n",ptr1,(long)ptr1);
	printf("sub=%ld\n",ptr1 - ptr);

	return 0;
}

