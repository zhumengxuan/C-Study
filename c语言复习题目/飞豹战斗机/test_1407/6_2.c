#include <stdio.h>
#include <string.h>

void maxlen(char *str)
{
	int i = 0;
	int len = 0;
	int max = 0;
	char *pmax = NULL;
	char *delim = " ";	
	char *p = NULL;

	p = strtok(str,delim);
	while(p != NULL)
	{
		len = strlen(p);
		if(max < len)
		{
			max = len;
			pmax = p;
		}
		p = strtok(NULL,delim);
	}

	printf("最长单词为:%s\n",pmax);
}

int main(void)
{
	char str[100] = {'\0'};
	printf("请输入一个字符串:\n");
	scanf("%[^\n]",str);

	maxlen(str);

	return 0;
}

