#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[200] = {'\0'};
	printf("请输入一段字符串:\n");
	scanf("%[^\n]",str);
	char *p[20] = {NULL};
	char *delim = " ";
	int i = 0;
	int count = 0;

	p[0] = strtok(str,delim);
	while(p[i] != NULL)
	{
		i ++;
		count ++;
		p[i] = strtok(NULL,delim);
	}

	int max = 0;
	for(i = 1; i < count; i ++)
	{
		if(strlen(p[max]) < strlen(p[i]))
			max = i;
	}

	printf("%s\n",p[max]);


	return 0;
}
