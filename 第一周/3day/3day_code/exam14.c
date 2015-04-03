#include <stdio.h>

int main(void)
{
	char ch = '\0';
	printf("pls input a char:\n");
	scanf("%c",&ch);

	if(ch >= 'A'&&ch <= 'Z')
		ch = ch + 32;
	else
		ch = ch - 32;

	printf("%c\n",ch);

	return 0;
}

