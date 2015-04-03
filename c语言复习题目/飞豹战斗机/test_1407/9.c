#include <stdio.h>

char *mystrrchr(char *str,int c)
{
	int i = 0;
	char *index = NULL;

	while(*(str + i) != '\0')	
	{
		if(c == *(str + i))
		{
			index = str + i;
		}
		i ++;
	}
	return index;
}

int main(void)
{
	char *index = NULL;
	char str[100] = {'\0'};
	printf("pls input a string:\n");
	scanf("%[^\n]",str);
	getchar();

	char c = '\0';
	printf("pls input a letter:\n");
	scanf("%c",&c);

	index = mystrrchr(str,c);
	if(index != NULL)
	{
		printf("最后一个字符%c的位置是:%p\n",c,index);
	}

	return 0;
}

