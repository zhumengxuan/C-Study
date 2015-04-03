#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "you are so cheap man!";
	int i = 0;
	int count = 0;
	char *delim = " !";
	char *p[20] = {NULL};

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

	printf("倒换后的字符串为:\n");
	for(i = count - 1;i >= 0;i --)
	{
		printf("%s ",p[i]);
	}
	printf("\n");

	return 0;
}

