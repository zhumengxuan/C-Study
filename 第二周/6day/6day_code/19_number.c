#include <stdio.h>

int main(void)
{
	int i = 0;
	char ch = '\0';
	int age[10] = {0};
	int len = 0;

	printf("pls input some numbers:\n");
	for(i = 0;i < 10;i ++)
	{
		scanf("%d",&age[i]);
		len ++;
		ch = getchar();
		if(ch == '\n')
			break;
	}

	for(i = 0;i < len;i ++)
	{
		printf("%d ",age[i]);
	}
	printf("\n");

	return 0;
}

