#include <stdio.h>

void binary(int x);

int main(void)
{
	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	binary(num);
	printf("\n");

	return 0;
}

void binary(int x)
{
	if (x == 0)
	{
		return ;
	}
	binary(x / 2); //进入递归函数

	printf("%d", x % 2); //这条语句最后运行
}

