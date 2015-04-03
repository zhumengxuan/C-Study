#include <stdio.h>

int mystrcmp(const char *s1, const char *s2);

int main(void)
{
	char *s1 = "hello";
	char *s2 = "hello world";
	
	int ret = mystrcmp(s1, s2);
	printf("ret = %d\n", ret);

	return 0;
}

int mystrcmp(const char *s1, const char *s2)
{
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if(s1[i] != s2[i])
		{
			return s1[i] - s2[i];//两个字符串都没结束但不一样的情况
		}
		i ++;
	}
	return s1[i] - s2[i];//有一个字符串提前结束了的情况
}

