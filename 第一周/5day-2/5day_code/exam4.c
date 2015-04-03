#include <stdio.h>

int main(void)
{
/*
	int i = 0;
	int j = 0;

	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	for(i =  0;i < num;i ++)
	{
		for(j = 0;j < num-i;j ++)
		{
			printf("*");
		}
		printf("\n");
	}
*/
	char i = '\0';
	char j = '\0';
	char ch = '\0';

	printf("pls input ch:\n");
	scanf("%c",&ch);

	for(i = 'A';i <= ch;i ++)
	{
		for(j = 'A';j <= 'A'+ch-i;j ++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	
	return 0;
}

