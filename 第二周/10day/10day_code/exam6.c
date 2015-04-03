#include <stdio.h>
#include <string.h>

char *mystrrchr(char *s,char c,int len)
{
	int i = 0;
	char *p = NULL;
	for(i = 0;i < len;i ++)	
	{
		if(*(s + i) == c)
			{	
				p = s+i;
			}
	}
	return p;//注意要包含找到和找不到两种情况
}

int main(void)
{
	int len = 0;
	char c = 'l';
	char arr[] = "hello world!";
	char *p = NULL;
	len = strlen(arr);

	p = mystrrchr(arr,c,len);
	printf("字符%c最后一次出现的位置为:%p\n",*p,p);

	return 0;
}

