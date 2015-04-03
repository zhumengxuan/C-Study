#include <stdio.h>

int isDIGITAL(int c)
{
	if(c >= '0'&&c <= '9')
		return 1;
	else
		return 0;
}

int main(void)
{
	int ret = 0;
	char ch = '\0';
	printf("pls input ch:\n");
	scanf("%c",&ch);

	ret = isDIGITAL(ch);
	printf("ret = %d\n",ret);

	return 0;
}

