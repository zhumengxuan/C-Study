#include <stdio.h>

int main(void)
{
	char ch = '\0';
	printf("pls input ch:\n");
	scanf("%c",&ch);

	if(ch >= 'A'&&ch <= 'Z')
		ch += 32;
	else if(ch >= 'a'&&ch <= 'z')
		ch -= 32;
	
	printf("%c\n",ch);

	return 0;
}

