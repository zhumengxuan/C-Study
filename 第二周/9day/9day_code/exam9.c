#include <stdio.h>
#include <ctype.h>

int main(void)
{
	//将用户输入的字符串中的数字 写字母全部转换为*号
	int i = 0;
	char str[100] = {'\0'};
	printf("pls input a string:\n");
	scanf("%[^\n]", str);

	while (str[i] != '\0')
	{
		if (isdigit(str[i]) || 
			islower(str[i]))
		{
			str[i] = '*';
		}
		i ++;
	}
	printf("%s\n", str);

	return 0;
}

