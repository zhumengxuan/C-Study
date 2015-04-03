#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[100] = {'\0'};
	printf("pls input a string:\n");
	scanf("%[^\n]",str);

	int i = 0;
	int count = 0;

	while(str[i] != '\0')
	{
		if(isalpha(str[i]) && !isalpha(str[i+1]))
		{
			count ++;//单词记数		
		}
		i ++;
	}
	printf("单词个数count = %d\n",count);

	return 0;
}

