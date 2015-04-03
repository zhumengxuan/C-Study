#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int count = 0;
	char *p[20] = {NULL};
	char *delim = "!,:;.";

	char str[100] = {'\0'};
	printf("请输入一个字符串:\n");
	scanf("%[^\n]",str);

	p[0] = strtok(str,delim);
	if(p[0] != NULL)
	{
		count ++;
		i ++;

		while(1)
		{
			p[i] = strtok(NULL,delim);
			if(p[i] != NULL)
			{
				count ++;		
			}
			else
				break;

			i ++;
		}
	}

	printf("处理后的字符串为:\n");
	for(i = 0;i < count;i ++)
	{
		printf("%s",p[i]);
	}
	printf("\n");

	return 0;
}

