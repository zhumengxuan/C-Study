#include <stdio.h>
#include <string.h>

//不考虑标点符号的情况
int indexOfLongestWord(const char *a,int n)
{
	int i = 0;
	int max = 0; //记录最长单词
	int index = 0;//过程中“过渡最长单词”起点的下标
	int pos = 0;//单词起点的下标
	int length = 0; //单词长度记数

	for(i = 0;i < n;i ++) //这样控制的话，就不会出现\0	
	{
		if(a[i] != ' ') //前提是只由字母或空格构成，也就是没有标点
		{
			length ++; //单词字符个数记数
		}

		if(a[i] == ' ')
		{
			if(max < length)
			{
				max = length; //记录单词的长度
				index = pos; //位置pos的初始值是为0的
			}
		}

		if(a[i] == ' '&&a[i+1] != ' ')
		{
			pos = i + 1; //记录位置为下一个
			length = 0; //单词长度记数归零，重新记数
		}

		//if(a[i] == '\0')
		//	break;
	}

	printf("最长单词的长度为:%d\n",max);
	
	return index;
}


int main(void)
{
	int i = 0;//记数变量
	int max_index = 0; //用于接收返回值，即最长单词的下标
	char ch[100] = {'\0'};
	printf("请输入一个英语句子:\n");
	scanf("%[^\n]",ch);

	int len = strlen(ch);
	max_index = indexOfLongestWord(ch,len);
	printf("最长单词的起点的下标为:%d\n",max_index);

	i = max_index; 
	while(ch[i] != ' '&& ch[i] != '\0')
	{
		printf("%c",ch[i]);
		i ++;
	}
	printf("\n");

	return 0;
}

