#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	char *p[20] = {NULL};
	
	char *delim = " ";
	char str[100];
	printf("请输入一个字符串:\n");
	scanf("%[^\n]",str);

	int max = 0;
	int len = 0;
	int count = 0;
	int index = 0;

	p[i] = strtok(str,delim);
	while(p[i] != NULL)
	{
		count ++;
		i ++;
		p[i] = strtok(NULL,delim);
	}

	printf("结果为:\n");
	for(i = count-1;i >= 0;i --)
		printf("%s ",p[i]);
	printf("\n");

	return 0;
}

