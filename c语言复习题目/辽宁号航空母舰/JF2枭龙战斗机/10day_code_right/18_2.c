#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "when i was young i'd listen to";
	char *delim = " .,!:";

	int len = 0;
	int max = 0;
	char *p = NULL;
	char *pmax = NULL;

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

	printf("最长单词字符个数为:%d\n",max);
	printf("最长单词是:%s\n",pmax);

	return 0;
}

