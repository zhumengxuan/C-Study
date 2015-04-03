#include <stdio.h>
#include <ctype.h>

int numAlpha(const char *str)
{
	int i = 0;
	int count = 0;
	
	while(str[i] != '\0')
	{
		if(isalpha(str[i]))
		{
			count ++;
		}
		i ++;
	}

	return count;
}

int main(void)
{
	int count = 0;
	char str[100] = {'\0'};

	printf("请输入一个字符串:\n");
	scanf("%[^\n]",str);

	count = numAlpha(str);
	printf("count = %d\n",count);

	return 0;
}

