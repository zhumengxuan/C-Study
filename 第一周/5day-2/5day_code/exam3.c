#include <stdio.h>

int main(void)
{
	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	int ret = 0;
	while(num)
	{
		ret = ret * 10 + num % 10;
		num /= 10;
	}
	printf("ret = %d\n",ret);

	return 0;
}

