#include <stdio.h>
#include <string.h>

int main(void)
{
	char key = 'l';
	char *str = "hello world";
	//如果找到,返回该字符在字符串中的地址
	//没有找到,返回NULL
	char *p = strchr(str, key);
	if(p != NULL)
		printf("p = %p\n", p);

	printf("index = %ld\n", p - str);
	printf("str = %p\n", str + 2);

	return 0;
}

