#include <stdio.h>

char *mystrcpy(char *dst,const char *src)
{
	char *d = dst;
	while(*src != '\0')
	{
		*dst ++ = *src ++;
	}
	*dst = '\0';
	return d;
}

int main(void)
{
	//const char src[100]; //为什么不能这样写?
	char src[100];
	printf("pls input a string:\n");
	scanf("%[^\n]",src);

	char dst[100];
	printf("The src[100] is:\n");
	printf("%s\n",src);

	mystrcpy(dst,src);

	printf("The dst[100] is:\n");
	printf("%s\n",dst);

	return 0;
}

