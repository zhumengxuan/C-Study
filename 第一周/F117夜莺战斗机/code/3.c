#include <stdio.h>

int main(void)
{
	char ch = '\0';
	int i = 0;
	int j = 0;
	int n = 0;
	int k = 0;
	int m = 0;
	int o = 0;
	printf("请输入一个大写字母:\n");
	scanf("%c",&ch);

	n = ch - 'A';
	for(i = 0; i <= n; i ++)
	{
		//控制左上角的空格输出
		for(j = 0; j < n - i; j ++)
		{
			printf(" ");
			
		}

		//控制左上角字母输出
		for(k = 0; k <= i; k ++)
		{
			if(k == 0)
				printf("%c", ch - (n - i));
			else
				printf(" ");
		}

		//输出右上角的字母
		for(m = 1; m <= i; m ++)
		{
			if(m == i)
				printf("%c",ch - (n - i));
			else
				printf(" ");
		}
		printf("\n");
	}

	for(i = n + 1; i <= 2 * n; i ++)
	{
		//控制左下角空格三角的输出
		for(j = n + 1; j <= i; j ++)
		{
			printf(" ");
			
		}

		//控制左下角字母输出
		for(k = 0; k <= 2 * n -i; k ++)
		{
			if(k == 0)
				printf("%c",ch -(i - n));
			else
				printf(" ");
		}

		//输出右下角的字母
		for(m = 0; m <= 2 * n - i; m ++)
		{
			if(m == 2 * n - 1 - i)
				printf("%c",ch - (i - n));
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
