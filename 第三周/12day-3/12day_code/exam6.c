#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *ptr = (char *)malloc(30);	
	if(ptr == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	printf("ptr = %p = %ld\n",ptr,(long)ptr);

	char *ptr1 = (char *)realloc(ptr,70);
	if(ptr1 == NULL)
	{
		perror("realloc");
		exit(-1);
	}
	printf("ptr1 = %p = %ld\n",ptr1,(long)ptr1);
	printf("sub = %ld\n",ptr1 - ptr);
    
	printf("%s\n",ptr1);
	ptr1 = "helloworld!";
	printf("%s\n",ptr1);

	return 0;
}

