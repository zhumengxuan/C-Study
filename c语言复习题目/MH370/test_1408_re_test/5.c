#include <stdio.h>

const char *mystrchr(const char *str,char ch)
{
	int i = 0;
	const char *p = NULL;

	while(*(str+i) != '\0')
	{
		if(*(str+i) == ch)
		{
			p = str+i;
			break;		
		}
		i ++;
	}
	return p;
}

int main(void)
{
	const char *arr = "hello world!";
	char ch = 'l';

	const char *p = mystrchr(arr,ch);
	
	printf("字符%c在字符串中出现的第一个位置在%p.\n",ch,p);
	
	return 0;
}

