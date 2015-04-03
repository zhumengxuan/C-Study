#include <stdio.h>
#include <string.h>

void countword(char *str)
{
	int count = 0;
	int i = 0;
	char *p = NULL;
	char *delim = ", .!:";

	p = strtok(str,delim);
	while(p != NULL)
	{
		count++;
		p = strtok(NULL,delim);
	}
	printf("count=%d\n",count);
}

int main(void)
{
	char arr[100];
	printf("请输入一句英文句子:\n");
	scanf("%[^\n]",arr);

	countword(arr);

	return 0;
}

