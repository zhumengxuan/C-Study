#include <stdio.h>
#include <string.h>

void print_string(const char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int h = 0;
	int m = 0;
	int n = 0;
	int len = strlen(s);	
	char arr[len + 1][2 * len - 1];

	for(i = 0;i < (len + 1) * (2 * len - 1);i ++)
	{
		arr[0][i] = ' ';
	}

	for(i = 0;i < len;i ++)
	{
		for(j = 0;j < 2 * len - 1;j ++)
		{
			if(i + j == len - 1)
			{
				arr[i][j] = *(s + k);
				k ++;
			}
			
			if(j - i == len - 1)
			{
				arr[i][j] = *(s + h);
				h ++;
			}
		}
	}
			
	for(i = 1;i < len + 1;i ++)
	{
		for(j = 0;j < 2 * len - 1;j ++)
		{
			if(i + j == len)
			{
				arr[i][j] = *(s + m);
				m ++;
			}
			
			if(j - i == len - 2)
			{
				arr[i][j] = *(s + n);
				n ++;
			}
		}
	}

	printf("图形为:\n");
	for(i = 0;i < len + 1;i ++)
	{
		for(j = 0;j < 2 * len - 1;j ++)
		{
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	char str[100] = {'\0'};
	printf("请输入一个字符串:\n");
	scanf("%[^\n]",str);

	print_string(str);

	return 0;
}

