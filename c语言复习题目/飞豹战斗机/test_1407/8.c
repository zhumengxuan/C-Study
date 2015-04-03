#include <stdio.h>
#include <ctype.h>
//"sdfgchvjb, mlknk ,"//要考虑是字母以外的其他符号的情况
int countword(char *str)
{
	int i = 0;
	int count = 0;

	while(1)
	{
		//if(str[i]!=' '&&(str[i+1]==' '||str[i+1]=='\0'))
		if(isalpha(str[i]) && !isalpha(str[i+1]))
		{
			count ++;
		}

		if(str[i] == '\0')
			break;

		i++;
	}

	return count;
}

int main(void)
{
	int count = 0;
	char str[100] = {'\0'};
	printf("pls input a string:\n");
	scanf("%[^\n]",str);

	count = countword(str);
	printf("count = %d\n",count);

	return 0;
}

