#include <stdio.h>

void lcy_toupper(char *c)
{
	if(*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

int main(void)
{
	char ch = '\0';
	char *p = NULL;
	p = &ch;

	printf("请输入一个字符ch:\n");
	scanf("%c",&ch);

	lcy_toupper(&ch);
	printf("ch = %c\n",ch);

	return 0;
}

