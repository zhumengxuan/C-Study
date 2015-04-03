#include <stdio.h>

char *mystrcmp(char *dest,char *src)
{
	char *p = dest;
	while(*dest != '\0')
	{
		dest ++;
	}

	while(*src != '\0')
	{
		*dest ++ = *src ++;
	}

	return p;
}

int main(void)
{
	char str1[20] = "hello";
	char str2[10] = "world";

	mystrcmp(str1,str2);
	printf("%s\n",str1);

	return 0;
}
