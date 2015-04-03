#include <stdio.h>
#include <ctype.h>

int main(void)
{
	//将用户输入的字符串中的大写字母转换为小写字母
	int i = 0;
	char str[100] = {'\0'};
	printf("pls input a string:\n");
	scanf("%[^\n]", str);

	while (str[i] != '\0')
	{
		if (isupper(str[i])) //判大写
		{
			str[i] = tolower(str[i]);//转换
		}
		i ++;
	}
	printf("%s\n", str);

	return 0;
}

