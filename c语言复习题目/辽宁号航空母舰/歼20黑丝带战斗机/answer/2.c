#include <stdio.h>
#include <string.h>

int longest_word_in_string(const char * str)
{
	char cp_str[200] = {'\0'};
	strcpy(cp_str,str);
	char *p[30] = {NULL};
	char *delim = " ,.";
	int len_word[30] = {0};
	int i = 0;
	int count = 0;
	int max = 0;

	//把字符串分割成单词
	p[0] = strtok(cp_str,delim);
	while(p[i] != NULL)
	{
		i ++;
		count ++;
		p[i] = strtok(NULL,delim);
	}

	//求每个单词的长度
	for(i = 0;i < count; i ++)
	{
		len_word[i] = strlen(p[i]);
	}

	//比较单词长度
	for(i = 1; i < count; i ++)
	{
		if(len_word[max] < len_word[i])
			max = i;
	}

	return len_word[max];

}

int main(void)
{
	char arr[] = "Yes, I am kiding you.";
	int len = longest_word_in_string(arr);

	printf("%d\n",len);

	return 0;
}
