#include <stdio.h>
#include <string.h>

void str_long(char *str)
{
	int index = 0;
	int i = 0;
	int count = 0;
	char *p[20] = {NULL};
	char *delim = " ";

	p[0] = strtok(str,delim);
	while(p[i] != NULL)
	{
		i ++;
		count ++;
		p[i] = strtok(NULL,delim);
	}

	for(i = index; i < count; i ++)
	{
		if(strlen(p[i]) > strlen(p[index]))
			index = i;
	}

	printf("%s\n",p[index]);
}

int main(void)
{
	char str[100] = {'\0'};
	printf("请输入一段字符串:\n");
	scanf("%[^\n]",str);

	str_long(str);

	return 0;
}
