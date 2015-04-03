#include <stdio.h>
#include <string.h>
#include <ctype.h>

char func(const char *p,int len)
{
	int i = 0;
	char ch = '\0';

	for(i = 0;i < len;i ++)
	{
		if(isalpha(p[i]))
		{
			ch = p[i];		
			break;
		}
	}

	return ch;
}
int main(void)
{
	char ret = '\0';
	char ch[100] = {'\0'};

	printf("请输入一个字符串:\n");
	scanf("%[^\n]",ch);

	int len = strlen(ch);

	ret = func(ch,len);
	printf("数组中第一个出现的字母是:%c\n",ret);

	return 0;
}

