#include <stdio.h>
#include <ctype.h>
#include <string.h>

void objc_identifier_from_cpp_identifier(const char *s)
{
	int i = 0;
	int count = 0;

	int len = strlen(s) + 1;
	char arr[len];
	strcpy(arr,s);

	char *delim = "_";
	char *p[20] = {NULL};
	char *h = NULL;

	p[i] = strtok(arr,delim);
	while(p[i] != NULL)
	{
		i ++;
		count ++;
		p[i] = strtok(NULL,delim);
	}

	printf("转化成的OC标识符是:\n");
	printf("%s",p[0]);
	for(i = 1;i < count;i ++)
	{
		*p[i] -= 32;
		printf("%s",p[i]);
	}
	printf("\n");
}

int main(void)
{
	char str[100] = {'\0'};
	printf("请输入一个C++标识符:\n");
	scanf("%[^\n]",str);

	objc_identifier_from_cpp_identifier(str);

	return 0;
}

