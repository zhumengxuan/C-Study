#include <stdio.h>

int main(void)
{
	char ch = '\0';
	int i = 0;
	int j = 0;
	int n = 0;
	printf("请输入一个大写字母:\n");
	scanf("%c",&ch);

	n = ch - 'A';
	for(i = 0; i <= ch - 'A'; i ++)
	{
		for(j= 0; j < i; j ++)
		{
			printf(" ");
		}

		for(int k = 0; k <= ch - 'A'; k ++)
		{
			if((ch - k - i) >= 'A')
				printf("%c",ch - k - i);

		}

		for(int m = 0; m < i; m ++)
		{
			printf("%c",ch - (n - m - 1));
		}

		printf("\n");
	}

	return 0;
}
