#include <stdio.h>

int isHEX(int c)
{
	if((c >= '0'&&c <= '9') || (c >= 'a'&&c <= 'f'))	
		return 1;
	else
		return 0;
}

int main(void)
{
	char ch = '\0';
	printf("pls input ch:\n");
	scanf("%c",&ch);

	int ret = 0;
	ret = isHEX(ch);
	printf("ret = %d\n",ret);

	return 0;
}

