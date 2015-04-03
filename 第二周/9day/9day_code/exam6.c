#include <stdio.h>
#include <string.h>

char *search_ch(char *p,int len)
{
	int i = 0;
	char *pch = NULL;

	char ch = '\0';
	printf("请输入一个待查找的字符:\n");
	scanf("%c",&ch);

	for(i = 0;i < len;i ++)
	{
		if(ch == *(p + i))	
		{
			pch = p + i; //找到了
			break;//表示如果有多个，只找第一个
		}
	}
	return pch; //返回找到的字符的地址或返回NULL
}

int main(void)
{
	int i = 0;
	char *p = "helloworld!";
	int len = strlen(p);
	char *pch = NULL;

	pch = search_ch(p,len);
	printf("找到的字符的地址为:%p\n",pch);

	return 0;
}

