#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[100] = {'\0'};
	int i = 0;//记数变量
	int max = 0; //标记最长单词的字符个数
	int maxi = 0;//标记最长单词的位置
	int counter = 0;//单词字符个数记数
	int pos = 0;//标记一个单词的起始位置

	printf("pls input some strings:\n");
	scanf("%[^\n]", str);

	//以下是传统解法,还可以使用strtok函数做，更简单
	while(1)
	{
		if(isalpha(str[i]))//str[i]是字母(大写或小写)
		{
			counter ++; //记数增加1
		}

		if(!isalpha(str[i])) //str[i]不是字母
		{
			if(max < counter)
			{
				max = counter;
				maxi = pos;//pos是一个单词的起始位置
			}
		}

		if(!isalpha(str[i]) && isalpha(str[i+1]))
		{
			pos = i + 1;//记录一个单词的起始位置
			counter = 0;//记数初始化为0
		}

		if(str[i] == '\0')//结束符号
			break;

		i ++;//自增
	}

	printf("max = %d\n",max);
	printf("maxi = %d\n",maxi);
	i = maxi;//找到最长单词在什么位置了
	
	while(isalpha(str[i])) //是字母
	{
		printf("%c", str[i]);
		i ++;
	}
	printf("\n");

	return 0;
}

