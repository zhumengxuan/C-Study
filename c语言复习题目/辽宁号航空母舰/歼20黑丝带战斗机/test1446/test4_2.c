#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_word_in_string(const char *str)
{
	int i = 0;
	int k = 0;

	int len = strlen(str) + 1;	
	char arr[len]; //字符串备份strtok
	strcpy(arr,str);

	char arr1[len];//备用数组arr1:用于存储逆序字符串
	memset(arr1,' ',len);//清空备用数组arr1
	
	char *delim = " ";
	char *p = NULL;
	int len_word = 0;

	p = strtok(arr,delim);//分割arr
	while(p != NULL)
	{
		len_word = strlen(p);	
		
		//内循环控制单词打印的长度
		for(i = len_word - 1;i >= 0;i --)
		{
			arr1[k] = *(p + i);
			k ++;
		}
		k ++; //留个空格
	
		p = strtok(NULL,delim);
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

