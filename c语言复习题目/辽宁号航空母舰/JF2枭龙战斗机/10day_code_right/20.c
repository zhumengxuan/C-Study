#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int n = 0;
	int counter = 0;
  
	printf("pls input n:\n");
	scanf("%d", &n);

	for(i = n; i > 0; i -= 2)//打印的行数控制
	{
		for(j = 0; j < counter; j ++)
		{
			printf(" ");//打空格的控制
		}
		for(j = 0; j < i; j ++)//打印*号的个数和i一致
		{
			printf("*");//打*号的控制
		}
		counter ++;//每次空格数增加1
		printf("\n");
	}

	return 0;
}

