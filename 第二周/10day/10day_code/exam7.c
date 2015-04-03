#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str = "abcdeabc";
	char *substr = "abc";
	char *p = NULL;

	p = strstr(str,substr);
	if(p != NULL)
	{
		printf("该用户存在!\n");
	}
	else
		printf("该用户不存在!\n");

	return 0;
}

