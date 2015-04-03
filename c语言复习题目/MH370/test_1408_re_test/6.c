#include <stdio.h>

int mystrcmp(const char *dst,const char *src)
{
	while(1)	
	{
		if((*src != '\0')&&(*dst != '\0'))
		{
			if(*src == *dst)
			{
				src ++;
				dst ++;
			}
			else
				return *dst-*src;
		}
		else
			return *dst-*src;
	}
}

int main(void)
{
	const char *src = "hello";
	const char *dst = "heallo";

	int num = 0;
	num = mystrcmp(dst,src);
	printf("num = %d\n",num);

	return 0;
}

