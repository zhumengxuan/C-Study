#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr = NULL;
	ptr = (int*)malloc(20);
	printf("ptr = %p\n",ptr);

	int *ptr1 = NULL;
	ptr1 = (int *)realloc(NULL,20);
	printf("ptr1 = %p\n",ptr1);

	int *ptr2 = NULL;
	ptr2 = (int *)realloc(ptr,0);
	printf("ptr2 = %p\n",ptr2);

	return 0;
}

