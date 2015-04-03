#include <stdio.h>

int main(void)
{
	int i = 0;
	int len = -1;
	char ch[50] = {'\0'};

	printf("pls input some numbers:\n");
	for(i = 0;i < 50;i ++)
	{
		scanf("%c",&ch[i]);
		len ++;
		if(ch[i] == '\n')
			break;
	}

	for(i = 0;i < len;i ++)
	{
		printf("%c",ch[i]);
	}
	printf("\n");

	return 0;
}

