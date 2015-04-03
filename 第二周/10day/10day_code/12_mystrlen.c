#include <stdio.h>

int mystrlen(const char *str)
{
	int len = 0;
	int i = 0;
	while(str[i] != '\0')
	{
		len ++;
		i ++;
	}
	return len;
}

/*
int mystrlen(const char *str)
{
	char *p = str;
	while(*str != '\0')
	{
		str ++;
	}
	return str - p;
}
*/

int main(void)
{
	int len = 0;
	char *str = "helloworld!";

	len = mystrlen(str);
	printf("len=%d\n",len);

	return 0;
}

