#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch = '\0';
	char str[100] = {'\0'};
	char *p = NULL;

	printf("pls input a char:\n");
	scanf("%c",&ch);
	getchar();
	printf("pls input a string:\n");
	scanf("%s",str);

	do
	{
		p = strchr(str,ch);
		if(p != NULL)
			*p = '*';
	}while(p != NULL);

	printf("Now the string is:\n");
	printf("%s\n",str);

	return 0;
}

