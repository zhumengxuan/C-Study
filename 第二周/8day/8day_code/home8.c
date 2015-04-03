#include <stdio.h>

//注意:本程序是只考虑没有标点符号的英文句子的情况
//也就是说前提是英语句子中只会出现单词和空格以及\0结束符
int main(void)
{
	char str[100] = {'\0'};
	int i = 0;
	int counter = 0;
	int max = 0;
	int index = 0;
	int pos = 0;

	printf("请输入一个英语句子:\n");
	scanf("%[^\n]", str);

	while(1) //别管这个字符串的长度，反正以\0结尾
	{
		//if(str[i] != ' ')
	    //如果按上面的写法，当最长单词在最末尾的时候，会把\0也算
		//进去的，这样就达不到我们预期的结果了	
		if(str[i] != ' '&&str[i] != '\0') 
		{
			counter ++; //计数器
		}

		if(str[i] == ' ' || str[i] == '\0')
		{
			if(max < counter)
			{
				max = counter;//记录最长单词的字符个数
				index = pos; //记录最长单词的起始下标
			}
		}

		if(str[i] == ' ' && str[i + 1] != ' ')
		{
			pos = i + 1; //记录每个单词的起始下标
			counter = 0; //单词字符个数归零
		}

		if(str[i] == '\0')
			break;

		i ++;
	}

	printf("最长的单词字符数为max = %d\n", max);
	printf("最长的单词起始下标为index = %d\n",index);

	i = index;//找到最长单词在什么位置了
	while(str[i] != ' ' && str[i] != '\0')
	{
		printf("%c", str[i]);//打印最长单词
		i ++;
	}
	printf("\n");

	return 0;
}

