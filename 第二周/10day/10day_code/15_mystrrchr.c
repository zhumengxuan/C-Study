#include <stdio.h>

char *mystrrchr(char *s, char c);

int main(void)
{
	char *str = "hello world";
	char key = 'l';

	char *p = mystrrchr(str, key);
	printf("index = %ld\n", p - str);

	return 0;
}

char *mystrrchr(char *s, char c)
{
	char *p = NULL;
	//从第一个字符向后找
	while(*s != '\0')
	{
		if (*s == c)
		{
			//每找到一个,就将该地址保存
			p = s;
		}
		s ++;
	}

	//最后返回该地址
	return p;
}

