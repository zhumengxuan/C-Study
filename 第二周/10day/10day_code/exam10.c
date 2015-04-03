#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int count = 0;
	char *s1 = "hello wollo";
	char *s2 = "llo";
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);

	for (i = 0; i <= len_s1 - len_s2;i ++)
	//最后两个字符没必要去判断了，可以减少2次循环
	{
		if (strncmp(s1 + i, s2, len_s2) == 0)
		//每次以s1+i作为比较的字符串开头
		{
			printf("Found it\n");
			count ++;//字符串计数
		}
	}
	printf("Found it %d times!\n",count);

	return 0;
}

