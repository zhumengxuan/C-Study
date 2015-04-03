#include <stdio.h>

char *mystrchr(char *str, const int c);

int main(void)
{
	char *str = "hello world";
	char key = 'l';

	char *p = mystrchr(str, key);
	printf("index = %ld\n", p - str);

	return 0;
}
//'a' '你'
char *mystrchr(char *str, const int c)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return str;
		}
		str ++;
	}
	return NULL;
}

