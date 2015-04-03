#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_word_in_string(const char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int count = 0;

	int len = strlen(str) + 1;	
	char arr[len];
	strcpy(arr,str);

	char *delim = " ";
	char *p[20] = {NULL};
	int len_word[20] = {0};

	p[i] = strtok(arr,delim);
	while(p[i] != NULL)
	{
		len_word[i] = strlen(p[i]);	
		count ++;
		i ++;
		p[i] = strtok(NULL,delim);
	}

	char arr1[len];
	memset(arr1,' ',len);

	for(i = 0;i < count;i ++)//外循环控制单词个数
	{
		//内循环控制单词打印的长度
		for(j = len_word[i] - 1;j >= 0;j --)
		{
			arr1[k] = *(*(p + i) + j);
			k ++;
		}
		k ++; //留个空格
	}

	printf("逆序保存在arr1数组中的字符串变成:\n");
	printf("%s\n",arr1);
}

int main(void)
{
	char str[100] = {'\0'};
	printf("请输入一个英语句子:\n");
	scanf("%[^\n]",str);

	reverse_word_in_string(str);

	return 0;
}

