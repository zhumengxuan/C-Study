#include <stdio.h>

int main(void)
{
	int num = 0;
	//int ret = 0;
	int i = 0;
	printf("请输入一个数:\n");
	scanf("%d",&num);

	for(i = 2; i < num; i ++)
	{
		if(num % i == 0)
		{
			printf("%d*",i);
			num /= i;
			i --;
		}
        printf("%d",i);
	}

	printf("\n");
	return 0;
}
