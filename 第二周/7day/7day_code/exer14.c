#include <stdio.h>

int func(int day)
{
	int ret = 0;
	
	if(day == 10)	
		ret = 1;
	else
		ret = 2 * (func(day + 1) + 1);
	return ret;
}

int main(void)
{
	int sum = 0;
	int n = 0;
	printf("请输入一个天数n，表示你想求第n天剩下的桃子:\n");
	scanf("%d",&n);

	sum = func(n);
	printf("sum = %d\n",sum);

	return 0;
}

