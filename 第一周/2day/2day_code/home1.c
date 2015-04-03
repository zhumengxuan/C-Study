#include <stdio.h>

int main(void)
{
	char ch = '\0';
	printf("pls input ch:\n");
	scanf("%c",&ch);

	ch = ch - 32;
	printf("对应的大写字母为:%c\n",ch);

	return 0;
}
