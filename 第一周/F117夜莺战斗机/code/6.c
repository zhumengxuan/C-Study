#include <stdio.h>

int main(void)
{
	char ch = '\0';
	char a = '\0';
	char b = '\0';
	char c = '\0';
	printf("请输入c是否和x比(Y/N):\n");
	scanf("%c",&ch);
	getchar();

	if(ch == 'N')
	{
		printf("请输入c是否和z比(Y/N):\n");
		scanf("%c",&ch);
		getchar();

		if(ch == 'N')
		{
			printf("c和y比赛\n");
			c = 'y';
		}
	}

	printf("请输入a是否和x比赛(Y/n)\n");
	scanf("%c",&ch);
	getchar();

	if(ch == 'N')
		printf("a和z比赛\n");

	printf("b和x比赛\n");
	return 0;
}
