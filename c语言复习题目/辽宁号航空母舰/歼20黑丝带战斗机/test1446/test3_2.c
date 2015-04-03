#include <stdio.h>
#include <ctype.h>
#include <string.h>

void objc_identifier_from_cpp_identifier(const char *s)
{
	int i = 0;
	int count = 0;
	int flag = 0;//表示正在处理第一个单词

	int len = strlen(s) + 1;
	char arr[len];
	strcpy(arr,s);

	char *delim = "_";
	char *p = NULL;

	p = strtok(arr,delim);
	while(p != NULL)
	{
		if(0 == flag)
		{
			printf("%s",p);
			flag = 1;//表示处理非第一个单词
		}
		else if(1 == flag)
		{
			if(islower(*p))
				*p = toupper(*p);
			printf("%s",p);
		}

		p = strtok(NULL,delim);
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

