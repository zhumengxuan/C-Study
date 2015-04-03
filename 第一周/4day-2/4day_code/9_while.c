#include <stdio.h>

int main(void)
{
	int i = 0;
	int num1 = 0;
	int num2 = 0;

	printf("请输入num1:\n");
	scanf("%d",&num1);
	printf("请输入num2:\n");
	scanf("%d",&num2);

	if(num1 < num2)
	{
		for(i = num1;i <= num2;i ++)
		{
			printf("%3d",i);
		}
		printf("\n");
	}
	else if(num1 > num2)
	{
		for(i = num2;i <= num1;i ++)
		{
			printf("%3d",i);
		}
		printf("\n");
	}

	return 0;
}

