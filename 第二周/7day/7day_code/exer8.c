#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int j = 0;

	char ret = '\0';
	char ch[100] = {'\0'};
	int len1 = sizeof(ch)/sizeof(ch[0]);
	int count[len1];

	for(i = 0;i < len1;i ++)
	{
		count[i] = 0; //全部初始化为0
	}
	
	printf("请输入一个以.为结束标志的小写字符串:\n");
	scanf("%[^.]",ch);//正则表达式的灵活应用，遇到.则结束
	int len = strlen(ch);

	printf("实际接收到的字符串是:%s\n",ch);
	printf("实际接收到的字符串长度为:%d\n",len);

	for(i = 0;i < len;i ++)
	{
		if(count[i] == 0)
			count[i] = 1;//第一次记录该字符
		else
		{
			count[i] = 0;//置零处理
			continue; //已经记录过了,跳过去不管
		}

		for(j = i + 1;j < len;j ++)
		{
			if(ch[i] == ch[j])
			{
				count[i] ++;//记录该字符出现的次数
				count[j] ++;//后面出现的相同字符也要自增
			}
		}

		if(isalpha(ch[i]))
			printf("%c出现%d次!\n",ch[i],count[i]);
	}
	
	return 0;	
}

