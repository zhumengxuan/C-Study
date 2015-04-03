#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s1 = "hello world";
	char *s2 = "llo";

	int ret = strncmp(s1, s2, 5);
	printf("ret = %d\n", ret);

	return 0;
}

