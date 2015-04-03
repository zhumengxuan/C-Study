#include <stdio.h>
#include <ctype.h>

int str_word(char *str)
{
	int count = 0;
	int i = 0;

	while(str[i] != '\0')
	{
		if(isalpha(str[i]) && !isalpha(str[i + 1]))
			count ++;
	
		i ++;
	}

	return count;

}

int main(void)
{
	int count = 0;
	char str[100] = {'\0'};

	printf("请输入一段字符串:\n");
	scanf("%[^\n]",str);

	count = str_word(str);

	printf("一共有%d个单词!\n",count);

	return 0;
}
