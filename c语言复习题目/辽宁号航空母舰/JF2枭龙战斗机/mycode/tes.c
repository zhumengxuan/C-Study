#include <stdio.h>
#include <ctype.h>

void countword(char *str)
{
	int count = 0;
	int i = 0;
	while(str[i] != '\0')
	{
		if(isalpha(str[i]) && !isalpha(str[i + 1]) )
			count ++;
		i ++;
	}
	printf("%d\n",count);
}

int main(void)
{
	char str[200] = {'\0'};
	scanf("%[^\n]",str);
	countword(str);
	return 0;
}
