#include <stdio.h>

const char *mystrrchr(const char *str,char ch)
{
	int i = 0;
	const char *p = NULL;

	while(*(str+i) != '\0')
	{
		if(*(str+i) == ch)
		{
			p = str+i;		
		}
		i ++;
	}
	return p;
}

int main(void)
{
	char str[100];
	printf("pls input a string:\n");
	scanf("%[^\n]",str);
	getchar();

	char ch;
	printf("pls input ch:\n");
	scanf("%c",&ch);

	const char *p = mystrrchr(str,ch);
	if(p != NULL)
	{
		printf("%c 最后一次出现的地址为%p,离首地址的距离为%ld\n",
				ch,p,p-str);
	}

	return 0;
}

