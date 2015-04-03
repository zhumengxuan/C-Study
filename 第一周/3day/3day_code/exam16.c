#include <stdio.h>

int main(void)
{
	char ch = '\0';
	//接收用户输入的字符
	scanf("%c", &ch);

	//判断是否为大写字母
	if (ch >= 'A' && ch <= 'Z')
	{
		printf("ch = %d\n", ch);
	}
	else
	{
		printf("ch = %c\n", ch);
	}

	return 0;
}

