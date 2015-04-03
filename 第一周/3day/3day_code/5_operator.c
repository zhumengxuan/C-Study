#include <stdio.h>
//x = 1, y = 2
//x + y * x / y % x;

int main(void)
{
	float sum = 0.0;
	//如果除数或者被除数一方为小数
	//则结果为数学中的除法结果
	sum = 10 / 3.0;
	//浮点数不能进行模运算
	//sum = 10 % 3.0;
	printf("sum = %f\n", sum);

	int x = 0;
	int y = 0;
	int ret = 0;
	x = 1;
	y = 2;
	ret = x + y * x / y % x;
	printf("ret = %d\n", ret);

	return 0;
}

