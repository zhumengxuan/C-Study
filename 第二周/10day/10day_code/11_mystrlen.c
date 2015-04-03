#include <stdio.h>

int mystrlen(const char *s);

int main(void)
{
	char *str = "hello";
	int len = mystrlen(str);
	printf("len = %d\n", len);

	str = "hello world";
	len = mystrlen(str);
	printf("len = %d\n", len);

	return 0;
}

//高内聚,低耦合
int mystrlen(const char *s)
{
	int len = 0;
	int i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	/*
	while (*s++ != '\0')
	{
		len ++;
	}
	*/

	return len; //局部变量能够被返回吗?
}

