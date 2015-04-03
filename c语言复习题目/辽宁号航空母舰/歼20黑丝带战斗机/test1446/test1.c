#include <stdio.h>

int reverse_number(int num)
{
	int ret = 0;
	while(num)	
	{
		ret = ret * 10 + num % 10;
		num /= 10;
	}
	return ret;
}

int main(void)
{
	int num = 0;
	printf("请输入一个正整数:\n");
	scanf("%d",&num);

	int result = reverse_number(num);
	printf("result = %d\n",result);

	return 0;
}
