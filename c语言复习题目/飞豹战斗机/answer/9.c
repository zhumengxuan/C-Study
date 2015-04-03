#include <stdio.h>
#include <string.h>

char *mystrrchr(char *str, char c)
{
	int index = 0;
	int i = 0;
	int len = strlen(str);
	for(i = 0; i < len; i ++)
	{
		if(c == str[i])
			index = i;
	}

	return &str[index];

}

int main(void)
{
	char str[] = "hello world!";
	char ch = 'l';
	char *p = NULL;

	p = mystrrchr(str,ch);
	
	if(p == str + 9)
	{
		printf("找对了\n");
	}
	else
		printf("找错了\n");
	return 0;
}
