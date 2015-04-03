#include <stdio.h>
#include <string.h>

int longest_word_in_string(const char *str)
{
	int i = 0;
	int count = 0;
	int word_len = 0;

	int len = strlen(str) + 1;
	char arr[len];
	strcpy(arr,str);

	char *p[20] = {NULL};
	char *delim = " ,.";
	int max_len = 0;

	p[i] = strtok(arr,delim);
	while(p[i] != NULL)
	{
		word_len = strlen(p[i]);
		if(max_len < word_len)
		{
			max_len = word_len;
		}
		i ++;
		p[i] = strtok(NULL,delim);
	}

	return max_len;
}

int main(void)
{
	char str[100] = {'\0'};
	printf("请输入一个英语句子:\n");
	scanf("%[^\n]",str);

	int len = longest_word_in_string(str);
	printf("最长单词的长度为:%d\n",len);

	return 0;
}

