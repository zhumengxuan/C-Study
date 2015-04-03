#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int max = 0;

	int sum = 0;
	printf("请输入sum:\n");
	scanf("%d",&sum);


	for(i = 1; i <= 18; i ++)
	{
		for(j = 1; j <= sum - i; j ++)
		{
				if(max < i*j*(sum - i - j))
				{
					max = i*j*(sum - i - j);
					a = i;
					b = j;
					c = sum - i - j;
				}
		}
	}

	printf("max = %d\n",max);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);

	return 0;
}
