#include <stdio.h>

int main(void)
{
	char a = '\0';
	char b = '\0';
	char c = '\0';
	char d = '\0';

	printf("pls input a four_ch_word:\n");
	scanf("%c%c%c%c",&a,&b,&c,&d);

	printf("The word is:\n");
	printf("%c%c%c%c\n",d,c,b,a);

	return 0;
}
