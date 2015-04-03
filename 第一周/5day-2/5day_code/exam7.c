#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int count = 0;
	int count1 = 0;

	int M = 0;
	int N = 0;
	
	printf("pls input M:\n");
	scanf("%d",&M);
	printf("pls input N:\n");
	scanf("%d",&N);

	printf("M到N范围内的质数有:\n");
	for(i = M;i <= N;i ++)
	{
		count = 0;
		for(j = 1;j < N;j ++)
		{
			if(i % j == 0)
			{
				count ++;
			}
		}

		if(count == 2) //打印的是质数
		{
			printf("%4d",i);
			count1 ++;
		}
		if(count1 == 15)
		{
			count1 = 0;
			printf("\n");
		}
		/*
		printf("M到N范围内的质数有:\n");
		if(count == 2) //打印的是质数
			printf("%3d",i);
		*/
	}
	if(count1 != 15)
		printf("\n");

	return 0;
}

