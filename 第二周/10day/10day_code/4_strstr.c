#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str = "hello world";
	char *key = "llo";
	char *p = strstr(str, key);

	if (p != NULL)
	{
		printf("p = %p\n", p);
		if(p == str+2)
			printf("It's right!\n");
		//printf("str = %p\n", str + 2);
	}

	return 0;
}

