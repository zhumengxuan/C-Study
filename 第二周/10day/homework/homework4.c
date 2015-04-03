#include <stdio.h>
#include <string.h>

void lixu(char * s)
{
	char *p[20] = {NULL};
	char *delim = " ";
	int i = 0;
	int count = 0;

	p[0] = strtok(s,delim);
	while(p[i] != '\0')
	{
		i ++;
		count ++;
		p[i] = strtok(NULL,delim);
	}

	for(i = count - 1; i >= 0; i--)
	{
		printf("%s ",p[i]);
	}
	printf("\n");
}

int main(void)
{
	char str[50] = {'\0'};
	printf("请输入一段字符串:\n");
	scanf("%[^\n]",str);
	
	lixu(str);

	return 0;
}
