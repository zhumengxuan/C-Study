#include <stdio.h>

int main(void)
{
	char ch = '\0';
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int cha = 0;
	printf("请输入一个大写字母:\n");
	scanf("%c",&ch);

	cha = ch - 'A';
	for(i = 0; i <= cha; i ++)
	{
		for(j = 0; j < cha - i; j ++)
		{
			printf(" ");
		}

		for(k = 0; k <= i; k ++ )
		{
			printf("%c",ch - (cha - k));
		}

		for(m = 1; m <= i; m ++)
		{
			if(i == 0)
				continue;
			else
			{
				printf("%c", ch - m);
			}
		}

		printf("\n");
	}

	
	return 0;
}
