#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "hello world good";
	char *delim = " ";

	char *p = strtok(str, delim);
	if (p != NULL)
	{
		printf("p = %s\n", p);	
		while (1)
		{
			//下次分割根据上一次分割后剩下的结果
			//继续获取余下的内容
			p = strtok(NULL, delim);		
			if (p == NULL)
			{
				break;
			}
			printf("p = %s\n", p);	
		}
	}

	return 0;
}

