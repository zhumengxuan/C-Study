#include <stdio.h>

int main(void)
{
	char ch = '\0';
	printf("pls input ch:\n");
	scanf("%c",&ch);

	if(ch >= 'A'&&ch <= 'Z')
		printf("%c是大写字母!\n",ch);
	else if(ch >= 'a'&&ch <= 'z')
		printf("%c是小写字母!\n",ch);
	else if(ch >= '0'&&ch <= '9')
		printf("%c是数字字符!\n",ch);
	else
		printf("%c是其他字符!\n",ch);

	return 0;
}

