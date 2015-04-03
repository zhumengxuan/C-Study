#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int count = 0;
	char str[] = "hello baby welcome  to qianfeng!";
	char *delim = " !.,:;";
	char *p[10] = {NULL};

	p[0] = strtok(str,delim);
	while(p[i] != NULL)
	{
		count ++;
		i ++;
		p[i] = strtok(NULL,delim);
	}

	printf("逆序输出的效果为:\n");
	for(i = count - 1;i >= 0;i --)
	{
		printf("%s ",p[i]);
	}
	printf("\n");

	return 0;
}

