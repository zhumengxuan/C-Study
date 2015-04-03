#include <stdio.h>

int main(void)
{
	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	int i = 0;
	for(i = 2;i < num;i ++)
	{
		if(num % i == 0)
		{
			printf("%d*",i);
			num /= i;
			i --; //停顿一次
		}
	}
	printf("%d\n",i);

	return 0;
}

