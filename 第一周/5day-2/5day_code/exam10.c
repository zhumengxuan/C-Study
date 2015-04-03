#include <stdio.h>

int main(void)
{
	char ch = '\0';
	printf("pls input ch:\n");
	scanf("%c",&ch);

	int ret = 0;
	ret = ch - 48;

	printf("数字字符%c对应的数字为:%d\n",ch,ret);

	return 0;
}

