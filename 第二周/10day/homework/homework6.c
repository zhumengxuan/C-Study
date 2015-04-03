#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[50] = {'\0'};
	printf("请输入一段字符串:\n");
	scanf("%[^\n]",str);

	int i = 0;
	while(str[i] != '\0')
	{
		if(!isalnum(str[i]))
		{
			str[i] = str[i + 1];
		}
		i ++;	
	}

	printf("%s\n",str);

	return 0;
}
