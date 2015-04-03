#include <stdio.h>

int main(void)
{
	int a = 170;
	int b = 180;
	//判断两个人的身高是否满足下面的关系
	//如果满足,计算结果为1
	//如不满足,结算结果为0
	int result = a < b;
	printf("result = %d\n", result);

	result = a > b;
	printf("result = %d\n", result);

	result = a != b;
	printf("result = %d\n", result);

	return 0;
}

