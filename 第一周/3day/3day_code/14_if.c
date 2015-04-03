#include <stdio.h>

int main(void)
{
	char ch = '\0';
	printf("请输入一个字符:\n");
	scanf("%c", &ch);
	//if (ch >= 65 && ch <= 90)	//这样写不好
	if ((ch >= 'A'&& ch <= 'Z' )||
		(ch >= 'a' && ch <= 'z'))
	{	
		printf("字母:%c\n", ch);	
	}

	return 0;
}

