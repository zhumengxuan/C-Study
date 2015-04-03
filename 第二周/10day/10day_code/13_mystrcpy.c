#include <stdio.h>

char * mystrcpy_a(char *dest, const char *src);

char *mystrcpy_p(char *dest, const char *src);

int main(void)
{
	char *src = "hello world";
	char dest[100] = {0};
	//mystrcpy_a(dest, src);
	mystrcpy_p(dest, src);
	puts(dest);

	return 0;
}


char *mystrcpy_p(char *dest, const char *src)
{
	char *s = dest;//备份
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return s;
}

char *mystrcpy_a(char *dest, const char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	//最后添加一个\0
	dest[i] = '\0';

	return dest;
}

