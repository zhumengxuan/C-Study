#include <stdio.h>

int main(void)
{
	int i = 0;
	char str[10] = {'\0'};
	printf("pls input a string:\n");
	fgets(str,10,stdin);

	for(i = 0;i < 10;i ++)
	{
		if(str[i] == '\n')
		{
			str[i] = '\0';
			break;	
		}
	}

	printf("string is:\n");
	printf("%s\n",str);

	return 0;
}

