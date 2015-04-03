#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100] = {'\0'};
	char str1[10] = {'\0'};
	char *s = "***********************";
	char *p = NULL;
	int len = 0;

	printf("pls input a long_string:\n");
	scanf("%[^\n]",str);
	getchar();
	printf("pls input a short_string:\n");
	scanf("%[^\n]",str1);

	len = strlen(str1);
	do
	{
		p = strstr(str,str1);
		if(p != NULL)
			strncpy(p,s,len);	
	}while(p != NULL);

	printf("Now the string is:\n");
	printf("%s\n",str);

	return 0;
}

