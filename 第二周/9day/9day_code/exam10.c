#include <stdio.h>
#include <ctype.h>

int main(void)
{
	//将用户输入的字符串中的其他字符转换为?号
	int i = 0;
	char str[100] = {'\0'};
	printf("pls input a string:\n");
	scanf("%[^\n]", str);

	while (str[i] != '\0')
	{
		if (!isalnum(str[i]) && !isspace(str[i]))
		{
			str[i] = '?';	
		}
		i ++;
	}
	printf("%s\n", str);

	return 0;
}

