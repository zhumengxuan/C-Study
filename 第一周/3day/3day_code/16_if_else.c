#include <stdio.h>

int main(void)
{
	float accept_rate = 0.0;
	printf("请输入学生对讲师的满意率:\n");
	scanf("%f", &accept_rate);

	if (accept_rate >= 0.97)
	{
		printf("千锋发绩效!\n");
	}
	else
	{
		printf("喝西北风!\n");	
	}

	return 0;
}

