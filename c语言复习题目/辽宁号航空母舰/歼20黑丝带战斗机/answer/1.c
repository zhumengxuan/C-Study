#include <stdio.h>

int reverse_number(int num)
{
	int ret[20] = {0};
	int count = 0;
	int i = 0;
	int ret_num = 0;

	while(num != 0)
	{
		ret[i] = num % 10;
		i ++;
		count ++;
		num /= 10;
	}

	for(i = 0; i < count; i ++)
	{
		ret_num += ret[i];
		ret_num *= 10;
	}

	return ret_num / 10;
}

int main(void)
{
	int num = 0;
	printf("请输入一个数:\n");
	scanf("%d",&num);

	printf("逆序后:%d\n",reverse_number(num));

	return 0;
}
