#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[50] = {'\0'};
	char *p[20] = {NULL};
	char *delim = " ,.!?\"\';:";
	int i = 0;
	int count = 0;

	printf("请输入一段字符串:\n");
	scanf("%[^\n]",str);

	p[0] = strtok(str,delim);
	while(p[i] != NULL)
	{
		i ++;
		count ++;
		p[i] = strtok(NULL,delim);
	}

	for(i = 0; i < count; i ++)
	{
		printf("%s",p[i]);
	}

	printf("\n");

	return 0;
}
