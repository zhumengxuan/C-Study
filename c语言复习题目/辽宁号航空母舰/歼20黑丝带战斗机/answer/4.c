#include <stdio.h>
#include <string.h>

void reverse_word_in_string(const char * str)
{
	char cp_str[200] = {'\0'};
	strcpy(cp_str,str);
	char *delim = " ";
	char * p[20] = {NULL};
	int i = 0;
	int count = 0;
	int len = 0;

	//分割字符串
	p[0] = strtok(cp_str,delim);
	while(p[i] != NULL)
	{
		i ++;
		count ++;
		p[i] = strtok(NULL,delim);		
	}

	char reword[20][50] = {'\0'};//用来存放切割后的单词
	for(i = 0; i < count; i ++)//控制每个单词
	{
		len = strlen(p[i]);
		strcpy(reword[i],p[i]);
		for(int j = 0; j < len/2; j ++)//单词逆序
		{
			char temp = '\0';
			temp = reword[i][j];
			reword[i][j] = reword[i][len - j - 1];
			reword[i][len - j - 1] = temp;
		}
	}

	for(i = 0; i < count; i ++)
	{
		printf("%s ",reword[i]);
	}
	printf("\n");
}

int main(void)
{
	char str[] = "Hello world";
	reverse_word_in_string(str);

	return 0;
}

