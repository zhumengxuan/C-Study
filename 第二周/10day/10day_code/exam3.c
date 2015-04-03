#include <stdio.h>
#include <string.h>

int main(void)
{
	char key = 'l';
	char *str = "hello world";
	char *first = strchr(str, key);
	char *last  = strrchr(str, key);

	printf("first = %c, %p\n", *first, first);
	printf("last  = %c, %p\n", *last,  last);

	return 0;
}

