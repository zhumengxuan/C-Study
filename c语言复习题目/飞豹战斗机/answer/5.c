#include <stdio.h>

void mystrcpy(char *dest, const char* src)
{
	//char *p = dest;
	while(*src != '\0')
	{
		*dest ++ = *src ++;
	}
	*dest = '\0';
}

int main(void)
{
	char str[20] = {'\0'};
	char srcstr[] = "hello world";

	mystrcpy(str,srcstr);

	printf("srcstr = %s\n",srcstr);
	printf("str = %s\n",str);

	return 0;
}
